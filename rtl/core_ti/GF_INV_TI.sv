import AES_PKG::*;
import AES_TI_PKG::*;
// GF_INV_TI - HPC1-masked GF(2^8) inverse x^254 (Fermat), N shares.  Squarings are
// linear (share-wise); the four multiplies combine powers of the same x (dependent
// sharings), so they use HPC1_MUL - a DOM-indep multiplier would leak at first order
// under glitches.  Latency 8 (four 2-cycle multiplies).  rnd = 4*hpc1_rand_words(N).
//   x^2 -> x^3 -> x^12 -> x^15 -> x^240 -> x^252 -> x^254
module GF_INV_TI #(
    parameter  int N    = 2,
    localparam int HW   = hpc1_rand_words(N),
    localparam int HB   = HW*8,
    localparam int RALL = (HB*4 > 0) ? HB*4 : 1
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*8-1:0]  x,
    input  logic [RALL-1:0] rnd,
    output logic [N*8-1:0]  y
);
    function automatic logic [N*8-1:0] sw_sqpow(input logic [N*8-1:0] v, input int k);
        for (int s = 0; s < N; s++) begin
            sw_sqpow[s*8 +: 8] = gf_sq_pow(v[s*8 +: 8], k);
        end
    endfunction

    logic [HB-1:0] z1;
    logic [HB-1:0] z2;
    logic [HB-1:0] z3;
    logic [HB-1:0] z4;
    assign z1 = rnd[0*HB +: HB];
    assign z2 = rnd[1*HB +: HB];
    assign z3 = rnd[2*HB +: HB];
    assign z4 = rnd[3*HB +: HB];

    logic [N*8-1:0] t1;
    logic [N*8-1:0] x3;
    assign t1 = sw_sqpow(x, 1);
    HPC1_MUL #(N) m1 (
        .clk (clk),
        .rst (rst),
        .a   (t1 ),
        .b   (x  ),
        .rnd (z1 ),
        .c   (x3 )
    );

    logic [N*8-1:0] x12;
    logic [N*8-1:0] x15;
    assign x12 = sw_sqpow(x3, 2);
    HPC1_MUL #(N) m2 (
        .clk (clk),
        .rst (rst),
        .a   (x12),
        .b   (x3 ),
        .rnd (z2 ),
        .c   (x15)
    );

    // align x^12 to stage 4 (2 regs) and x^2 to stage 6 (6 regs) for m3 / m4
    logic [N*8-1:0] x12_d1;
    logic [N*8-1:0] x12_d2;
    logic [N*8-1:0] t1_d1;
    logic [N*8-1:0] t1_d2;
    logic [N*8-1:0] t1_d3;
    logic [N*8-1:0] t1_d4;
    logic [N*8-1:0] t1_d5;
    logic [N*8-1:0] t1_d6;
    always_ff @(posedge clk) begin
        if (rst) begin
            x12_d1 <= '0;
            x12_d2 <= '0;
            t1_d1  <= '0;
            t1_d2  <= '0;
            t1_d3  <= '0;
            t1_d4  <= '0;
            t1_d5  <= '0;
            t1_d6  <= '0;
        end else begin
            x12_d1 <= x12;
            x12_d2 <= x12_d1;
            t1_d1  <= t1;
            t1_d2  <= t1_d1;
            t1_d3  <= t1_d2;
            t1_d4  <= t1_d3;
            t1_d5  <= t1_d4;
            t1_d6  <= t1_d5;
        end
    end

    logic [N*8-1:0] x240;
    logic [N*8-1:0] x252;
    assign x240 = sw_sqpow(x15, 4);
    HPC1_MUL #(N) m3 (
        .clk (clk   ),
        .rst (rst   ),
        .a   (x240  ),
        .b   (x12_d2),
        .rnd (z3    ),
        .c   (x252  )
    );

    HPC1_MUL #(N) m4 (
        .clk (clk  ),
        .rst (rst  ),
        .a   (x252 ),
        .b   (t1_d6),
        .rnd (z4   ),
        .c   (y    )
    );
endmodule
