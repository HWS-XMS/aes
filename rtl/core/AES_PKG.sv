package AES_PKG;

    localparam int KEYSIZE_AES_128 = 16;
    localparam int KEYSIZE_AES_192 = 24;
    localparam int KEYSIZE_AES_256 = 32;
    localparam int BLOCKSIZE = 16;
    localparam int Nb = 4;

    function automatic int calc_Nk(input int keysize);
        return keysize / 4;
    endfunction

    function automatic int calc_Nr(input int keysize);
        case (keysize)
            KEYSIZE_AES_128: return 10;
            KEYSIZE_AES_192: return 12;
            KEYSIZE_AES_256: return 14;
            default: return 10;
        endcase
    endfunction

    typedef logic [7:0] byte_t;

    // AES state: 4x4 byte matrix in column-major order, accessed state[column][row].
    typedef byte_t [3:0][3:0] state_t;

    typedef byte_t [3:0] row_t;
    typedef byte_t [3:0] column_t;
    typedef state_t block_t;
    typedef state_t roundkey_t;

    typedef byte_t [KEYSIZE_AES_128-1:0] aes_key_128_t;
    typedef byte_t [KEYSIZE_AES_192-1:0] aes_key_192_t;
    typedef byte_t [KEYSIZE_AES_256-1:0] aes_key_256_t;

    typedef roundkey_t [10:0] round_keys_128_t;
    typedef roundkey_t [12:0] round_keys_192_t;
    typedef roundkey_t [14:0] round_keys_256_t;

    // Runtime key-size selector (encodes 128/192/256 without a synthesis parameter).
    localparam logic [1:0] KS_128 = 2'd0;
    localparam logic [1:0] KS_192 = 2'd1;
    localparam logic [1:0] KS_256 = 2'd2;

    function automatic int ks_nr(input logic [1:0] ks);
        case (ks)
            KS_128:  return 10;
            KS_192:  return 12;
            default: return 14;
        endcase
    endfunction

    function void print_state(input string label, input state_t state);
        $display("%s:", label);
        for (int row = 0; row < 4; row++) begin
            $display("  %02x %02x %02x %02x", state[0][row], state[1][row], state[2][row], state[3][row]);
        end
    endfunction

endpackage : AES_PKG
