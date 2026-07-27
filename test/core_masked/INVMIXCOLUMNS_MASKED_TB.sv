import AES_PKG::*;
import AES_MASKED_PKG::*;
// INVMIXCOLUMNS_MASKED_TB - masked InvMixColumns, N = 2, 3, 4.  recombine(masked) ==
// unmasked INVMIXCOLUMNS for random state with random share splits.  Combinational.
module INVMIXCOLUMNS_MASKED_TB;
    `include "tb_check.svh"

    function automatic logic [127:0] r128;
        r128 = {$random, $random, $random, $random};
    endfunction

    logic [127:0] st;
    logic [127:0] ref_out;
    INVMIXCOLUMNS uref (
        .state_in  (st     ),
        .state_out (ref_out)
    );

    localparam int N2 = 2;
    localparam int N3 = 3;
    localparam int N4 = 4;
    logic [N2*128-1:0] ss2;
    logic [N2*128-1:0] so2;
    logic [N3*128-1:0] ss3;
    logic [N3*128-1:0] so3;
    logic [N4*128-1:0] ss4;
    logic [N4*128-1:0] so4;
    INVMIXCOLUMNS_MASKED #(N2) s2 (
        .state_in  (ss2),
        .state_out (so2)
    );
    INVMIXCOLUMNS_MASKED #(N3) s3 (
        .state_in  (ss3),
        .state_out (so3)
    );
    INVMIXCOLUMNS_MASKED #(N4) s4 (
        .state_in  (ss4),
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
            m0 = r128();
            ss2[0+:128]   = st ^ m0;
            ss2[128+:128] = m0;
            m0 = r128();
            m1 = r128();
            ss3[0+:128]   = st ^ m0 ^ m1;
            ss3[128+:128] = m0;
            ss3[256+:128] = m1;
            m0 = r128();
            m1 = r128();
            m2 = r128();
            ss4[0+:128]   = st ^ m0 ^ m1 ^ m2;
            ss4[128+:128] = m0;
            ss4[256+:128] = m1;
            ss4[384+:128] = m2;
            #1;
            `CHK_EQ("imc N2", rec2(so2), ref_out);
            `CHK_EQ("imc N3", rec3(so3), ref_out);
            `CHK_EQ("imc N4", rec4(so4), ref_out);
        end
        `TB_SUMMARY("INVMIXCOLUMNS_MASKED_TB");
    end
endmodule
