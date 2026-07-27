import AES_PKG::*;
import AES_TI_PKG::*;
// DOM_MUL_TB - DOM-masked GF(2^8) multiplier, N = 2, 3, 4.  recombine(masked) ==
// gf_mul8(a,b) for any input sharing and any fresh z (gf_mul8 anchored to FIPS-197).
// Latency = 1 cycle.
module DOM_MUL_TB;
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
    localparam int RW2 = (N2*(N2-1)/2)*8;
    localparam int RW3 = (N3*(N3-1)/2)*8;
    localparam int RW4 = (N4*(N4-1)/2)*8;

    logic [N2*8-1:0] a2;
    logic [N2*8-1:0] b2;
    logic [N2*8-1:0] c2;
    logic [RW2-1:0]  z2;
    logic [N3*8-1:0] a3;
    logic [N3*8-1:0] b3;
    logic [N3*8-1:0] c3;
    logic [RW3-1:0]  z3;
    logic [N4*8-1:0] a4;
    logic [N4*8-1:0] b4;
    logic [N4*8-1:0] c4;
    logic [RW4-1:0]  z4;

    DOM_MUL #(N2) d2 (
        .clk (clk),
        .rst (rst),
        .a   (a2 ),
        .b   (b2 ),
        .z   (z2 ),
        .c   (c2 )
    );
    DOM_MUL #(N3) d3 (
        .clk (clk),
        .rst (rst),
        .a   (a3 ),
        .b   (b3 ),
        .z   (z3 ),
        .c   (c3 )
    );
    DOM_MUL #(N4) d4 (
        .clk (clk),
        .rst (rst),
        .a   (a4 ),
        .b   (b4 ),
        .z   (z4 ),
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
    byte_t bv;
    byte_t m0;
    byte_t m1;
    byte_t m2;
    byte_t ref_prod;
    initial begin
        `CHK_EQ("gf 57*02", gf_mul8(8'h57, 8'h02), 8'hae);
        `CHK_EQ("gf 57*04", gf_mul8(8'h57, 8'h04), 8'h47);
        `CHK_EQ("gf 57*13", gf_mul8(8'h57, 8'h13), 8'hfe);
        `CHK_EQ("gf d4*02", gf_mul8(8'hd4, 8'h02), 8'hb3);
        `CHK_EQ("gf 00*ab", gf_mul8(8'h00, 8'hab), 8'h00);
        `CHK_EQ("gf 01*ab", gf_mul8(8'h01, 8'hab), 8'hab);

        repeat (3) @(posedge clk); #1;
        rst = 0;

        for (t = 0; t < 2000; t++) begin
            av = rnd8();
            bv = rnd8();
            ref_prod = gf_mul8(av, bv);
            m0 = rnd8();
            a2[0+:8] = av ^ m0;
            a2[8+:8] = m0;
            m0 = rnd8();
            b2[0+:8] = bv ^ m0;
            b2[8+:8] = m0;
            z2 = rnd8();
            m0 = rnd8();
            m1 = rnd8();
            a3[0+:8]  = av ^ m0 ^ m1;
            a3[8+:8]  = m0;
            a3[16+:8] = m1;
            m0 = rnd8();
            m1 = rnd8();
            b3[0+:8]  = bv ^ m0 ^ m1;
            b3[8+:8]  = m0;
            b3[16+:8] = m1;
            z3 = {rnd8(), rnd8(), rnd8()};
            m0 = rnd8();
            m1 = rnd8();
            m2 = rnd8();
            a4[0+:8]  = av ^ m0 ^ m1 ^ m2;
            a4[8+:8]  = m0;
            a4[16+:8] = m1;
            a4[24+:8] = m2;
            m0 = rnd8();
            m1 = rnd8();
            m2 = rnd8();
            b4[0+:8]  = bv ^ m0 ^ m1 ^ m2;
            b4[8+:8]  = m0;
            b4[16+:8] = m1;
            b4[24+:8] = m2;
            z4 = {rnd8(), rnd8(), rnd8(), rnd8(), rnd8(), rnd8()};

            @(posedge clk); #1;
            `CHK_EQ("dom N2", rec2(c2), ref_prod);
            `CHK_EQ("dom N3", rec3(c3), ref_prod);
            `CHK_EQ("dom N4", rec4(c4), ref_prod);
        end
        `TB_SUMMARY("DOM_MUL_TB");
    end
endmodule
