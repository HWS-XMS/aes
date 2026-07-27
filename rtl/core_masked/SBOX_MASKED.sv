import AES_PKG::*;
import AES_MASKED_PKG::*;
// SBOX_MASKED - DOM/HPC1-masked AES S-box, N shares: S(x) = affine(x^254) ^ 0x63.
// The inverse is the shared GF_INV_MASKED; the affine is linear (0x63 into one share).
// Latency = GF_INV_MASKED (8).  rnd holds sbox_rand_words(N) words.
module SBOX_MASKED #(
    parameter  int N    = 2,
    localparam int RALL = sbox_rand_words(N)*8
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*8-1:0]  x,
    input  logic [RALL-1:0] rnd,
    output logic [N*8-1:0]  y
);
    function automatic logic [N*8-1:0] sw_affine(input logic [N*8-1:0] v);
        for (int s = 0; s < N; s++) begin
            sw_affine[s*8 +: 8] = aes_affine_lin(v[s*8 +: 8]);
        end
    endfunction

    logic [N*8-1:0] inv;
    logic [N*8-1:0] aff;
    GF_INV_MASKED #(N) ginv (
        .clk (clk),
        .rst (rst),
        .x   (x  ),
        .rnd (rnd),
        .y   (inv)
    );

    assign aff = sw_affine(inv);
    always_comb begin
        y = aff;
        y[7:0] = aff[7:0] ^ AES_AFFINE_CONST;
    end
endmodule
