import AES_PKG::*;
// INVSUBBYTES_TB - InvSubBytes vs the NIST inverse S-box table + FIPS-197 round-1.
module INVSUBBYTES_TB;
    `include "tb_check.svh"
    `include "tb_util.svh"

    logic [127:0] in_blk, out_blk;
    state_t s_in, s_out;
    reg [7:0] nist_invsbox [0:255];

    AES_BYTES_TO_STATE b2s (.bytes_in(in_blk),  .state_out(s_in));
    INVSUBBYTES        dut (.state_in(s_in),    .state_out(s_out));
    AES_STATE_TO_BYTES s2b (.state_in(s_out),   .bytes_out(out_blk));

    integer t, i;
    initial begin
        $readmemh("invsbox.mem", nist_invsbox);

        in_blk = FIPS_R1_AFTER_SUB; #1;
        `CHK_EQ("invsubbytes fips r1", out_blk, FIPS_R1_START);

        for (t = 0; t < 200; t = t + 1) begin
            in_blk = {$random, $random, $random, $random}; #1;
            for (i = 0; i < 16; i = i + 1) begin
                `CHK_EQ("invsubbytes byte", out_blk[i*8+:8], nist_invsbox[in_blk[i*8+:8]]);
            end
        end
        `TB_SUMMARY("INVSUBBYTES_TB");
    end
endmodule
