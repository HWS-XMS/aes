import AES_PKG::*;
// INVSBOX_TI_TB - DOM-masked inverse S-box, verified for N = 2, 3, 4 shares.
// Splits each input byte into N random shares, feeds fresh randomness, waits the
// latency, XORs the output shares, and compares to the NIST inverse S-box table.
module INVSBOX_TI_TB;
    `include "tb_check.svh"

    logic clk = 0, rst = 1;
    always begin #5 clk = ~clk; end

    reg [7:0] nist_invsbox [0:255];

    localparam int N2 = 2, R2 = 4*(N2*(N2-1)/2)*8;
    logic [N2*8-1:0] x2, y2;  logic [R2-1:0] r2;
    INVSBOX_TI #(N2) s2 (.clk(clk), .rst(rst), .x(x2), .rnd(r2), .y(y2));

    localparam int N3 = 3, R3 = 4*(N3*(N3-1)/2)*8;
    logic [N3*8-1:0] x3, y3;  logic [R3-1:0] r3;
    INVSBOX_TI #(N3) s3 (.clk(clk), .rst(rst), .x(x3), .rnd(r3), .y(y3));

    localparam int N4 = 4, R4 = 4*(N4*(N4-1)/2)*8;
    logic [N4*8-1:0] x4, y4;  logic [R4-1:0] r4;
    INVSBOX_TI #(N4) s4 (.clk(clk), .rst(rst), .x(x4), .rnd(r4), .y(y4));

    always @(posedge clk) begin
        r2 <= {$random};
        r3 <= {$random, $random, $random};
        r4 <= {$random, $random, $random, $random, $random, $random};
    end

    byte_t rec2, rec3, rec4;
    assign rec2 = y2[7:0] ^ y2[15:8];
    assign rec3 = y3[7:0] ^ y3[15:8] ^ y3[23:16];
    assign rec4 = y4[7:0] ^ y4[15:8] ^ y4[23:16] ^ y4[31:24];

    integer xi;
    byte_t m1, m2, m3, xb;
    initial begin
        $readmemh("invsbox.mem", nist_invsbox);
        repeat (2) begin @(posedge clk); end rst = 0; @(posedge clk);
        for (xi = 0; xi < 256; xi = xi + 1) begin
            xb = xi[7:0];
            m1 = $random; m2 = $random; m3 = $random;
            x2 = {m1, xb ^ m1};
            x3 = {m2, m1, xb ^ m1 ^ m2};
            x4 = {m3, m2, m1, xb ^ m1 ^ m2 ^ m3};
            repeat (6) begin @(posedge clk); end #1;
            `CHK_EQ("invsbox_ti N=2", rec2, nist_invsbox[xi]);
            `CHK_EQ("invsbox_ti N=3", rec3, nist_invsbox[xi]);
            `CHK_EQ("invsbox_ti N=4", rec4, nist_invsbox[xi]);
        end
        `TB_SUMMARY("INVSBOX_TI_TB");
    end
endmodule
