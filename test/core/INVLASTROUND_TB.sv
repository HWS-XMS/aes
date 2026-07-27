import AES_PKG::*;
// INVLASTROUND_TB - inverse final round = InvSubBytes(InvShiftRows(.)) XOR key.
//   INVLASTROUND(after_shift, 0)    = start              (FIPS-197 round-1 states)
//   INVLASTROUND(after_shift, key1) = start XOR key1     (key added last -> linear)
module INVLASTROUND_TB;
    `include "tb_check.svh"
    `include "tb_util.svh"

    logic clk = 0, rst = 0;
    logic [127:0] in_blk, key_blk, out_blk;
    state_t s_in, s_key, s_out;

    AES_BYTES_TO_STATE b2s  (.bytes_in(in_blk),  .state_out(s_in));
    AES_BYTES_TO_STATE b2sk (.bytes_in(key_blk), .state_out(s_key));
    INVLASTROUND       dut  (.clk(clk), .rst(rst), .round_key(s_key),
                            .state_in(s_in), .state_out(s_out));
    AES_STATE_TO_BYTES s2b  (.state_in(s_out), .bytes_out(out_blk));

    always #5 begin clk = ~clk; end

    initial begin
        in_blk = FIPS_R1_AFTER_SHIFT; key_blk = 128'h0;
        @(posedge clk); #1;
        `CHK_EQ("invlastround(after_shift,0)=start", out_blk, FIPS_R1_START);

        key_blk = FIPS_R1_KEY1;
        @(posedge clk); #1;
        `CHK_EQ("invlastround(after_shift,key1)", out_blk, FIPS_R1_START ^ FIPS_R1_KEY1);

        `TB_SUMMARY("INVLASTROUND_TB");
    end
endmodule
