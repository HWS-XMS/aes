import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// SBOX_TI - DOM-masked AES S-box, N shares (protection order d = N-1).
//
//   S(x) = affine( x^254 ) ^ 0x63
//
// The multiplicative inverse is the shared GF_INV_TI pipeline; the affine map is
// linear (applied per share) with the constant 0x63 folded into a single share.
// Latency = GF_INV_TI latency (4 cycles).  `rnd` holds 4 * N*(N-1)/2 words.
// ============================================================================
module SBOX_TI #(
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
    function automatic logic [N*8-1:0] sw_affine(input logic [N*8-1:0] v);
        for (int s = 0; s < N; s++) begin
            sw_affine[s*8 +: 8] = aes_affine_lin(v[s*8 +: 8]);
        end
    endfunction

    logic [N*8-1:0] inv, aff;
    GF_INV_TI #(N) ginv (.clk(clk), .rst(rst), .x(x), .rnd(rnd), .y(inv));

    assign aff = sw_affine(inv);
    always_comb begin
        y = aff;
        y[7:0] = aff[7:0] ^ AES_AFFINE_CONST;   // constant into share 0
    end
endmodule
