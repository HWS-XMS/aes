import AES_PKG::*;
// ADDROUNDKEY_TB - FIPS-197 round-1 vector + XOR property over random inputs.
module ADDROUNDKEY_TB;
    `include "tb_check.svh"
    `include "tb_util.svh"

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
    ADDROUNDKEY dut (
        .state_in  (s_in ),
        .round_key (s_key),
        .state_out (s_out)
    );
    AES_STATE_TO_BYTES s2b (
        .state_in  (s_out ),
        .bytes_out (out_blk)
    );

    integer t;
    initial begin
        in_blk  = FIPS_R1_AFTER_MIX;
        key_blk = FIPS_R1_KEY1;
        #1;
        `CHK_EQ("addroundkey fips r1", out_blk, FIPS_R1_OUTPUT);

        for (t = 0; t < 100; t++) begin
            in_blk  = {$random, $random, $random, $random};
            key_blk = {$random, $random, $random, $random};
            #1;
            `CHK_EQ("addroundkey xor", out_blk, in_blk ^ key_blk);
        end
        `TB_SUMMARY("ADDROUNDKEY_TB");
    end
endmodule
