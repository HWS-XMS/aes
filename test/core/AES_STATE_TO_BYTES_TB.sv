import AES_PKG::*;
// AES_STATE_TO_BYTES_TB - state->byte mapping (out[4col+row] = state[col][row]) on a
// positional state, plus round-trip through AES_BYTES_TO_STATE.
module AES_STATE_TO_BYTES_TB;
    `include "tb_check.svh"

    state_t s;
    state_t s_rt;
    logic [127:0] out_blk;
    logic [127:0] in_blk;
    logic [127:0] rt_blk;

    AES_STATE_TO_BYTES dut (
        .state_in  (s      ),
        .bytes_out (out_blk)
    );
    AES_BYTES_TO_STATE b2s (
        .bytes_in  (in_blk),
        .state_out (s_rt  )
    );
    AES_STATE_TO_BYTES back (
        .state_in  (s_rt  ),
        .bytes_out (rt_blk)
    );

    integer t;
    initial begin
        s[0][0] = 8'h00;
        s[0][1] = 8'h01;
        s[0][2] = 8'h02;
        s[0][3] = 8'h03;
        s[1][0] = 8'h04;
        s[1][1] = 8'h05;
        s[1][2] = 8'h06;
        s[1][3] = 8'h07;
        s[2][0] = 8'h08;
        s[2][1] = 8'h09;
        s[2][2] = 8'h0a;
        s[2][3] = 8'h0b;
        s[3][0] = 8'h0c;
        s[3][1] = 8'h0d;
        s[3][2] = 8'h0e;
        s[3][3] = 8'h0f;
        #1;
        `CHK_EQ("state->bytes positional", out_blk, 128'h000102030405060708090a0b0c0d0e0f);

        for (t = 0; t < 100; t++) begin
            in_blk = {$random, $random, $random, $random};
            #1;
            `CHK_EQ("state<->bytes roundtrip", rt_blk, in_blk);
        end
        `TB_SUMMARY("AES_STATE_TO_BYTES_TB");
    end
endmodule
