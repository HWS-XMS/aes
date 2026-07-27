import AES_PKG::*;
import AES_TI_PKG::*;
// REFRESH_TI_TB - a refresh must PRESERVE the shared value: recombine(c) ==
// recombine(a) for any input sharing and any fresh randomness, N = 2, 3, 4.
// Latency = 1.  (Security is exercised by the GF_INV_TI probing proof.)
module REFRESH_TI_TB;
    `include "tb_check.svh"

    logic clk = 0;
    logic rst = 1;
    always #5 clk = ~clk;

    function automatic byte_t rnd8;
        rnd8 = $random;
    endfunction

    localparam int N2  = 2;
    localparam int N3  = 3;
    localparam int N4  = 4;
    localparam int RB2 = ref_rand_words(2)*8;
    localparam int RB3 = ref_rand_words(3)*8;
    localparam int RB4 = ref_rand_words(4)*8;

    logic [N2*8-1:0] a2;
    logic [N2*8-1:0] c2;
    logic [RB2-1:0]  z2;
    logic [N3*8-1:0] a3;
    logic [N3*8-1:0] c3;
    logic [RB3-1:0]  z3;
    logic [N4*8-1:0] a4;
    logic [N4*8-1:0] c4;
    logic [RB4-1:0]  z4;

    REFRESH_TI #(N2) r2 (
        .clk (clk),
        .rst (rst),
        .a   (a2 ),
        .rnd (z2 ),
        .c   (c2 )
    );
    REFRESH_TI #(N3) r3 (
        .clk (clk),
        .rst (rst),
        .a   (a3 ),
        .rnd (z3 ),
        .c   (c3 )
    );
    REFRESH_TI #(N4) r4 (
        .clk (clk),
        .rst (rst),
        .a   (a4 ),
        .rnd (z4 ),
        .c   (c4 )
    );

    function automatic byte_t rec2(input logic [N2*8-1:0] v);
        rec2 = v[0+:8] ^ v[8+:8];
    endfunction
    function automatic byte_t rec3(input logic [N3*8-1:0] v);
        rec3 = v[0+:8] ^ v[8+:8] ^ v[16+:8];
    endfunction
    function automatic byte_t rec4(input logic [N4*8-1:0] v);
        rec4 = v[0+:8] ^ v[8+:8] ^ v[16+:8] ^ v[24+:8];
    endfunction

    integer t;
    byte_t av;
    byte_t m0;
    byte_t m1;
    byte_t m2;
    initial begin
        repeat (3) @(posedge clk); #1;
        rst = 0;

        for (t = 0; t < 2000; t++) begin
            av = rnd8();
            m0 = rnd8();
            a2[0+:8] = av ^ m0;
            a2[8+:8] = m0;
            z2 = rnd8();
            m0 = rnd8();
            m1 = rnd8();
            a3[0+:8]  = av ^ m0 ^ m1;
            a3[8+:8]  = m0;
            a3[16+:8] = m1;
            z3 = {rnd8(), rnd8()};
            m0 = rnd8();
            m1 = rnd8();
            m2 = rnd8();
            a4[0+:8]  = av ^ m0 ^ m1 ^ m2;
            a4[8+:8]  = m0;
            a4[16+:8] = m1;
            a4[24+:8] = m2;
            z4 = {rnd8(), rnd8(), rnd8(), rnd8()};

            @(posedge clk); #1;
            `CHK_EQ("refresh N2", rec2(c2), av);
            `CHK_EQ("refresh N3", rec3(c3), av);
            `CHK_EQ("refresh N4", rec4(c4), av);
        end
        `TB_SUMMARY("REFRESH_TI_TB");
    end
endmodule
