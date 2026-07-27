import AES_PKG::*;
// MIXCOLUMN - MixColumns on one column: out = [2 3 1 1; 1 2 3 1; 1 1 2 3; 3 1 1 2]*in.
module MIXCOLUMN (
    input  column_t col_in,
    output column_t col_out
);
    logic [7:0] mul_2_tmp_out1;
    logic [7:0] mul_2_tmp_out2;
    logic [7:0] mul_2_tmp_out3;
    logic [7:0] mul_2_tmp_out4;
    MUL_2 mul_2_1 (
        .data_in  (col_in[0]     ),
        .data_out (mul_2_tmp_out1)
    );
    MUL_2 mul_2_2 (
        .data_in  (col_in[1]     ),
        .data_out (mul_2_tmp_out2)
    );
    MUL_2 mul_2_3 (
        .data_in  (col_in[2]     ),
        .data_out (mul_2_tmp_out3)
    );
    MUL_2 mul_2_4 (
        .data_in  (col_in[3]     ),
        .data_out (mul_2_tmp_out4)
    );

    logic [7:0] mul_3_tmp_out1;
    logic [7:0] mul_3_tmp_out2;
    logic [7:0] mul_3_tmp_out3;
    logic [7:0] mul_3_tmp_out4;
    MUL_3 mul_3_1 (
        .data_in  (col_in[0]     ),
        .data_out (mul_3_tmp_out1)
    );
    MUL_3 mul_3_2 (
        .data_in  (col_in[1]     ),
        .data_out (mul_3_tmp_out2)
    );
    MUL_3 mul_3_3 (
        .data_in  (col_in[2]     ),
        .data_out (mul_3_tmp_out3)
    );
    MUL_3 mul_3_4 (
        .data_in  (col_in[3]     ),
        .data_out (mul_3_tmp_out4)
    );

    assign col_out[0] = mul_2_tmp_out1 ^ mul_3_tmp_out2 ^ col_in[2] ^ col_in[3];
    assign col_out[1] = col_in[0] ^ mul_2_tmp_out2 ^ mul_3_tmp_out3 ^ col_in[3];
    assign col_out[2] = col_in[0] ^ col_in[1] ^ mul_2_tmp_out3 ^ mul_3_tmp_out4;
    assign col_out[3] = mul_3_tmp_out1 ^ col_in[1] ^ col_in[2] ^ mul_2_tmp_out4;
endmodule
