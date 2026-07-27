import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// GF_INV_TI - DOM-masked multiplicative inverse in GF(2^8), N shares.
//
// Computes y = x^254 = x^-1 (0 -> 0) by Fermat inversion in the standard AES
// field.  Squarings are linear (share-wise); the four GF(2^8) multiplications in
// the x^254 addition chain are DOM_MUL gadgets that consume fresh randomness.
// Latency = 4 cycles.  Shared by both the forward (SBOX_TI) and inverse
// (INVSBOX_TI) S-boxes - only the surrounding affine differs.
//
//   x^2 -> x^3 -> x^12 -> x^15 -> x^240 -> x^252 -> x^254
//          (M1)          (M2)             (M3)      (M4)
//
// `rnd` holds 4 * N*(N-1)/2 GF(2^8) random words.
// ============================================================================
module GF_INV_TI #(
    parameter  int N    = 2,
    localparam int RW   = N*(N-1)/2,
    localparam int RB   = RW*8,
    localparam int RALL = (RB*4 > 0) ? RB*4 : 1,
    localparam int ZP   = (RB > 0) ? RB : 1
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*8-1:0]  x,
    input  logic [RALL-1:0] rnd,
    output logic [N*8-1:0]  y            // y = x^254, 4-cycle latency
);
    // share-wise repeated squaring (linear)
    function automatic logic [N*8-1:0] sw_sqpow(input logic [N*8-1:0] v, input int k);
        for (int s = 0; s < N; s++) begin
            sw_sqpow[s*8 +: 8] = gf_sq_pow(v[s*8 +: 8], k);
        end
    endfunction

    // randomness split (one slice per multiply)
    logic [ZP-1:0] z1, z2, z3, z4;
    generate
        if (RB > 0) begin : g_rnd
            assign z1 = rnd[0*RB +: RB];
            assign z2 = rnd[1*RB +: RB];
            assign z3 = rnd[2*RB +: RB];
            assign z4 = rnd[3*RB +: RB];
        end else begin : g_norand
            assign z1 = '0; assign z2 = '0; assign z3 = '0; assign z4 = '0;
        end
    endgenerate

    // stage 0
    logic [N*8-1:0] t1, x3;
    assign t1 = sw_sqpow(x, 1);                              // x^2
    DOM_MUL #(N) m1 (.clk(clk), .rst(rst), .a(t1), .b(x),  .z(z1), .c(x3));   // x^3

    // stage 1
    logic [N*8-1:0] x12, x15;
    assign x12 = sw_sqpow(x3, 2);                           // x^12
    DOM_MUL #(N) m2 (.clk(clk), .rst(rst), .a(x12), .b(x3), .z(z2), .c(x15)); // x^15

    // alignment delays: x12 -> stage 2, x^2 -> stage 3
    logic [N*8-1:0] x12_d, t1_d1, t1_d2, t1_d3;
    always_ff @(posedge clk) begin
        if (rst) begin
            x12_d <= '0; t1_d1 <= '0; t1_d2 <= '0; t1_d3 <= '0;
        end else begin
            x12_d <= x12;
            t1_d1 <= t1; t1_d2 <= t1_d1; t1_d3 <= t1_d2;
        end
    end

    // stage 2
    logic [N*8-1:0] x240, x252;
    assign x240 = sw_sqpow(x15, 4);                         // x^240
    DOM_MUL #(N) m3 (.clk(clk), .rst(rst), .a(x240), .b(x12_d), .z(z3), .c(x252)); // x^252

    // stage 3
    DOM_MUL #(N) m4 (.clk(clk), .rst(rst), .a(x252), .b(t1_d3), .z(z4), .c(y));    // x^254
endmodule
