import AES_PKG::*;

module ADDROUNDKEY (
    input  block_t      state_in,
    input  roundkey_t   round_key,
    output block_t      state_out
);
    
    // XOR each byte of the state with the corresponding byte of the round key
    genvar col, row;
    generate
        for (col = 0; col < 4; col = col + 1) begin : gen_col
            for (row = 0; row < 4; row = row + 1) begin : gen_row
                assign state_out[col][row] = state_in[col][row] ^ round_key[col][row];
            end
        end
    endgenerate
    
endmodule
