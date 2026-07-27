import AES_PKG::*;
// LASTROUND_TB - final (registered) round = ShiftRows(SubBytes(.)) XOR key vs the
// FIPS-197 round-1 states (key=0 exposes after-ShiftRows; key added last is linear).
module LASTROUND_TB;
    `include "tb_check.svh"
    `include "tb_util.svh"

    logic clk = 0;
    logic rst = 0;
    logic [127:0] in_blk;
    logic [127:0] key_blk;
    logic [127:0] out_blk;
    state_t s_in;
    state_t s_key;
    state_t s_out;

    AES_BYTES_TO_STATE b2s (
        .bytes_in  (in_blk),
        .state_out (s_in  )
    );
    AES_BYTES_TO_STATE b2sk (
        .bytes_in  (key_blk),
        .state_out (s_key  )
    );
    LASTROUND dut (
        .clk       (clk  ),
        .rst       (rst  ),
        .round_key (s_key),
        .state_in  (s_in ),
        .state_out (s_out)
    );
    AES_STATE_TO_BYTES s2b (
        .state_in  (s_out  ),
        .bytes_out (out_blk)
    );

    always #5 begin
        clk = ~clk;
    end

    initial begin
        in_blk  = FIPS_R1_START;
        key_blk = 128'h0;
        @(posedge clk);
        #1;
        `CHK_EQ("lastround(start,0)=after_shift", out_blk, FIPS_R1_AFTER_SHIFT);

        key_blk = FIPS_R1_KEY1;
        @(posedge clk);
        #1;
        `CHK_EQ("lastround(start,key1)", out_blk, FIPS_R1_AFTER_SHIFT ^ FIPS_R1_KEY1);

        `TB_SUMMARY("LASTROUND_TB");
    end
endmodule
