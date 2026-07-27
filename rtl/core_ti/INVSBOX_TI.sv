import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// INVSBOX_TI - DOM-masked AES inverse S-box, N shares.
//
//   S^-1(y) = gf_inv( affine^-1(y) )   with  affine^-1(y) = inv_affine_lin(y) ^ 0x05
//
// Only the affine differs from SBOX_TI: here the (linear) inverse affine is
// applied *before* the shared GF_INV_TI inversion, with constant 0x05 folded
// into a single share.  Latency = GF_INV_TI latency (4 cycles).
// ============================================================================
module INVSBOX_TI #(
    parameter  int N    = 2,
    localparam int RW   = N*(N-1)/2,
    localparam int RALL = (RW*8*4 > 0) ? RW*8*4 : 1
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

    logic [N*8-1:0] iaff, a;
    assign iaff = sw_inv_affine(x);
    always_comb begin
        a = iaff;
        a[7:0] = iaff[7:0] ^ AES_INV_AFFINE_CONST;   // constant into share 0
    end

    GF_INV_TI #(N) ginv (.clk(clk), .rst(rst), .x(a), .rnd(rnd), .y(y));
endmodule
