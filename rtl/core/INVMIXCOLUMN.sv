import AES_PKG::*;
// INVMIXCOLUMN - InvMixColumns on one column (GF(2^8) matrix of 14/11/13/9).
module INVMIXCOLUMN (
    input  column_t col_in,
    output column_t col_out
);
    logic [7:0] mul_9_tmp_out1;
    logic [7:0] mul_9_tmp_out2;
    logic [7:0] mul_9_tmp_out3;
    logic [7:0] mul_9_tmp_out4;
    MUL_9 mul_9_1 (
        .data_in  (col_in[0]     ),
        .data_out (mul_9_tmp_out1)
    );
    MUL_9 mul_9_2 (
        .data_in  (col_in[1]     ),
        .data_out (mul_9_tmp_out2)
    );
    MUL_9 mul_9_3 (
        .data_in  (col_in[2]     ),
        .data_out (mul_9_tmp_out3)
    );
    MUL_9 mul_9_4 (
        .data_in  (col_in[3]     ),
        .data_out (mul_9_tmp_out4)
    );

    logic [7:0] mul_11_tmp_out1;
    logic [7:0] mul_11_tmp_out2;
    logic [7:0] mul_11_tmp_out3;
    logic [7:0] mul_11_tmp_out4;
    MUL_11 mul_11_1 (
        .data_in  (col_in[0]      ),
        .data_out (mul_11_tmp_out1)
    );
    MUL_11 mul_11_2 (
        .data_in  (col_in[1]      ),
        .data_out (mul_11_tmp_out2)
    );
    MUL_11 mul_11_3 (
        .data_in  (col_in[2]      ),
        .data_out (mul_11_tmp_out3)
    );
    MUL_11 mul_11_4 (
        .data_in  (col_in[3]      ),
        .data_out (mul_11_tmp_out4)
    );

    logic [7:0] mul_13_tmp_out1;
    logic [7:0] mul_13_tmp_out2;
    logic [7:0] mul_13_tmp_out3;
    logic [7:0] mul_13_tmp_out4;
    MUL_13 mul_13_1 (
        .data_in  (col_in[0]      ),
        .data_out (mul_13_tmp_out1)
    );
    MUL_13 mul_13_2 (
        .data_in  (col_in[1]      ),
        .data_out (mul_13_tmp_out2)
    );
    MUL_13 mul_13_3 (
        .data_in  (col_in[2]      ),
        .data_out (mul_13_tmp_out3)
    );
    MUL_13 mul_13_4 (
        .data_in  (col_in[3]      ),
        .data_out (mul_13_tmp_out4)
    );

    logic [7:0] mul_14_tmp_out1;
    logic [7:0] mul_14_tmp_out2;
    logic [7:0] mul_14_tmp_out3;
    logic [7:0] mul_14_tmp_out4;
    MUL_14 mul_14_1 (
        .data_in  (col_in[0]      ),
        .data_out (mul_14_tmp_out1)
    );
    MUL_14 mul_14_2 (
        .data_in  (col_in[1]      ),
        .data_out (mul_14_tmp_out2)
    );
    MUL_14 mul_14_3 (
        .data_in  (col_in[2]      ),
        .data_out (mul_14_tmp_out3)
    );
    MUL_14 mul_14_4 (
        .data_in  (col_in[3]      ),
        .data_out (mul_14_tmp_out4)
    );

    assign col_out[0] = mul_14_tmp_out1 ^ mul_11_tmp_out2 ^ mul_13_tmp_out3 ^ mul_9_tmp_out4;
    assign col_out[1] = mul_9_tmp_out1 ^ mul_14_tmp_out2 ^ mul_11_tmp_out3 ^ mul_13_tmp_out4;
    assign col_out[2] = mul_13_tmp_out1 ^ mul_9_tmp_out2 ^ mul_14_tmp_out3 ^ mul_11_tmp_out4;
    assign col_out[3] = mul_11_tmp_out1 ^ mul_13_tmp_out2 ^ mul_9_tmp_out3 ^ mul_14_tmp_out4;
endmodule
