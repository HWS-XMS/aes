import AES_PKG::*;
// INVROUND_TB - inverse round = InvMixColumns(AddRoundKey(InvSubBytes(InvShiftRows(.)),k)).
// Pure-NIST vector: feed x = ShiftRows(SubBytes(after_mix)) with key=0, so
//   InvSubBytes(InvShiftRows(x)) = after_mixcolumns
//   INVROUND(x,0) = InvMixColumns(after_mixcolumns) = after_shiftrows   (NIST pair)
// Input prep uses the (separately NIST-verified) SUBBYTES/SHIFTROWS modules; the
// expected output is the published FIPS-197 after_shiftrows state.
module INVROUND_TB;
    `include "tb_check.svh"
    `include "tb_util.svh"

    logic clk = 0, rst = 0;
    logic [127:0] am_blk, out_blk;
    state_t am_s, sub_s, x_s, out_s, zero_key;

    assign am_blk   = FIPS_R1_AFTER_MIX;
    assign zero_key = '0;

    AES_BYTES_TO_STATE b2s (.bytes_in(am_blk), .state_out(am_s));
    SUBBYTES           sub (.state_in(am_s),   .state_out(sub_s));
    SHIFTROWS          sh  (.state_in(sub_s),  .state_out(x_s));
    INVROUND           dut (.clk(clk), .rst(rst), .round_key(zero_key),
                           .state_in(x_s), .state_out(out_s));
    AES_STATE_TO_BYTES s2b (.state_in(out_s),  .bytes_out(out_blk));

    always #5 begin clk = ~clk; end

    initial begin
        @(posedge clk); #1;
        `CHK_EQ("invround(x,0)=after_shift", out_blk, FIPS_R1_AFTER_SHIFT);
        `TB_SUMMARY("INVROUND_TB");
    end
endmodule
