// ECB (Electronic Codebook) Mode
// Simplest mode - each block is encrypted/decrypted independently
// Cipher-agnostic: works with AES, SM4, or any 128-bit block cipher
module MODE_ECB
    import CRYPTO_PKG::*;
    import BLOCK_CIPHER_CONFIG_PKG::*;
#(
    parameter MAX_KEYSIZE = 32,  // Maximum key size in bytes
    parameter USE_PADDING = 1   // Enable padding for non-block-aligned data
)(
    input  logic         clk,
    input  logic         rst,

    // Control
    input  logic         start,      // Start processing
    input  operation_t   operation,  // Operation type (OP_ENCRYPT/OP_DECRYPT)
    output logic         busy,       // Processing in progress
    output logic         done,       // Operation complete

    // Data stream interface (byte-oriented)
    input  logic         s_valid,
    output logic         s_ready,
    input  logic [7:0]   s_data,
    input  logic         s_last,

    output logic         m_valid,
    input  logic         m_ready,
    output logic [7:0]   m_data,
    output logic         m_last,

    // Key input
    input  logic [MAX_KEYSIZE*8-1:0] key,

    // Padding configuration
    input  logic          padding_enable, // Enable/disable padding
    input  padding_type_t pad_type,       // Padding scheme selection (enum)
    output logic          pad_error,      // Padding validation error (decrypt only)

    // Block Cipher Core Interface (cipher-agnostic)
    BLOCK_CIPHER_IF.master cipher_if
);
    
    // Internal signals
    logic                  bb_to_pad_valid, pad_to_bb_ready;
    logic [127:0]         bb_to_pad_data;
    logic                  bb_to_pad_last;
    logic [4:0]            bb_to_pad_bytes;
    
    logic                  pad_to_aes_valid, aes_to_pad_ready;
    logic [127:0]         pad_to_aes_data;
    logic                  pad_to_aes_last;
    
    logic                  aes_out_valid;
    logic [127:0]         aes_out_data;
    logic                  aes_out_ready;
    logic                  aes_out_last;
    
    logic                  unpad_valid, unpad_ready;
    logic [127:0]         unpad_data;
    logic                  unpad_last;
    logic [3:0]           pad_length;
    
    logic                  result_valid, result_ready;
    logic [127:0]         result_data;
    logic                  result_last;
    logic [4:0]            result_bytes;
    
    // FSM for overall control
    typedef enum logic [2:0] {
        ECB_IDLE,
        ECB_PROCESS,
        ECB_DRAIN
    } ecb_state_t;
    
    ecb_state_t state, next_state;
    
    // State machine
    always_ff @(posedge clk) begin
        if (rst) begin
            state <= ECB_IDLE;
        end else begin
            state <= next_state;
        end
    end
    
    always_comb begin
        next_state = state;
        
        case (state)
            ECB_IDLE: begin
                if (start) begin
                    next_state = ECB_PROCESS;
                end
            end
            
            ECB_PROCESS: begin
                if (s_last && s_valid && s_ready) begin
                    next_state = ECB_DRAIN;
                end
            end
            
            ECB_DRAIN: begin
                if (result_last && result_valid && result_ready) begin
                    next_state = ECB_IDLE;
                end
            end
        endcase
    end
    
    assign busy = (state != ECB_IDLE);
    assign done = (state == ECB_DRAIN) && result_last && result_valid && result_ready;
    
    // Input block buffer
    BLOCK_BUFFER #(
        .BLOCK_SIZE(128),
        .DATA_WIDTH(8)
    ) input_buffer (
        .clk(clk),
        .rst(rst),
        .s_valid(s_valid && (state == ECB_PROCESS)),
        .s_ready(s_ready),
        .s_data(s_data),
        .s_last(s_last),
        .b_valid(bb_to_pad_valid),
        .b_ready(pad_to_bb_ready),
        .b_data(bb_to_pad_data),
        .b_last(bb_to_pad_last),
        .b_bytes(bb_to_pad_bytes)
    );
    
    // Padding controller (encryption path)
    generate
        if (USE_PADDING) begin : gen_padding
            PADDING_CONTROLLER #(
                .BLOCK_SIZE(128)
            ) padding_ctrl (
                .clk(clk),
                .rst(rst),
                .pad_type(pad_type),
                .in_valid((operation == OP_ENCRYPT) ? bb_to_pad_valid : 1'b0),
                .in_ready(pad_to_bb_ready),
                .in_block(bb_to_pad_data),
                .in_bytes(bb_to_pad_bytes),
                .in_last(bb_to_pad_last),
                .out_valid(pad_to_aes_valid),
                .out_ready(aes_to_pad_ready),
                .out_block(pad_to_aes_data),
                .out_last(pad_to_aes_last),
                .remove_padding(1'b0),
                .pad_length(),
                .pad_error()
            );
        end else begin : gen_no_padding
            // Direct connection without padding
            assign pad_to_aes_valid = bb_to_pad_valid;
            assign pad_to_bb_ready = aes_to_pad_ready;
            assign pad_to_aes_data = bb_to_pad_data;
            assign pad_to_aes_last = bb_to_pad_last;
        end
    endgenerate
    
    // AES core processing
    logic aes_busy;
    logic block_last_reg;
    
    always_ff @(posedge clk) begin
        if (rst) begin
            aes_busy <= 1'b0;
            aes_out_valid <= 1'b0;
            block_last_reg <= 1'b0;
        end else begin
            // Start AES operation
            if (((operation == OP_ENCRYPT) ? pad_to_aes_valid : bb_to_pad_valid) && 
                cipher_if.ready && !aes_busy) begin
                aes_busy <= 1'b1;
                block_last_reg <= (operation == OP_ENCRYPT) ? pad_to_aes_last : bb_to_pad_last;
            end
            
            // Complete AES operation
            if (cipher_if.valid) begin
                aes_busy <= 1'b0;
                aes_out_valid <= 1'b1;
                aes_out_data <= cipher_if.block_out;
                aes_out_last <= block_last_reg;
            end
            
            // Clear output valid when accepted
            if (aes_out_valid && aes_out_ready) begin
                aes_out_valid <= 1'b0;
            end
        end
    end
    
    // AES core connections (clk and rst connected at top level)
    assign cipher_if.start = ((operation == OP_ENCRYPT) ? pad_to_aes_valid : bb_to_pad_valid) && 
                          cipher_if.ready && !aes_busy;
    assign cipher_if.encrypt = (operation == OP_ENCRYPT);
    assign cipher_if.block_in = (operation == OP_ENCRYPT) ? pad_to_aes_data : bb_to_pad_data;
    assign cipher_if.key = key;
    
    assign aes_to_pad_ready = cipher_if.ready && !aes_busy;
    
    // Unpadding (decryption path)
    generate
        if (USE_PADDING) begin : gen_unpadding
            PADDING_CONTROLLER #(
                .BLOCK_SIZE(128)
            ) unpadding_ctrl (
                .clk(clk),
                .rst(rst),
                .pad_type(pad_type),
                .in_valid((operation == OP_DECRYPT) ? aes_out_valid : 1'b0),
                .in_ready(aes_out_ready),
                .in_block(aes_out_data),
                .in_bytes(5'd16),  // Always full blocks from AES
                .in_last(aes_out_last),
                .out_valid(unpad_valid),
                .out_ready(unpad_ready),
                .out_block(unpad_data),
                .out_last(unpad_last),
                .remove_padding(operation == OP_DECRYPT),
                .pad_length(pad_length),
                .pad_error(pad_error)
            );
            
            // Calculate actual data bytes in last block
            always_comb begin
                if ((operation == OP_DECRYPT) && unpad_last && unpad_valid) begin
                    result_bytes = 5'd16 - pad_length;
                end else begin
                    result_bytes = 5'd16;
                end
            end
        end else begin : gen_no_unpadding
            assign unpad_valid = aes_out_valid;
            assign aes_out_ready = unpad_ready;
            assign unpad_data = aes_out_data;
            assign unpad_last = aes_out_last;
            assign pad_error = 1'b0;
            assign result_bytes = 5'd16;
        end
    endgenerate
    
    // Result selection
    assign result_valid = (operation == OP_ENCRYPT) ? aes_out_valid : unpad_valid;
    assign result_data = (operation == OP_ENCRYPT) ? aes_out_data : unpad_data;
    assign result_last = (operation == OP_ENCRYPT) ? aes_out_last : unpad_last;
    assign unpad_ready = (operation == OP_DECRYPT) ? result_ready : 1'b1;
    
    if (!USE_PADDING) begin : gen_direct_ready
        assign aes_out_ready = (operation == OP_ENCRYPT) ? result_ready : unpad_ready;
    end
    
    // Output block-to-stream conversion
    logic [4:0] out_byte_count;
    logic [127:0] out_buffer;
    logic out_buffer_valid;
    logic last_block_out;
    
    always_ff @(posedge clk) begin
        if (rst) begin
            out_byte_count <= 5'd0;
            out_buffer <= 128'd0;
            out_buffer_valid <= 1'b0;
            last_block_out <= 1'b0;
        end else begin
            // Load new block
            if (result_valid && result_ready) begin
                out_buffer <= result_data;
                out_buffer_valid <= 1'b1;
                out_byte_count <= 5'd0;
                last_block_out <= result_last;
            end
            
            // Output bytes
            if (out_buffer_valid && m_ready && m_valid) begin
                out_byte_count <= out_byte_count + 1;
                
                // Check if this was the last byte of the block
                if ((last_block_out && out_byte_count == result_bytes - 1) ||
                    (!last_block_out && out_byte_count == 15)) begin
                    out_buffer_valid <= 1'b0;
                end
            end
        end
    end
    
    assign result_ready = !out_buffer_valid || 
                         (out_byte_count == 15 && m_ready);
    
    assign m_valid = out_buffer_valid;
    assign m_data = out_buffer[out_byte_count*8 +: 8];
    assign m_last = last_block_out && (out_byte_count == result_bytes - 1);
    
endmodule : MODE_ECB