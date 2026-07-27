import AES_PKG::*;
import AES_MASKED_PKG::*;
// INVLASTROUND_MASKED_TB - masked final inverse round vs unmasked INVLASTROUND
// (registered), N = 2, 3.  recombine(masked) == unmasked, fresh randomness.  Lat = 8.
module INVLASTROUND_MASKED_TB;
    `include "tb_check.svh"

    logic clk = 0;
    logic rst = 1;
    always #5 clk = ~clk;

    function automatic logic [127:0] r128;
        r128 = {$random, $random, $random, $random};
    endfunction

    logic [127:0] st;
    logic [127:0] ky;
    logic [127:0] ref_out;
    INVLASTROUND uref (
        .clk       (clk    ),
        .rst       (rst    ),
        .round_key (ky     ),
        .state_in  (st     ),
        .state_out (ref_out)
    );

    localparam int N2  = 2;
    localparam int N3  = 3;
    localparam int RT2 = 16*sbox_rand_words(N2)*8;
    localparam int RT3 = 16*sbox_rand_words(N3)*8;
    logic [N2*128-1:0] ss2;
    logic [N2*128-1:0] ks2;
    logic [N2*128-1:0] so2;
    logic [RT2-1:0]    rn2;
    logic [N3*128-1:0] ss3;
    logic [N3*128-1:0] ks3;
    logic [N3*128-1:0] so3;
    logic [RT3-1:0]    rn3;
    INVLASTROUND_MASKED #(N2) r2 (
        .clk       (clk),
        .rst       (rst),
        .state_in  (ss2),
        .round_key (ks2),
        .rnd       (rn2),
        .state_out (so2)
    );
    INVLASTROUND_MASKED #(N3) r3 (
        .clk       (clk),
        .rst       (rst),
        .state_in  (ss3),
        .round_key (ks3),
        .rnd       (rn3),
        .state_out (so3)
    );

    integer kk;
    always @(posedge clk) begin
        for (kk = 0; kk < RT2/32; kk++) begin
            rn2[kk*32 +: 32] <= $random;
        end
        for (kk = 0; kk < RT3/32; kk++) begin
            rn3[kk*32 +: 32] <= $random;
        end
    end

    function automatic logic [127:0] rec2(input logic [N2*128-1:0] v);
        rec2 = v[0+:128] ^ v[128+:128];
    endfunction
    function automatic logic [127:0] rec3(input logic [N3*128-1:0] v);
        rec3 = v[0+:128] ^ v[128+:128] ^ v[256+:128];
    endfunction

    integer t;
    logic [127:0] m0;
    logic [127:0] m1;
    initial begin
        repeat (3) @(posedge clk); #1;
        rst = 0;
        for (t = 0; t < 200; t++) begin
            st = r128();
            ky = r128();
            m0 = r128();
            ss2[0+:128]   = st ^ m0;
            ss2[128+:128] = m0;
            m0 = r128();
            ks2[0+:128]   = ky ^ m0;
            ks2[128+:128] = m0;
            m0 = r128();
            m1 = r128();
            ss3[0+:128]   = st ^ m0 ^ m1;
            ss3[128+:128] = m0;
            ss3[256+:128] = m1;
            m0 = r128();
            m1 = r128();
            ks3[0+:128]   = ky ^ m0 ^ m1;
            ks3[128+:128] = m0;
            ks3[256+:128] = m1;
            repeat (12) @(posedge clk); #1;   // 8-cycle latency + margin; inputs held
            `CHK_EQ("invlast N2", rec2(so2), ref_out);
            `CHK_EQ("invlast N3", rec3(so3), ref_out);
        end
        `TB_SUMMARY("INVLASTROUND_MASKED_TB");
    end
endmodule
