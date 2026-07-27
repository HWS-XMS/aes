import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// KEY_EXPANSION_TI - size-generic DOM-masked key schedule wrapper.
// Routes to the sized KEY_EXPANSION_{128,192,256}_TI at elaboration time based
// on KEYSIZE, mirroring the unmasked KEY_EXPANSION.  N shares; fresh randomness
// is an external input, width RTOT (= NSUB*4*N*(N-1)/2*8 bits).
// ============================================================================
module KEY_EXPANSION_TI #(
    parameter  int N       = 2,
    parameter  int KEYSIZE = 16,                       // bytes: 16, 24, 32
    localparam int Nk      = KEYSIZE / 4,
    localparam int Nr      = Nk + 6,
    localparam int NSUB    = (KEYSIZE == 16) ? 10 : (KEYSIZE == 24) ? 8 : 13,
    localparam int RW      = N*(N-1)/2,
    localparam int RTOT    = NSUB*4*RW*8
)(
    input  logic                    clk,
    input  logic                    rst,
    input  logic [N*KEYSIZE*8-1:0]  key,
    input  logic [RTOT-1:0]         rnd,
    output logic [N*(Nr+1)*128-1:0] round_keys
);
    generate
        if (KEYSIZE == 16) begin : g128
            KEY_EXPANSION_128_TI #(N) k (
                .clk(clk), .rst(rst), .key(key), .rnd(rnd), .round_keys(round_keys));
        end else if (KEYSIZE == 24) begin : g192
            KEY_EXPANSION_192_TI #(N) k (
                .clk(clk), .rst(rst), .key(key), .rnd(rnd), .round_keys(round_keys));
        end else begin : g256
            KEY_EXPANSION_256_TI #(N) k (
                .clk(clk), .rst(rst), .key(key), .rnd(rnd), .round_keys(round_keys));
        end
    endgenerate
endmodule
