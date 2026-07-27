import AES_PKG::*;
import AES_TI_PKG::*;
// INVSBOX_TI_TB - DOM/HPC1-masked inverse S-box vs the NIST table, N = 2, 3, 4.
// recombine(masked) == invsbox.mem after the S-box latency (8), fresh randomness.
module INVSBOX_TI_TB;
    `include "tb_check.svh"

    logic clk = 0;
    logic rst = 1;
    always #5 clk = ~clk;

    reg [7:0] nist_invsbox [0:255];

    localparam int N2 = 2;
    localparam int N3 = 3;
    localparam int N4 = 4;
    localparam int R2 = sbox_rand_words(N2)*8;
    localparam int R3 = sbox_rand_words(N3)*8;
    localparam int R4 = sbox_rand_words(N4)*8;
    logic [N2*8-1:0] x2;
    logic [N2*8-1:0] y2;
    logic [R2-1:0]   r2;
    logic [N3*8-1:0] x3;
    logic [N3*8-1:0] y3;
    logic [R3-1:0]   r3;
    logic [N4*8-1:0] x4;
    logic [N4*8-1:0] y4;
    logic [R4-1:0]   r4;
    INVSBOX_TI #(N2) s2 (
        .clk (clk),
        .rst (rst),
        .x   (x2 ),
        .rnd (r2 ),
        .y   (y2 )
    );
    INVSBOX_TI #(N3) s3 (
        .clk (clk),
        .rst (rst),
        .x   (x3 ),
        .rnd (r3 ),
        .y   (y3 )
    );
    INVSBOX_TI #(N4) s4 (
        .clk (clk),
        .rst (rst),
        .x   (x4 ),
        .rnd (r4 ),
        .y   (y4 )
    );

    integer kk;
    always @(posedge clk) begin
        for (kk = 0; kk < R2/32; kk++) begin
            r2[kk*32 +: 32] <= $random;
        end
        for (kk = 0; kk < R3/32; kk++) begin
            r3[kk*32 +: 32] <= $random;
        end
        for (kk = 0; kk < R4/32; kk++) begin
            r4[kk*32 +: 32] <= $random;
        end
    end

    byte_t rec2;
    byte_t rec3;
    byte_t rec4;
    assign rec2 = y2[7:0] ^ y2[15:8];
    assign rec3 = y3[7:0] ^ y3[15:8] ^ y3[23:16];
    assign rec4 = y4[7:0] ^ y4[15:8] ^ y4[23:16] ^ y4[31:24];

    integer xi;
    byte_t m1;
    byte_t m2;
    byte_t m3;
    byte_t xb;
    initial begin
        $readmemh("invsbox.mem", nist_invsbox);
        repeat (2) @(posedge clk);
        rst = 0;
        @(posedge clk);

        for (xi = 0; xi < 256; xi++) begin
            xb = xi[7:0];
            m1 = $random;
            m2 = $random;
            m3 = $random;
            x2 = {m1, xb ^ m1};
            x3 = {m2, m1, xb ^ m1 ^ m2};
            x4 = {m3, m2, m1, xb ^ m1 ^ m2 ^ m3};
            repeat (12) @(posedge clk); #1;   // 8-cycle latency + margin
            `CHK_EQ("invsbox_ti N=2", rec2, nist_invsbox[xi]);
            `CHK_EQ("invsbox_ti N=3", rec3, nist_invsbox[xi]);
            `CHK_EQ("invsbox_ti N=4", rec4, nist_invsbox[xi]);
        end
        `TB_SUMMARY("INVSBOX_TI_TB");
    end
endmodule
