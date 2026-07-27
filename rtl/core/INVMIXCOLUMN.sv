import AES_PKG::*;
module INVMIXCOLUMN (
    input  column_t col_in, 
    output column_t col_out
);
    logic [7:0] mul_9_tmp_out1, mul_9_tmp_out2, mul_9_tmp_out3, mul_9_tmp_out4;
    MUL_9 mul_9_1 (col_in[0], mul_9_tmp_out1);
    MUL_9 mul_9_2 (col_in[1], mul_9_tmp_out2);
    MUL_9 mul_9_3 (col_in[2], mul_9_tmp_out3);
    MUL_9 mul_9_4 (col_in[3], mul_9_tmp_out4);

    logic [7:0] mul_11_tmp_out1, mul_11_tmp_out2, mul_11_tmp_out3, mul_11_tmp_out4;
    MUL_11 mul_11_1( col_in[0], mul_11_tmp_out1);
    MUL_11 mul_11_2( col_in[1], mul_11_tmp_out2);
    MUL_11 mul_11_3( col_in[2], mul_11_tmp_out3);
    MUL_11 mul_11_4( col_in[3], mul_11_tmp_out4);

    logic [7:0] mul_13_tmp_out1, mul_13_tmp_out2, mul_13_tmp_out3, mul_13_tmp_out4;
    MUL_13 mul_13_1( col_in[0], mul_13_tmp_out1);
    MUL_13 mul_13_2( col_in[1], mul_13_tmp_out2);
    MUL_13 mul_13_3( col_in[2], mul_13_tmp_out3);
    MUL_13 mul_13_4( col_in[3], mul_13_tmp_out4);

    logic [7:0] mul_14_tmp_out1, mul_14_tmp_out2, mul_14_tmp_out3, mul_14_tmp_out4;
    MUL_14 mul_14_1( col_in[0], mul_14_tmp_out1);
    MUL_14 mul_14_2( col_in[1], mul_14_tmp_out2);
    MUL_14 mul_14_3( col_in[2], mul_14_tmp_out3);
    MUL_14 mul_14_4( col_in[3], mul_14_tmp_out4);

    assign col_out[0]  = mul_14_tmp_out1     ^   mul_11_tmp_out2      ^   mul_13_tmp_out3      ^   mul_9_tmp_out4;
    assign col_out[1]  = mul_9_tmp_out1      ^   mul_14_tmp_out2      ^   mul_11_tmp_out3      ^   mul_13_tmp_out4;
    assign col_out[2]  = mul_13_tmp_out1     ^   mul_9_tmp_out2       ^   mul_14_tmp_out3      ^   mul_11_tmp_out4;
    assign col_out[3]  = mul_11_tmp_out1     ^   mul_13_tmp_out2      ^   mul_9_tmp_out3       ^   mul_14_tmp_out4;

endmodule