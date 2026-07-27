import AES_PKG::*;
import AES_TI_PKG::*;
// GF_INV_TI_TB - HPC1-masked GF(2^8) inverse x^254, N = 2, 3, 4.  gf_inv_ref is
// anchored (gf_mul8(x, gf_inv_ref(x)) == 1 for x != 0); then recombine(masked) ==
// x^-1 for every x in 0..255, with fresh randomness each cycle.  Latency = 8.
module GF_INV_TI_TB;
    `include "tb_check.svh"

    logic clk = 0;
    logic rst = 1;
    always #5 clk = ~clk;

    function automatic byte_t rnd8;
        rnd8 = $random;
    endfunction

    // x^254 via the Fermat addition chain (field ops from AES_TI_PKG)
    function automatic byte_t gf_inv_ref(input byte_t x);
        byte_t x2;
        byte_t x3;
        byte_t x12;
        byte_t x15;
        byte_t x240;
        byte_t x252;
        x2   = gf_sq(x);
        x3   = gf_mul8(x2, x);
        x12  = gf_sq(gf_sq(x3));
        x15  = gf_mul8(x12, x3);
        x240 = gf_sq(gf_sq(gf_sq(gf_sq(x15))));
        x252 = gf_mul8(x240, x12);
        gf_inv_ref = gf_mul8(x252, x2);
    endfunction

    localparam int N2 = 2;
    localparam int N3 = 3;
    localparam int N4 = 4;
    localparam int R2 = 4*hpc1_rand_words(N2)*8;
    localparam int R3 = 4*hpc1_rand_words(N3)*8;
    localparam int R4 = 4*hpc1_rand_words(N4)*8;

    logic [N2*8-1:0] x2s;
    logic [N2*8-1:0] y2;
    logic [R2-1:0]   r2;
    logic [N3*8-1:0] x3s;
    logic [N3*8-1:0] y3;
    logic [R3-1:0]   r3;
    logic [N4*8-1:0] x4s;
    logic [N4*8-1:0] y4;
    logic [R4-1:0]   r4;

    GF_INV_TI #(N2) g2 (
        .clk (clk),
        .rst (rst),
        .x   (x2s),
        .rnd (r2 ),
        .y   (y2 )
    );
    GF_INV_TI #(N3) g3 (
        .clk (clk),
        .rst (rst),
        .x   (x3s),
        .rnd (r3 ),
        .y   (y3 )
    );
    GF_INV_TI #(N4) g4 (
        .clk (clk),
        .rst (rst),
        .x   (x4s),
        .rnd (r4 ),
        .y   (y4 )
    );

    integer kk;
    always @(posedge clk) begin
        for (kk = 0; kk < R2/8; kk++) begin
            r2[kk*8 +: 8] <= rnd8();
        end
        for (kk = 0; kk < R3/8; kk++) begin
            r3[kk*8 +: 8] <= rnd8();
        end
        for (kk = 0; kk < R4/8; kk++) begin
            r4[kk*8 +: 8] <= rnd8();
        end
    end

    function automatic byte_t rec2(input logic [N2*8-1:0] v);
        rec2 = v[0+:8] ^ v[8+:8];
    endfunction
    function automatic byte_t rec3(input logic [N3*8-1:0] v);
        rec3 = v[0+:8] ^ v[8+:8] ^ v[16+:8];
    endfunction
    function automatic byte_t rec4(input logic [N4*8-1:0] v);
        rec4 = v[0+:8] ^ v[8+:8] ^ v[16+:8] ^ v[24+:8];
    endfunction

    integer xv;
    byte_t m0;
    byte_t m1;
    byte_t m2;
    byte_t iref;
    initial begin
        `CHK_EQ("inv(0)=0", gf_inv_ref(8'h00), 8'h00);
        for (xv = 1; xv < 256; xv++) begin
            `CHK_EQ("x*inv=1", gf_mul8(xv[7:0], gf_inv_ref(xv[7:0])), 8'h01);
        end

        repeat (3) @(posedge clk); #1;
        rst = 0;

        for (xv = 0; xv < 256; xv++) begin
            iref = gf_inv_ref(xv[7:0]);
            m0 = rnd8();
            x2s[0+:8] = xv[7:0] ^ m0;
            x2s[8+:8] = m0;
            m0 = rnd8();
            m1 = rnd8();
            x3s[0+:8]  = xv[7:0] ^ m0 ^ m1;
            x3s[8+:8]  = m0;
            x3s[16+:8] = m1;
            m0 = rnd8();
            m1 = rnd8();
            m2 = rnd8();
            x4s[0+:8]  = xv[7:0] ^ m0 ^ m1 ^ m2;
            x4s[8+:8]  = m0;
            x4s[16+:8] = m1;
            x4s[24+:8] = m2;

            repeat (12) @(posedge clk); #1;   // 8-cycle latency + margin; x held
            `CHK_EQ("inv N2", rec2(y2), iref);
            `CHK_EQ("inv N3", rec3(y3), iref);
            `CHK_EQ("inv N4", rec4(y4), iref);
        end
        `TB_SUMMARY("GF_INV_TI_TB");
    end
endmodule
