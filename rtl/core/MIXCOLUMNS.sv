import AES_PKG::*;
// MIXCOLUMNS - MixColumns applied to each of the 4 state columns.
module MIXCOLUMNS (
    input  block_t state_in,
    output block_t state_out
);
    genvar col;
    generate
        for (col = 0; col < 4; col++) begin
            column_t col_in;
            column_t col_out;
            assign col_in[0] = state_in[col][0];
            assign col_in[1] = state_in[col][1];
            assign col_in[2] = state_in[col][2];
            assign col_in[3] = state_in[col][3];
            MIXCOLUMN mc (
                .col_in  (col_in ),
                .col_out (col_out)
            );
            assign state_out[col][0] = col_out[0];
            assign state_out[col][1] = col_out[1];
            assign state_out[col][2] = col_out[2];
            assign state_out[col][3] = col_out[3];
        end
    endgenerate
endmodule
