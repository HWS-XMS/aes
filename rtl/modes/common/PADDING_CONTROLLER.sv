// Padding Controller
// Implements various padding schemes for block ciphers
module PADDING_CONTROLLER
    import AES_CONFIG_PKG::*;
#(
    parameter BLOCK_SIZE = 128  // Block size in bits
)(
    input  logic                    clk,
    input  logic                    rst,
    
    // Padding scheme selection
    input  padding_type_t           pad_type,  // Enum: PAD_PKCS7, PAD_ZERO, PAD_ANSI, PAD_ISO
    
    // Input block with byte count
    input  logic                    in_valid,
    output logic                    in_ready,
    input  logic [BLOCK_SIZE-1:0]   in_block,
    input  logic [$clog2(BLOCK_SIZE/8):0] in_bytes,  // Valid bytes in block
    input  logic                    in_last,
    
    // Output padded block
    output logic                    out_valid,
    input  logic                    out_ready,
    output logic [BLOCK_SIZE-1:0]   out_block,
    output logic                    out_last,
    
    // For removing padding (decryption)
    input  logic                    remove_padding,
    output logic [3:0]              pad_length,  // Number of padding bytes removed
    output logic                    pad_error    // Invalid padding detected
);
    
    localparam BYTES_PER_BLOCK = BLOCK_SIZE / 8;
    
    // Padding types are now defined in AES_CONFIG_PKG as enums
    
    // Internal signals
    logic [BLOCK_SIZE-1:0] padded_block;
    logic [3:0] num_pad_bytes;
    logic need_padding;
    
    // Calculate padding requirements
    always_comb begin
        need_padding = in_last && (in_bytes < BYTES_PER_BLOCK);
        num_pad_bytes = need_padding ? (BYTES_PER_BLOCK - in_bytes) : 0;
    end
    
    // Apply padding
    always_comb begin
        padded_block = in_block;
        
        if (!remove_padding && need_padding) begin
            case (pad_type)
                PAD_PKCS7: begin
                    // PKCS#7: All padding bytes have value equal to padding length
                    for (int i = in_bytes; i < BYTES_PER_BLOCK; i++) begin
                        padded_block[i*8 +: 8] = num_pad_bytes;
                    end
                end
                
                PAD_ZERO: begin
                    // Zero padding: All padding bytes are 0x00
                    for (int i = in_bytes; i < BYTES_PER_BLOCK; i++) begin
                        padded_block[i*8 +: 8] = 8'h00;
                    end
                end
                
                PAD_ANSI: begin
                    // ANSI X9.23: Zero bytes followed by padding length
                    for (int i = in_bytes; i < BYTES_PER_BLOCK - 1; i++) begin
                        padded_block[i*8 +: 8] = 8'h00;
                    end
                    padded_block[(BYTES_PER_BLOCK-1)*8 +: 8] = num_pad_bytes;
                end
                
                PAD_ISO: begin
                    // ISO 10126: Random bytes followed by padding length
                    // Note: For simplicity, using pseudo-random pattern
                    for (int i = in_bytes; i < BYTES_PER_BLOCK - 1; i++) begin
                        padded_block[i*8 +: 8] = 8'hA5 ^ i[7:0];  // Simple pattern
                    end
                    padded_block[(BYTES_PER_BLOCK-1)*8 +: 8] = num_pad_bytes;
                end
            endcase
        end
    end
    
    // Padding removal and validation
    always_comb begin
        pad_length = 4'd0;
        pad_error = 1'b0;
        
        if (remove_padding && in_last) begin
            case (pad_type)
                PAD_PKCS7: begin
                    pad_length = in_block[(BYTES_PER_BLOCK-1)*8 +: 8];
                    
                    // Validate PKCS#7 padding
                    if (pad_length == 0 || pad_length > BYTES_PER_BLOCK) begin
                        pad_error = 1'b1;
                    end else begin
                        // Check all padding bytes have correct value
                        for (int i = 0; i < BYTES_PER_BLOCK; i++) begin
                            if (i >= BYTES_PER_BLOCK - pad_length) begin
                                if (in_block[i*8 +: 8] != pad_length) begin
                                    pad_error = 1'b1;
                                end
                            end
                        end
                    end
                end
                
                PAD_ANSI: begin
                    pad_length = in_block[(BYTES_PER_BLOCK-1)*8 +: 8];
                    
                    // Validate ANSI X9.23 padding
                    if (pad_length == 0 || pad_length > BYTES_PER_BLOCK) begin
                        pad_error = 1'b1;
                    end else begin
                        // Check zeros before length byte
                        for (int i = BYTES_PER_BLOCK - pad_length; i < BYTES_PER_BLOCK - 1; i++) begin
                            if (in_block[i*8 +: 8] != 8'h00) begin
                                pad_error = 1'b1;
                            end
                        end
                    end
                end
                
                // Zero padding and ISO 10126 cannot be reliably removed
                default: begin
                    pad_length = 4'd0;
                    pad_error = 1'b0;
                end
            endcase
        end
    end
    
    // Simple flow-through with padding logic
    always_ff @(posedge clk) begin
        if (rst) begin
            out_valid <= 1'b0;
        end else begin
            if (out_ready || !out_valid) begin
                out_valid <= in_valid;
            end
        end
    end
    
    assign in_ready = !out_valid || out_ready;
    assign out_block = remove_padding ? in_block : padded_block;
    assign out_last = in_last;
    
endmodule : PADDING_CONTROLLER