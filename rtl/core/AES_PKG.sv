package AES_PKG;

    // AES Key Size Parameters
    localparam int KEYSIZE_AES_128 = 16;  // 128-bit key = 16 bytes
    localparam int KEYSIZE_AES_192 = 24;  // 192-bit key = 24 bytes
    localparam int KEYSIZE_AES_256 = 32;  // 256-bit key = 32 bytes
    
    // AES Block Size (always 128 bits = 16 bytes)
    localparam int BLOCKSIZE = 16;
    
    // AES Algorithm Parameters
    localparam int Nb = 4;  // Number of 32-bit words in a block (always 4 for AES)
    
    // Function to calculate Nk (number of 32-bit words in key)
    function automatic int calc_Nk(input int keysize);
        return keysize / 4;
    endfunction
    
    // Function to calculate Nr (number of rounds)
    function automatic int calc_Nr(input int keysize);
        case (keysize)
            KEYSIZE_AES_128: return 10;
            KEYSIZE_AES_192: return 12;
            KEYSIZE_AES_256: return 14;
            default: return 10;  // Default to AES-128
        endcase
    endfunction
    
    // Basic Type Definitions
    typedef logic [7:0] byte_t;
    
    // AES State representation - THE CORE DATA STRUCTURE
    // 
    // The AES state is a 4x4 matrix of bytes, stored in COLUMN-MAJOR order
    // This matches the AES specification exactly.
    //
    // State mapping (for 16 input bytes b0,b1,...,b15):
    //
    //     Col 0   Col 1   Col 2   Col 3
    //    +-------+-------+-------+-------+
    // R0 |  b0   |  b4   |  b8   |  b12  |  state[0][0], state[1][0], state[2][0], state[3][0]
    //    +-------+-------+-------+-------+
    // R1 |  b1   |  b5   |  b9   |  b13  |  state[0][1], state[1][1], state[2][1], state[3][1]
    //    +-------+-------+-------+-------+
    // R2 |  b2   |  b6   |  b10  |  b14  |  state[0][2], state[1][2], state[2][2], state[3][2]
    //    +-------+-------+-------+-------+
    // R3 |  b3   |  b7   |  b11  |  b15  |  state[0][3], state[1][3], state[2][3], state[3][3]
    //    +-------+-------+-------+-------+
    //
    // Access: state[column][row]
    typedef byte_t [3:0][3:0] state_t;
    
    // Legacy type names for compatibility
    typedef byte_t [3:0] row_t;
    typedef byte_t [3:0] column_t;
    typedef state_t block_t;
    typedef state_t roundkey_t;
    
    // Key Type Definitions for different key sizes
    typedef byte_t [KEYSIZE_AES_128-1:0] aes_key_128_t;
    typedef byte_t [KEYSIZE_AES_192-1:0] aes_key_192_t;
    typedef byte_t [KEYSIZE_AES_256-1:0] aes_key_256_t;
    
    // Round key array types for different key sizes
    typedef roundkey_t [10:0] round_keys_128_t;  // 11 round keys for AES-128
    typedef roundkey_t [12:0] round_keys_192_t;  // 13 round keys for AES-192
    typedef roundkey_t [14:0] round_keys_256_t;  // 15 round keys for AES-256
    
    // Debug function to print state
    function void print_state(input string label, input state_t state);
        $display("%s:", label);
        for (int row = 0; row < 4; row++) begin
            $display("  %02x %02x %02x %02x", 
                state[0][row], state[1][row], state[2][row], state[3][row]);
        end
    endfunction
    
    // Debug functions removed for compatibility

endpackage : AES_PKG