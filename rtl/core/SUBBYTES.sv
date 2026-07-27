import AES_PKG::*;
// SUBBYTES - apply the S-box to each of the 16 state bytes.
module SUBBYTES (
    input  block_t state_in,
    output block_t state_out
);
    genvar col;
    genvar row;
    generate
        for (col = 0; col < 4; col++) begin
            for (row = 0; row < 4; row++) begin
                SBOX sbox_cell (
                    .sbox_in  (state_in [col][row]),
                    .sbox_out (state_out[col][row])
                );
            end
        end
    endgenerate
endmodule
