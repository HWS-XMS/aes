import AES_PKG::*;
import AES_TI_PKG::*;
// SUBBYTES_TI - masked SubBytes: 16 DOM-masked S-boxes, one per state byte.
// For byte k the N shares are gathered across the N state shares, fed to a
// SBOX_TI, and the N output shares scattered back.  Latency = S-box latency (4).
// Requires N >= 2.  rnd holds 16 * (4 * N*(N-1)/2) GF(2^8) random words.
module SUBBYTES_TI #(
    parameter  int N    = 2,
    localparam int RW   = N*(N-1)/2,
    localparam int RPER = 4*RW*8,       // random bits per S-box
    localparam int RTOT = 16*RPER
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*128-1:0] state_in,
    input  logic [RTOT-1:0]  rnd,
    output logic [N*128-1:0] state_out
);
    genvar k, s;
    generate
        for (k = 0; k < 16; k++) begin : g_byte
            logic [N*8-1:0] xin, yout;
            for (s = 0; s < N; s++) begin : g_share
                assign xin[s*8 +: 8]                 = state_in[s*128 + k*8 +: 8];
                assign state_out[s*128 + k*8 +: 8]   = yout[s*8 +: 8];
            end
            SBOX_TI #(N) sb (
                .clk(clk), .rst(rst),
                .x  (xin),
                .rnd(rnd[k*RPER +: RPER]),
                .y  (yout)
            );
        end
    endgenerate
endmodule
