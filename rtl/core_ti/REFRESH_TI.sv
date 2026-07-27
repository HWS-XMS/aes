import AES_PKG::*;
import AES_TI_PKG::*;
// REFRESH_TI - glitch-robust SNI refresh of an N-share GF(2^8) sharing (N = 2..5),
// matching fullverif MSKref: c_i = Reg(a_i ^ z_i), z a fresh sharing of zero.  The
// value is preserved; the sharing is re-randomised.  ref_rand_words(N) words, latency 1.
module REFRESH_TI #(
    parameter  int N  = 2,
    localparam int RW = ref_rand_words(N),
    localparam int RB = (RW > 0) ? RW*8 : 1
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*8-1:0]  a,
    input  logic [RB-1:0]   rnd,
    output logic [N*8-1:0]  c
);
    logic [N*8-1:0] z;
    generate
        if (N == 2) begin
            assign z[0 +: 8] = rnd[0 +: 8];
            assign z[8 +: 8] = rnd[0 +: 8];
        end else if (N == 3) begin
            assign z[0  +: 8] = rnd[0 +: 8];
            assign z[8  +: 8] = rnd[8 +: 8];
            assign z[16 +: 8] = rnd[0 +: 8] ^ rnd[8 +: 8];
        end else begin
            for (genvar i = 0; i < N; i++) begin
                assign z[i*8 +: 8] = rnd[i*8 +: 8] ^ rnd[((i + N - 1) % N)*8 +: 8];
            end
        end
    endgenerate

    always_ff @(posedge clk) begin
        if (rst) begin
            c <= '0;
        end else begin
            c <= a ^ z;
        end
    end
endmodule
