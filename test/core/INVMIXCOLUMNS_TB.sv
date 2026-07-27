import AES_PKG::*;
// INVMIXCOLUMNS_TB - FIPS-197 round-1 vector (reversed) + MixColumns(InvMixColumns(s)) == s.
module INVMIXCOLUMNS_TB;
    `include "tb_check.svh"
    `include "tb_util.svh"

    logic [127:0] in_blk, out_blk, rt_blk;
    state_t s_in, s_out, s_rt;

    AES_BYTES_TO_STATE b2s  (.bytes_in(in_blk), .state_out(s_in));
    INVMIXCOLUMNS      dut  (.state_in(s_in),   .state_out(s_out));
    MIXCOLUMNS         fwd  (.state_in(s_out),  .state_out(s_rt));
    AES_STATE_TO_BYTES s2b  (.state_in(s_out),  .bytes_out(out_blk));
    AES_STATE_TO_BYTES s2b2 (.state_in(s_rt),   .bytes_out(rt_blk));

    integer t;
    initial begin
        in_blk = FIPS_R1_AFTER_MIX; #1;
        `CHK_EQ("invmixcolumns fips r1", out_blk, FIPS_R1_AFTER_SHIFT);

        for (t = 0; t < 100; t = t + 1) begin
            in_blk = {$random, $random, $random, $random}; #1;
            `CHK_EQ("invmixcolumns roundtrip", rt_blk, in_blk);
        end
        `TB_SUMMARY("INVMIXCOLUMNS_TB");
    end
endmodule
