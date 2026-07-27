import AES_PKG::*;
import AES_TI_PKG::*;
// ADDROUNDKEY_TI_TB - masked AddRoundKey, N = 2, 3, 4.  recombine(masked) ==
// unmasked ADDROUNDKEY for random state/key with random share splits.  Combinational.
module ADDROUNDKEY_TI_TB;
    `include "tb_check.svh"

    function automatic logic [127:0] r128;
        r128 = {$random, $random, $random, $random};
    endfunction

    logic [127:0] st;
    logic [127:0] ky;
    logic [127:0] ref_out;
    ADDROUNDKEY uref (
        .state_in  (st     ),
        .round_key (ky     ),
        .state_out (ref_out)
    );

    localparam int N2 = 2;
    localparam int N3 = 3;
    localparam int N4 = 4;
    logic [N2*128-1:0] ss2;
    logic [N2*128-1:0] ks2;
    logic [N2*128-1:0] so2;
    logic [N3*128-1:0] ss3;
    logic [N3*128-1:0] ks3;
    logic [N3*128-1:0] so3;
    logic [N4*128-1:0] ss4;
    logic [N4*128-1:0] ks4;
    logic [N4*128-1:0] so4;
    ADDROUNDKEY_TI #(N2) a2 (
        .state_in  (ss2),
        .key_in    (ks2),
        .state_out (so2)
    );
    ADDROUNDKEY_TI #(N3) a3 (
        .state_in  (ss3),
        .key_in    (ks3),
        .state_out (so3)
    );
    ADDROUNDKEY_TI #(N4) a4 (
        .state_in  (ss4),
        .key_in    (ks4),
        .state_out (so4)
    );

    function automatic logic [127:0] rec2(input logic [N2*128-1:0] v);
        rec2 = v[0+:128] ^ v[128+:128];
    endfunction
    function automatic logic [127:0] rec3(input logic [N3*128-1:0] v);
        rec3 = v[0+:128] ^ v[128+:128] ^ v[256+:128];
    endfunction
    function automatic logic [127:0] rec4(input logic [N4*128-1:0] v);
        rec4 = v[0+:128] ^ v[128+:128] ^ v[256+:128] ^ v[384+:128];
    endfunction

    integer t;
    logic [127:0] m0;
    logic [127:0] m1;
    logic [127:0] m2;
    initial begin
        for (t = 0; t < 500; t++) begin
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
            m0 = r128();
            m1 = r128();
            m2 = r128();
            ss4[0+:128]   = st ^ m0 ^ m1 ^ m2;
            ss4[128+:128] = m0;
            ss4[256+:128] = m1;
            ss4[384+:128] = m2;
            m0 = r128();
            m1 = r128();
            m2 = r128();
            ks4[0+:128]   = ky ^ m0 ^ m1 ^ m2;
            ks4[128+:128] = m0;
            ks4[256+:128] = m1;
            ks4[384+:128] = m2;
            #1;
            `CHK_EQ("ark N2", rec2(so2), ref_out);
            `CHK_EQ("ark N3", rec3(so3), ref_out);
            `CHK_EQ("ark N4", rec4(so4), ref_out);
        end
        `TB_SUMMARY("ADDROUNDKEY_TI_TB");
    end
endmodule
