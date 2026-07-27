import AES_PKG::*;
// SUBBYTES_TB - SubBytes vs the NIST S-box table (per byte) + FIPS-197 round-1.
module SUBBYTES_TB;
    `include "tb_check.svh"
    `include "tb_util.svh"

    logic [127:0] in_blk;
    logic [127:0] out_blk;
    state_t s_in;
    state_t s_out;
    reg [7:0] nist_sbox [0:255];

    AES_BYTES_TO_STATE b2s (
        .bytes_in  (in_blk),
        .state_out (s_in  )
    );
    SUBBYTES dut (
        .state_in  (s_in ),
        .state_out (s_out)
    );
    AES_STATE_TO_BYTES s2b (
        .state_in  (s_out  ),
        .bytes_out (out_blk)
    );

    integer t;
    integer i;
    initial begin
        $readmemh("sbox.mem", nist_sbox);

        in_blk = FIPS_R1_START;
        #1;
        `CHK_EQ("subbytes fips r1", out_blk, FIPS_R1_AFTER_SUB);

        for (t = 0; t < 200; t++) begin
            in_blk = {$random, $random, $random, $random};
            #1;
            for (i = 0; i < 16; i++) begin
                `CHK_EQ("subbytes byte", out_blk[i*8+:8], nist_sbox[in_blk[i*8+:8]]);
            end
        end
        `TB_SUMMARY("SUBBYTES_TB");
    end
endmodule
