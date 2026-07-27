// AES Core Wrapper
// Wraps the existing AES_ENCRYPT and AES_DECRYPT modules with a unified interface
module AES_CORE_WRAPPER
    import AES_PKG::*;
#(
    parameter KEYSIZE = 16  // 16, 24, or 32 bytes
)(
    AES_CORE_IF.slave aes_if
);
    
    // Internal signals
    logic [127:0] encrypt_out, decrypt_out;
    
    // Convert between packed arrays
    byte_t [15:0] block_in_bytes;
    byte_t [KEYSIZE-1:0] key_bytes;
    byte_t [15:0] encrypt_out_bytes;
    byte_t [15:0] decrypt_out_bytes;
    
    // Convert input signals to byte arrays
    always_comb begin
        for (int i = 0; i < 16; i++) begin
            block_in_bytes[i] = aes_if.block_in[8*i +: 8];
        end
        for (int i = 0; i < KEYSIZE; i++) begin
            key_bytes[i] = aes_if.key[8*i +: 8];
        end
    end
    
    // Instantiate encryption module
    AES_ENCRYPT #(.KEYSIZE(KEYSIZE)) encrypt_inst (
        .clk(aes_if.clk),
        .rst(aes_if.rst),
        .plaintext(block_in_bytes),
        .key(key_bytes),
        .ciphertext(encrypt_out_bytes)
    );
    
    // Instantiate decryption module
    AES_DECRYPT #(.KEYSIZE(KEYSIZE)) decrypt_inst (
        .clk(aes_if.clk),
        .rst(aes_if.rst),
        .ciphertext(block_in_bytes),
        .key(key_bytes),
        .plaintext(decrypt_out_bytes)
    );
    
    // Convert output byte arrays to packed
    always_comb begin
        for (int i = 0; i < 16; i++) begin
            encrypt_out[8*i +: 8] = encrypt_out_bytes[i];
            decrypt_out[8*i +: 8] = decrypt_out_bytes[i];
        end
    end
    
    // State machine for timing control
    typedef enum logic [1:0] {
        IDLE,
        PROCESSING,
        DONE
    } state_t;
    
    state_t state, next_state;
    logic [3:0] cycle_count;
    
    // State register
    always_ff @(posedge aes_if.clk) begin
        if (aes_if.rst) begin
            state <= IDLE;
            cycle_count <= 4'b0;
        end else begin
            state <= next_state;
            if (state == PROCESSING) begin
                cycle_count <= cycle_count + 1'b1;
            end else begin
                cycle_count <= 4'b0;
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        case (state)
            IDLE: begin
                if (aes_if.start) begin
                    next_state = PROCESSING;
                end
            end
            PROCESSING: begin
                // AES operations take multiple cycles in real hardware
                // We'll simulate this with a small delay
                if (cycle_count >= 4'd2) begin
                    next_state = DONE;
                end
            end
            DONE: begin
                // Stay in DONE for one cycle to ensure valid is seen
                next_state = IDLE;
            end
        endcase
    end
    
    // Output logic
    always_comb begin
        aes_if.ready = (state == IDLE);
        aes_if.valid = (state == DONE);
        aes_if.block_out = aes_if.encrypt ? encrypt_out : decrypt_out;
    end
    
endmodule : AES_CORE_WRAPPER