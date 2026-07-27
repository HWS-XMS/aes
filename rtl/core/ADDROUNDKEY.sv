import AES_PKG::*;
// ADDROUNDKEY - XOR each state byte with the corresponding round-key byte.
module ADDROUNDKEY (
    input  block_t    state_in,
    input  roundkey_t round_key,
    output block_t    state_out
);
    genvar col;
    genvar row;
    generate
        for (col = 0; col < 4; col++) begin
            for (row = 0; row < 4; row++) begin
                assign state_out[col][row] = state_in[col][row] ^ round_key[col][row];
            end
        end
    endgenerate
endmodule
