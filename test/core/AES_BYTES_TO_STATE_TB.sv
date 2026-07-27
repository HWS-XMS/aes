import AES_PKG::*;
// AES_BYTES_TO_STATE_TB - byte->state mapping (state[col][row] = in[4col+row]) on the
// positional vector 00..0f, plus round-trip through AES_STATE_TO_BYTES.
module AES_BYTES_TO_STATE_TB;
    `include "tb_check.svh"

    logic [127:0] in_blk;
    logic [127:0] rt_blk;
    state_t s;

    AES_BYTES_TO_STATE dut (
        .bytes_in  (in_blk),
        .state_out (s     )
    );
    AES_STATE_TO_BYTES back (
        .state_in  (s     ),
        .bytes_out (rt_blk)
    );

    integer t;
    initial begin
        in_blk = 128'h000102030405060708090a0b0c0d0e0f;
        #1;
        `CHK_EQ("s[0][0]", s[0][0], 8'h00);
        `CHK_EQ("s[0][1]", s[0][1], 8'h01);
        `CHK_EQ("s[0][2]", s[0][2], 8'h02);
        `CHK_EQ("s[0][3]", s[0][3], 8'h03);
        `CHK_EQ("s[1][0]", s[1][0], 8'h04);
        `CHK_EQ("s[1][1]", s[1][1], 8'h05);
        `CHK_EQ("s[1][2]", s[1][2], 8'h06);
        `CHK_EQ("s[1][3]", s[1][3], 8'h07);
        `CHK_EQ("s[2][0]", s[2][0], 8'h08);
        `CHK_EQ("s[2][1]", s[2][1], 8'h09);
        `CHK_EQ("s[2][2]", s[2][2], 8'h0a);
        `CHK_EQ("s[2][3]", s[2][3], 8'h0b);
        `CHK_EQ("s[3][0]", s[3][0], 8'h0c);
        `CHK_EQ("s[3][1]", s[3][1], 8'h0d);
        `CHK_EQ("s[3][2]", s[3][2], 8'h0e);
        `CHK_EQ("s[3][3]", s[3][3], 8'h0f);

        for (t = 0; t < 100; t++) begin
            in_blk = {$random, $random, $random, $random};
            #1;
            `CHK_EQ("bytes<->state roundtrip", rt_blk, in_blk);
        end
        `TB_SUMMARY("AES_BYTES_TO_STATE_TB");
    end
endmodule
