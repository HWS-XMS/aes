// GCM (Galois/Counter Mode)
// Authenticated encryption with associated data (AEAD)
// Combines CTR mode encryption with GMAC authentication
// Cipher-agnostic: works with AES, SM4, or any 128-bit block cipher
module MODE_GCM
    import CRYPTO_PKG::*;
    import BLOCK_CIPHER_CONFIG_PKG::*;
#(
    parameter MAX_KEYSIZE = 32,      // Maximum key size in bytes
    parameter TAG_SIZE = 16          // Authentication tag size in bytes (typically 16)
)(
    input  logic         clk,
    input  logic         rst,

    // Control
    input  logic         start,      // Start new GCM operation
    input  operation_t   operation,  // OP_ENCRYPT=encrypt+auth, OP_DECRYPT=auth+decrypt
    output logic         busy,       // Operation in progress
    output logic         done,       // Operation complete
    output logic         auth_pass,  // Authentication passed (decrypt only)

    // Additional Authenticated Data (AAD) interface
    input  logic         aad_valid,
    output logic         aad_ready,
    input  logic [7:0]   aad_data,
    input  logic         aad_last,

    // Plaintext/Ciphertext streaming interface
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
    input  logic [95:0]          iv,     // 96-bit IV for GCM

    // Authentication tag
    output logic [TAG_SIZE*8-1:0] tag_out,    // Generated tag (encrypt)
    input  logic [TAG_SIZE*8-1:0] tag_in,     // Expected tag (decrypt)
    output logic                   tag_valid,  // Tag is ready

    // Block Cipher Core Interface (cipher-agnostic)
    BLOCK_CIPHER_IF.master cipher_if
);
    
    // GCM components and states
    typedef enum logic [3:0] {
        GCM_IDLE,
        GCM_INIT,           // Generate H and initial counter
        GCM_AAD,            // Process AAD through GHASH
        GCM_CRYPT,          // Encrypt/decrypt data
        GCM_FINALIZE,       // Compute final tag
        GCM_DONE
    } gcm_state_t;
    
    gcm_state_t state, next_state;
    
    // Internal signals
    logic [127:0] h;                 // GHASH key = AES(0)
    logic h_ready;
    logic [127:0] counter;            // Counter for CTR mode
    logic [127:0] counter0;           // Initial counter for tag encryption
    logic [127:0] keystream;          // Current keystream block
    logic keystream_valid;
    logic [3:0] keystream_pos;
    logic need_keystream;
    
    // GHASH signals
    logic ghash_start, ghash_update, ghash_finalize;
    logic ghash_busy, ghash_done;
    logic [127:0] ghash_block;
    logic ghash_last;
    logic [127:0] ghash_tag;
    
    // Length tracking
    logic [63:0] aad_bit_len;
    logic [63:0] ct_bit_len;
    logic [31:0] aad_byte_count;
    logic [31:0] ct_byte_count;
    
    // Block buffering for AAD and ciphertext
    logic [127:0] aad_block;
    logic [3:0] aad_block_pos;
    logic aad_block_ready;
    
    logic [127:0] ct_block;
    logic [3:0] ct_block_pos;
    logic ct_block_ready;
    
    // AES operation tracking
    logic cipher_busy;
    logic requesting_h;
    logic requesting_keystream;
    logic requesting_tag_mask;
    
    // Tag processing
    logic [127:0] tag_mask;           // AES(counter0) for tag encryption
    logic tag_mask_ready;
    logic [127:0] final_tag;
    
    // Instantiate GHASH module
    GHASH ghash_inst (
        .clk(clk),
        .rst(rst),
        .start(ghash_start),
        .update(ghash_update),
        .finalize(ghash_finalize),
        .busy(ghash_busy),
        .done(ghash_done),
        .h(h),
        .block_in(ghash_block),
        .last_block(ghash_last),
        .aad_len(aad_bit_len),
        .ct_len(ct_bit_len),
        .tag(ghash_tag)
    );
    
    // Counter management for CTR mode
    always_comb begin
        // GCM uses a 96-bit IV with 32-bit counter
        // Counter starts at 2 (counter 1 is reserved for tag)
        counter = {iv, 32'd2 + ct_byte_count[31:4]};  // Increment every 16 bytes
        counter0 = {iv, 32'd1};  // Counter value 1 for tag encryption
    end
    
    // State machine
    always_ff @(posedge clk) begin
        if (rst) begin
            state <= GCM_IDLE;
            h <= 128'h0;
            h_ready <= 1'b0;
            keystream <= 128'h0;
            keystream_valid <= 1'b0;
            keystream_pos <= 4'd0;
            aad_byte_count <= 32'd0;
            ct_byte_count <= 32'd0;
            aad_block <= 128'h0;
            aad_block_pos <= 4'd0;
            ct_block <= 128'h0;
            ct_block_pos <= 4'd0;
            cipher_busy <= 1'b0;
            requesting_h <= 1'b0;
            requesting_keystream <= 1'b0;
            requesting_tag_mask <= 1'b0;
            tag_mask <= 128'h0;
            tag_mask_ready <= 1'b0;
            final_tag <= 128'h0;
            auth_pass <= 1'b0;
        end else begin
            state <= next_state;
            
            // Initialize on start
            if (start && state == GCM_IDLE) begin
                h_ready <= 1'b0;
                keystream_valid <= 1'b0;
                aad_byte_count <= 32'd0;
                ct_byte_count <= 32'd0;
                aad_block_pos <= 4'd0;
                ct_block_pos <= 4'd0;
                tag_mask_ready <= 1'b0;
                auth_pass <= 1'b0;
            end
            
            // Track cipher operations
            if (cipher_if.start && cipher_if.ready) begin
                cipher_busy <= 1'b1;
                // Set request flags based on what we're computing
                if (state == GCM_INIT && !h_ready) begin
                    requesting_h <= 1'b1;
                end else if (state == GCM_INIT && h_ready && !tag_mask_ready) begin
                    requesting_tag_mask <= 1'b1;
                end else if (state == GCM_CRYPT) begin
                    requesting_keystream <= 1'b1;
                end
            end else if (cipher_if.valid) begin
                cipher_busy <= 1'b0;
                
                // Store results based on what was requested
                if (requesting_h) begin
                    h <= cipher_if.block_out;
                    h_ready <= 1'b1;
                    requesting_h <= 1'b0;
                end else if (requesting_keystream) begin
                    keystream <= cipher_if.block_out;
                    keystream_valid <= 1'b1;
                    keystream_pos <= 4'd0;
                    requesting_keystream <= 1'b0;
                end else if (requesting_tag_mask) begin
                    tag_mask <= cipher_if.block_out;
                    tag_mask_ready <= 1'b1;
                    requesting_tag_mask <= 1'b0;
                end
            end
            
            // AAD block assembly
            if (aad_valid && aad_ready) begin
                aad_block[aad_block_pos*8 +: 8] <= aad_data;
                aad_block_pos <= aad_block_pos + 1;
                aad_byte_count <= aad_byte_count + 1;
                
                if (aad_block_pos == 4'd15 || aad_last) begin
                    aad_block_pos <= 4'd0;
                end
            end
            
            // Ciphertext block assembly (for GHASH)
            if (s_valid && s_ready && state == GCM_CRYPT) begin
                // In encrypt mode, collect ciphertext for GHASH
                // In decrypt mode, collect input ciphertext for GHASH
                if (operation == OP_ENCRYPT) begin
                    // Store encrypted byte
                    ct_block[ct_block_pos*8 +: 8] <= m_data;
                end else begin
                    // Store input ciphertext
                    ct_block[ct_block_pos*8 +: 8] <= s_data;
                end
                
                ct_block_pos <= ct_block_pos + 1;
                ct_byte_count <= ct_byte_count + 1;
                keystream_pos <= keystream_pos + 1;
                
                if (ct_block_pos == 4'd15) begin
                    ct_block_pos <= 4'd0;
                    keystream_valid <= 1'b0;
                end else if (keystream_pos == 4'd15) begin
                    keystream_valid <= 1'b0;
                end
            end
            
            // Final tag computation
            if (state == GCM_FINALIZE && ghash_done) begin
                final_tag <= ghash_tag ^ tag_mask;
                
                // Check authentication in decrypt mode
                if (operation == OP_DECRYPT) begin
                    auth_pass <= ((ghash_tag ^ tag_mask) == tag_in);
                end
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        need_keystream = 1'b0;
        
        case (state)
            GCM_IDLE: begin
                if (start) begin
                    next_state = GCM_INIT;
                end
            end
            
            GCM_INIT: begin
                // Generate H = AES(0) and counter0 mask
                if (h_ready && tag_mask_ready) begin
                    next_state = GCM_AAD;
                end
            end
            
            GCM_AAD: begin
                // Process AAD blocks
                if (aad_last && aad_valid && aad_ready) begin
                    next_state = GCM_CRYPT;
                end else if (!aad_valid && s_valid) begin
                    // No AAD, go directly to encryption
                    next_state = GCM_CRYPT;
                end
            end
            
            GCM_CRYPT: begin
                // Process plaintext/ciphertext
                if (!keystream_valid && !cipher_busy && s_valid) begin
                    need_keystream = 1'b1;
                end
                
                if (s_last && s_valid && s_ready) begin
                    next_state = GCM_FINALIZE;
                end
            end
            
            GCM_FINALIZE: begin
                // Complete GHASH and generate tag
                if (ghash_done && tag_mask_ready) begin
                    next_state = GCM_DONE;
                end
            end
            
            GCM_DONE: begin
                next_state = GCM_IDLE;
            end
        endcase
    end
    
    // Block cipher interface control
    always_comb begin
        cipher_if.start = 1'b0;
        cipher_if.encrypt = 1'b1;  // Always encrypt in GCM
        cipher_if.block_in = 128'h0;
        cipher_if.key = key;

        if (state == GCM_INIT) begin
            if (!h_ready && !cipher_busy && cipher_if.ready) begin
                // Generate H = Cipher(0)
                cipher_if.start = 1'b1;
                cipher_if.block_in = 128'h0;
            end else if (h_ready && !tag_mask_ready && !cipher_busy && cipher_if.ready) begin
                // Generate tag mask = Cipher(counter0)
                cipher_if.start = 1'b1;
                cipher_if.block_in = counter0;
            end
        end else if (state == GCM_CRYPT && !keystream_valid && !cipher_busy && cipher_if.ready && s_valid) begin
            // Generate keystream for CTR
            cipher_if.start = 1'b1;
            cipher_if.block_in = counter;
        end
    end
    
    // AAD interface
    assign aad_ready = (state == GCM_AAD) && !ghash_busy;
    assign aad_block_ready = (aad_block_pos == 4'd0) || 
                            (aad_last && aad_valid && aad_ready);
    
    // Data interface
    assign s_ready = (state == GCM_CRYPT) && keystream_valid && 
                    (!m_valid || m_ready);
    
    // XOR for encryption/decryption
    logic [7:0] xor_output;
    always_comb begin
        xor_output = 8'd0;
        if (s_valid && s_ready) begin
            // Select appropriate keystream byte
            case (keystream_pos)
                4'd0:  xor_output = s_data ^ keystream[7:0];
                4'd1:  xor_output = s_data ^ keystream[15:8];
                4'd2:  xor_output = s_data ^ keystream[23:16];
                4'd3:  xor_output = s_data ^ keystream[31:24];
                4'd4:  xor_output = s_data ^ keystream[39:32];
                4'd5:  xor_output = s_data ^ keystream[47:40];
                4'd6:  xor_output = s_data ^ keystream[55:48];
                4'd7:  xor_output = s_data ^ keystream[63:56];
                4'd8:  xor_output = s_data ^ keystream[71:64];
                4'd9:  xor_output = s_data ^ keystream[79:72];
                4'd10: xor_output = s_data ^ keystream[87:80];
                4'd11: xor_output = s_data ^ keystream[95:88];
                4'd12: xor_output = s_data ^ keystream[103:96];
                4'd13: xor_output = s_data ^ keystream[111:104];
                4'd14: xor_output = s_data ^ keystream[119:112];
                4'd15: xor_output = s_data ^ keystream[127:120];
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
                m_data <= xor_output;
                m_last <= s_last;
            end else if (m_valid && m_ready) begin
                m_valid <= 1'b0;
                m_last <= 1'b0;
            end
        end
    end
    
    // GHASH control
    assign ghash_start = (state == GCM_INIT) && h_ready;
    assign ghash_update = ((state == GCM_AAD) && aad_block_ready) ||
                         ((state == GCM_CRYPT) && ct_block_ready);
    assign ghash_finalize = (state == GCM_FINALIZE);
    assign ghash_block = (state == GCM_AAD) ? aad_block : ct_block;
    assign ghash_last = (state == GCM_CRYPT) && s_last;
    
    // Length calculations
    assign aad_bit_len = {32'd0, aad_byte_count} << 3;
    assign ct_bit_len = {32'd0, ct_byte_count} << 3;
    
    // Tag output
    assign tag_out = final_tag[127:127-TAG_SIZE*8+1];
    assign tag_valid = (state == GCM_DONE);
    
    // Status outputs
    assign busy = (state != GCM_IDLE);
    assign done = (state == GCM_DONE);
    
endmodule : MODE_GCM