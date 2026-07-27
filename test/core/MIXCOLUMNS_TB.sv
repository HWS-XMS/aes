import AES_PKG::*;
// MIXCOLUMNS_TB - FIPS-197 round-1 vector + InvMixColumns(MixColumns(s)) == s.
module MIXCOLUMNS_TB;
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
    MIXCOLUMNS dut (
        .state_in  (s_in ),
        .state_out (s_out)
    );
    INVMIXCOLUMNS inv (
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
        in_blk = FIPS_R1_AFTER_SHIFT;
        #1;
        `CHK_EQ("mixcolumns fips r1", out_blk, FIPS_R1_AFTER_MIX);

        for (t = 0; t < 100; t++) begin
            in_blk = {$random, $random, $random, $random};
            #1;
            `CHK_EQ("mixcolumns roundtrip", rt_blk, in_blk);
        end
        `TB_SUMMARY("MIXCOLUMNS_TB");
    end
endmodule
