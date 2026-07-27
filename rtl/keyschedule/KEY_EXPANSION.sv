import AES_PKG::*;
// Size-generic AES key-schedule wrapper.
// Selects the appropriate fixed-size key expansion at elaboration time
// based on the KEYSIZE parameter (16, 24, or 32 bytes).
module KEY_EXPANSION #(
    parameter  KEYSIZE      = 16,
    localparam Nb           = 4,
    localparam Nk           = KEYSIZE / Nb,
    localparam Nr           = (Nk == 4) ? 10 : (Nk == 6) ? 12 : 14
)(
    input  byte_t      [KEYSIZE-1:0]   key,
    output roundkey_t  [Nr:0]          round_keys
);

    generate
        if (KEYSIZE == KEYSIZE_AES_128) begin : gen_128
            KEY_EXPANSION_128 kexp (
                .key        (key),
                .round_keys (round_keys)
            );
        end else if (KEYSIZE == KEYSIZE_AES_192) begin : gen_192
            KEY_EXPANSION_192 kexp (
                .key        (key),
                .round_keys (round_keys)
            );
        end else if (KEYSIZE == KEYSIZE_AES_256) begin : gen_256
            KEY_EXPANSION_256 kexp (
                .key        (key),
                .round_keys (round_keys)
            );
        end
    endgenerate

endmodule
