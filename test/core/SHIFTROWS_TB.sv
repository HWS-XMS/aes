import AES_PKG::*;
// SHIFTROWS_TB - FIPS-197 round-1 vector + InvShiftRows(ShiftRows(s)) == s.
module SHIFTROWS_TB;
    `include "tb_check.svh"
    `include "tb_util.svh"

    logic [127:0] in_blk;
    logic [127:0] out_blk;
    logic [127:0] rt_blk;
    state_t s_in;
    state_t s_out;
    state_t s_rt;

    AES_BYTES_TO_STATE b2s (
        .bytes_in  (in_blk),
        .state_out (s_in  )
    );
    SHIFTROWS dut (
        .state_in  (s_in ),
        .state_out (s_out)
    );
    INVSHIFTROWS inv (
        .state_in  (s_out),
        .state_out (s_rt )
    );
    AES_STATE_TO_BYTES s2b (
        .state_in  (s_out  ),
        .bytes_out (out_blk)
    );
    AES_STATE_TO_BYTES s2b2 (
        .state_in  (s_rt  ),
        .bytes_out (rt_blk)
    );

    integer t;
    initial begin
        in_blk = FIPS_R1_AFTER_SUB;
        #1;
        `CHK_EQ("shiftrows fips r1", out_blk, FIPS_R1_AFTER_SHIFT);

        for (t = 0; t < 100; t++) begin
            in_blk = {$random, $random, $random, $random};
            #1;
            `CHK_EQ("shiftrows roundtrip", rt_blk, in_blk);
        end
        `TB_SUMMARY("SHIFTROWS_TB");
    end
endmodule
