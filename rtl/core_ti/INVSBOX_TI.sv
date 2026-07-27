import AES_PKG::*;
import AES_TI_PKG::*;
// INVSBOX_TI - DOM/HPC1-masked AES inverse S-box, N shares:
// S^-1(y) = (inv_affine(y) ^ 0x05)^254.  The inverse affine is linear (0x05 into
// one share) and precedes the shared GF_INV_TI.  Latency = GF_INV_TI (8).
module INVSBOX_TI #(
    parameter  int N    = 2,
    localparam int RALL = sbox_rand_words(N)*8
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*8-1:0]  x,
    input  logic [RALL-1:0] rnd,
    output logic [N*8-1:0]  y
);
    function automatic logic [N*8-1:0] sw_inv_affine(input logic [N*8-1:0] v);
        for (int s = 0; s < N; s++) begin
            sw_inv_affine[s*8 +: 8] = aes_inv_affine_lin(v[s*8 +: 8]);
        end
    endfunction

    logic [N*8-1:0] iaff;
    logic [N*8-1:0] a;
    assign iaff = sw_inv_affine(x);
    always_comb begin
        a = iaff;
        a[7:0] = iaff[7:0] ^ AES_INV_AFFINE_CONST;
    end

    GF_INV_TI #(N) ginv (
        .clk (clk),
        .rst (rst),
        .x   (a  ),
        .rnd (rnd),
        .y   (y  )
    );
endmodule
