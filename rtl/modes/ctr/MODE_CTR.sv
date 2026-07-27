// CTR (Counter) Mode
// Converts block cipher into a stream cipher by encrypting counter values
// and XORing the keystream with plaintext/ciphertext
// Cipher-agnostic: works with AES, SM4, or any 128-bit block cipher
module MODE_CTR
    import CRYPTO_PKG::*;
    import BLOCK_CIPHER_CONFIG_PKG::*;
#(
    parameter MAX_KEYSIZE = 32,   // Maximum key size in bytes
    parameter CTR_WIDTH = 128     // Counter width (typically 128 bits)
)(
    input  logic         clk,
    input  logic         rst,

    // Control
    input  logic         start,      // Start new CTR operation
    input  operation_t   operation,  // Operation type (CTR is symmetric, so both work the same)
    output logic         busy,       // Operation in progress
    output logic         done,       // Operation complete

    // Streaming interface (byte-oriented)
    input  logic         s_valid,
    output logic         s_ready,
    input  logic [7:0]   s_data,
    input  logic         s_last,

    output logic         m_valid,
    input  logic         m_ready,
    output logic [7:0]   m_data,
    output logic         m_last,

    // Key and Nonce/IV
    input  logic [MAX_KEYSIZE*8-1:0] key,
    input  logic [127:0]         nonce,    // Initial counter value

    // Block Cipher Core Interface (cipher-agnostic)
    BLOCK_CIPHER_IF.master cipher_if
);
    
    // State machine
    typedef enum logic [2:0] {
        CTR_IDLE,
        CTR_GEN_KEYSTREAM,   // Generate keystream block
        CTR_PROCESS,         // XOR with data
        CTR_DRAIN           // Output remaining bytes
    } ctr_state_t;
    
    ctr_state_t state, next_state;
    
    // Counter management
    logic [127:0] counter;           // Current counter value
    logic [127:0] next_counter;      // Next counter value
    logic counter_overflow;          // Counter overflow detection
    
    // Keystream buffer
    logic [127:0] keystream;         // Current keystream block
    logic keystream_valid;           // Keystream ready to use
    logic [3:0] keystream_pos;       // Current byte position in keystream
    logic need_keystream;            // Need new keystream block
    
    // Input buffering
    logic [7:0] input_byte;
    logic input_valid;
    
    // AES operation tracking
    logic aes_busy;
    logic requesting_keystream;
    
    // Output control
    logic output_valid;
    logic [7:0] output_byte;
    logic last_byte;
    
    // Counter increment (simple increment of lower 64 bits)
    always_comb begin
        // Increment lower 64 bits, keep upper 64 bits (nonce) unchanged
        next_counter = counter;
        next_counter[63:0] = counter[63:0] + 1;
        counter_overflow = (counter[63:0] == '1);
    end
    
    // State machine
    always_ff @(posedge clk) begin
        if (rst) begin
            state <= CTR_IDLE;
            counter <= '0;
            keystream <= '0;
            keystream_valid <= 1'b0;
            keystream_pos <= 4'd0;
            aes_busy <= 1'b0;
            requesting_keystream <= 1'b0;
        end else begin
            state <= next_state;
            
            // Initialize counter with nonce on start
            if (start && state == CTR_IDLE) begin
                counter <= nonce;
                keystream_valid <= 1'b0;
                keystream_pos <= 4'd0;
            end
            
            // Track AES operation
            if (cipher_if.start && cipher_if.ready) begin
                aes_busy <= 1'b1;
                requesting_keystream <= 1'b1;
            end else if (cipher_if.valid && requesting_keystream) begin
                aes_busy <= 1'b0;
                requesting_keystream <= 1'b0;
                // Store the keystream
                keystream <= cipher_if.block_out;
                keystream_valid <= 1'b1;
                keystream_pos <= 4'd0;
                // Increment counter for next block
                counter <= next_counter;
            end
            
            // Consume keystream bytes as data arrives
            if (s_valid && s_ready && keystream_valid) begin
                keystream_pos <= keystream_pos + 1;
                
                // Check if we've used all 16 bytes of this keystream block
                if (keystream_pos == 4'd15) begin
                    keystream_valid <= 1'b0;
                    keystream_pos <= 4'd0;
                end
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        need_keystream = 1'b0;
        
        case (state)
            CTR_IDLE: begin
                if (start) begin
                    next_state = CTR_GEN_KEYSTREAM;
                end
            end
            
            CTR_GEN_KEYSTREAM: begin
                // Generate initial keystream block
                if (!aes_busy && !keystream_valid) begin
                    need_keystream = 1'b1;
                end
                
                if (keystream_valid) begin
                    next_state = CTR_PROCESS;
                end
            end
            
            CTR_PROCESS: begin
                // Process streaming data
                if (!keystream_valid && !aes_busy && s_valid) begin
                    // Need new keystream block
                    need_keystream = 1'b1;
                end
                
                if (s_last && s_valid && s_ready) begin
                    next_state = CTR_DRAIN;
                end
            end
            
            CTR_DRAIN: begin
                // Wait for all output to be consumed
                if (!m_valid || (m_valid && m_ready && m_last)) begin
                    next_state = CTR_IDLE;
                end
            end
        endcase
    end
    
    // AES interface - always encrypt counter values
    assign cipher_if.start = need_keystream && !aes_busy && cipher_if.ready;
    assign cipher_if.encrypt = 1'b1;  // Always encrypt in CTR mode
    assign cipher_if.block_in = counter;
    assign cipher_if.key = key;
    
    // Input handling
    assign s_ready = (state == CTR_PROCESS) && keystream_valid && 
                     (!m_valid || m_ready);
    
    // XOR operation for encryption/decryption (same in CTR mode)
    always_comb begin
        output_byte = 8'd0;
        
        if (s_valid && s_ready) begin
            // Select the appropriate byte from keystream based on position
            case (keystream_pos)
                4'd0:  output_byte = s_data ^ keystream[7:0];
                4'd1:  output_byte = s_data ^ keystream[15:8];
                4'd2:  output_byte = s_data ^ keystream[23:16];
                4'd3:  output_byte = s_data ^ keystream[31:24];
                4'd4:  output_byte = s_data ^ keystream[39:32];
                4'd5:  output_byte = s_data ^ keystream[47:40];
                4'd6:  output_byte = s_data ^ keystream[55:48];
                4'd7:  output_byte = s_data ^ keystream[63:56];
                4'd8:  output_byte = s_data ^ keystream[71:64];
                4'd9:  output_byte = s_data ^ keystream[79:72];
                4'd10: output_byte = s_data ^ keystream[87:80];
                4'd11: output_byte = s_data ^ keystream[95:88];
                4'd12: output_byte = s_data ^ keystream[103:96];
                4'd13: output_byte = s_data ^ keystream[111:104];
                4'd14: output_byte = s_data ^ keystream[119:112];
                4'd15: output_byte = s_data ^ keystream[127:120];
            endcase
        end
    end
    
    // Output control
    always_ff @(posedge clk) begin
        if (rst) begin
            m_valid <= 1'b0;
            m_data <= 8'd0;
            m_last <= 1'b0;
        end else begin
            if (s_valid && s_ready) begin
                m_valid <= 1'b1;
                m_data <= output_byte;
                m_last <= s_last;
            end else if (m_valid && m_ready) begin
                m_valid <= 1'b0;
                m_last <= 1'b0;
            end
        end
    end
    
    // Status outputs
    assign busy = (state != CTR_IDLE);
    assign done = (state == CTR_IDLE) && (next_state == CTR_IDLE);
    
endmodule : MODE_CTR