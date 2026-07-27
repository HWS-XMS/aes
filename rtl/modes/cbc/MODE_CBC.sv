// CBC (Cipher Block Chaining) Mode
// Each plaintext block is XORed with previous ciphertext block before encryption
// Cipher-agnostic: works with AES, SM4, or any 128-bit block cipher
module MODE_CBC
    import CRYPTO_PKG::*;
    import BLOCK_CIPHER_CONFIG_PKG::*;
#(
    parameter MAX_KEYSIZE = 32,   // Maximum key size in bytes
    parameter USE_PADDING = 1     // Enable padding support
)(
    input  logic         clk,
    input  logic         rst,

    // Control
    input  logic         start,      // Start new CBC operation
    input  operation_t   operation,  // Operation type (OP_ENCRYPT/OP_DECRYPT)
    output logic         busy,       // Operation in progress
    output logic         done,       // Operation complete

    // Streaming interface
    input  logic         s_valid,
    output logic         s_ready,
    input  logic [7:0]   s_data,
    input  logic         s_last,

    output logic         m_valid,
    input  logic         m_ready,
    output logic [7:0]   m_data,
    output logic         m_last,

    // Key and IV
    input  logic [MAX_KEYSIZE*8-1:0] key,
    input  logic [127:0]         iv,    // Initialization Vector

    // Padding configuration
    input  logic          padding_enable, // Enable/disable padding
    input  padding_type_t pad_type,       // Padding scheme selection (enum)
    output logic          pad_error,      // Padding validation error

    // Block Cipher Core Interface (cipher-agnostic)
    BLOCK_CIPHER_IF.master cipher_if
);
    
    // State machine
    typedef enum logic [2:0] {
        CBC_IDLE,
        CBC_PROCESS,
        CBC_DRAIN
    } cbc_state_t;
    
    cbc_state_t state, next_state;
    
    // Internal signals
    logic [127:0] feedback_block;     // Previous ciphertext for chaining
    logic first_block;                // Processing first block
    logic aes_busy;                   // Track AES operation
    
    // Block buffer signals
    logic bb_b_valid, bb_b_ready;
    logic [127:0] bb_b_data;
    logic [3:0] bb_b_bytes;
    logic bb_b_last;
    
    // Padding signals
    logic pad_out_valid, pad_in_ready;
    logic [127:0] pad_out_data;
    logic pad_out_last;
    
    // Output serializer signals
    logic [127:0] output_block;
    logic [3:0] output_bytes;
    logic output_valid, output_last;
    logic [3:0] out_idx;
    logic serializing;
    
    // Instantiate block buffer
    BLOCK_BUFFER input_buffer (
        .clk(clk),
        .rst(rst),
        .s_valid(s_valid),
        .s_ready(s_ready),
        .s_data(s_data),
        .s_last(s_last),
        .b_valid(bb_b_valid),
        .b_ready(bb_b_ready),
        .b_data(bb_b_data),
        .b_bytes(bb_b_bytes),
        .b_last(bb_b_last)
    );
    
    // Padding controller (encryption only)
    generate
        if (USE_PADDING) begin : gen_padding
            PADDING_CONTROLLER #(
                .BLOCK_SIZE(128)
            ) padding_ctrl (
                .clk(clk),
                .rst(rst),
                .pad_type(pad_type),
                .in_valid((operation == OP_ENCRYPT) ? bb_b_valid : 1'b0),
                .in_ready(pad_in_ready),
                .in_block(bb_b_data),
                .in_bytes(bb_b_bytes),
                .in_last(bb_b_last),
                .out_valid(pad_out_valid),
                .out_ready((operation == OP_ENCRYPT) && cipher_if.ready && !aes_busy),
                .out_block(pad_out_data),
                .out_last(pad_out_last),
                .remove_padding(1'b0),
                .pad_length(),
                .pad_error()
            );
        end else begin : gen_no_padding
            assign pad_out_valid = bb_b_valid;
            assign pad_out_data = bb_b_data;
            assign pad_out_last = bb_b_last;
            assign pad_in_ready = (operation == OP_ENCRYPT) && cipher_if.ready && !aes_busy;
            assign pad_error = 1'b0;
        end
    endgenerate
    
    // Connect block buffer ready based on mode
    assign bb_b_ready = (operation == OP_ENCRYPT) ? pad_in_ready : 
                       ((operation == OP_DECRYPT) && cipher_if.ready && !aes_busy);
    
    // State machine
    always_ff @(posedge clk) begin
        if (rst) begin
            state <= CBC_IDLE;
            feedback_block <= '0;
            first_block <= 1'b1;
            aes_busy <= 1'b0;
        end else begin
            state <= next_state;
            
            // Initialize feedback with IV on start
            if (start && state == CBC_IDLE) begin
                feedback_block <= iv;
                first_block <= 1'b1;
            end
            
            // Track AES operation
            if (cipher_if.start && cipher_if.ready) begin
                aes_busy <= 1'b1;
            end else if (cipher_if.valid) begin
                aes_busy <= 1'b0;
            end
            
            // Update feedback block
            if (operation == OP_ENCRYPT) begin
                // For encryption, update after AES completes
                if (cipher_if.valid) begin
                    feedback_block <= cipher_if.block_out;
                    first_block <= 1'b0;
                end
            end else begin
                // For decryption, save ciphertext before AES
                if (cipher_if.start && cipher_if.ready) begin
                    feedback_block <= bb_b_data;
                    first_block <= 1'b0;
                end
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        case (state)
            CBC_IDLE: begin
                if (start) begin
                    next_state = CBC_PROCESS;
                end
            end
            
            CBC_PROCESS: begin
                if (((operation == OP_ENCRYPT) ? pad_out_last : bb_b_last) && 
                    cipher_if.start && cipher_if.ready) begin
                    next_state = CBC_DRAIN;
                end
            end
            
            CBC_DRAIN: begin
                if (!serializing && !aes_busy && !output_valid) begin
                    next_state = CBC_IDLE;
                end
            end
        endcase
    end
    
    // AES interface control
    logic [127:0] aes_input_block;
    
    always_comb begin
        if (encrypt) begin
            // Encryption: XOR plaintext with feedback before AES
            aes_input_block = pad_out_data ^ feedback_block;
        end else begin
            // Decryption: Send ciphertext directly to AES
            aes_input_block = bb_b_data;
        end
    end
    
    assign cipher_if.start = (state == CBC_PROCESS) && !aes_busy && cipher_if.ready &&
                         ((operation == OP_ENCRYPT) ? pad_out_valid : bb_b_valid);
    assign cipher_if.encrypt = (operation == OP_ENCRYPT);
    assign cipher_if.block_in = aes_input_block;
    assign cipher_if.key = key;
    
    // Capture AES output
    logic [127:0] aes_result;
    logic aes_result_valid, aes_result_last;
    
    always_ff @(posedge clk) begin
        if (rst) begin
            aes_result_valid <= 1'b0;
            aes_result_last <= 1'b0;
        end else begin
            if (cipher_if.valid) begin
                aes_result_valid <= 1'b1;
                aes_result <= cipher_if.block_out;
                aes_result_last <= (operation == OP_ENCRYPT) ? pad_out_last : bb_b_last;
            end else if (aes_result_valid && !output_valid) begin
                aes_result_valid <= 1'b0;
            end
        end
    end
    
    // Process output based on mode
    logic [127:0] processed_block;
    
    always_comb begin
        if (encrypt) begin
            // Encryption: output is the ciphertext from AES
            processed_block = aes_result;
        end else begin
            // Decryption: XOR AES output with feedback
            processed_block = aes_result ^ feedback_block;
        end
    end
    
    // For decryption with padding, we need to check the last block
    logic [3:0] pad_bytes;
    logic pad_valid;
    
    generate
        if (USE_PADDING) begin : gen_unpad_check
            always_comb begin
                pad_bytes = 4'd0;
                pad_valid = 1'b1;
                pad_error = 1'b0;
                
                if ((operation == OP_DECRYPT) && aes_result_last && aes_result_valid) begin
                    case (pad_type)
                        2'b00: begin // PKCS7
                            pad_bytes = processed_block[127:120];
                            if (pad_bytes == 0 || pad_bytes > 16) begin
                                pad_valid = 1'b0;
                                pad_error = 1'b1;
                            end else begin
                                // Verify all padding bytes
                                for (int i = 0; i < 16; i++) begin
                                    if (i >= 16 - pad_bytes) begin
                                        if (processed_block[i*8 +: 8] != pad_bytes) begin
                                            pad_valid = 1'b0;
                                            pad_error = 1'b1;
                                        end
                                    end
                                end
                            end
                        end
                        default: begin
                            pad_bytes = 4'd0;
                        end
                    endcase
                end
            end
        end else begin : gen_no_unpad
            assign pad_bytes = 4'd0;
            assign pad_valid = 1'b1;
            assign pad_error = 1'b0;
        end
    endgenerate
    
    // Output stage - serialize block to bytes
    always_ff @(posedge clk) begin
        if (rst) begin
            output_valid <= 1'b0;
            output_block <= '0;
            output_bytes <= 4'd0;
            output_last <= 1'b0;
            serializing <= 1'b0;
            out_idx <= 4'd0;
        end else begin
            // Load new block
            if (aes_result_valid && !output_valid && !serializing) begin
                output_valid <= 1'b1;
                output_block <= processed_block;
                output_last <= aes_result_last;
                
                if ((operation == OP_DECRYPT) && aes_result_last && USE_PADDING) begin
                    output_bytes <= 4'd16 - pad_bytes;
                end else begin
                    output_bytes <= 4'd16;
                end
            end
            
            // Start serializing
            if (output_valid && !serializing) begin
                serializing <= 1'b1;
                out_idx <= 4'd0;
                output_valid <= 1'b0;
            end
            
            // Serialize bytes
            if (serializing && m_ready) begin
                if (out_idx == output_bytes - 1) begin
                    serializing <= 1'b0;
                end else begin
                    out_idx <= out_idx + 1'b1;
                end
            end
        end
    end
    
    // Output assignments
    assign m_valid = serializing;
    assign m_data = output_block[out_idx * 8 +: 8];
    assign m_last = serializing && (out_idx == output_bytes - 1) && output_last;
    
    // Status
    assign busy = (state != CBC_IDLE);
    assign done = (state == CBC_DRAIN) && !serializing && !aes_busy && 
                  !output_valid && !aes_result_valid;
    
endmodule : MODE_CBC