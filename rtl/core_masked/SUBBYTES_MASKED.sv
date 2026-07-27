import AES_PKG::*;
import AES_MASKED_PKG::*;
// SUBBYTES_MASKED - masked SubBytes: 16 SBOX_MASKED, one per state byte (shares gathered
// per byte, scattered back).  Latency = S-box (8).  rnd = 16*sbox_rand_words(N).
module SUBBYTES_MASKED #(
    parameter  int N    = 2,
    localparam int RPER = sbox_rand_words(N)*8,
    localparam int RTOT = 16*RPER
)(
    input  logic             clk,
    input  logic             rst,
    input  logic [N*128-1:0] state_in,
    input  logic [RTOT-1:0]  rnd,
    output logic [N*128-1:0] state_out
);
    genvar k;
    genvar s;
    generate
        for (k = 0; k < 16; k++) begin
            logic [N*8-1:0] xin;
            logic [N*8-1:0] yout;
            for (s = 0; s < N; s++) begin
                assign xin[s*8 +: 8] = state_in[s*128 + k*8 +: 8];
                assign state_out[s*128 + k*8 +: 8] = yout[s*8 +: 8];
            end
            SBOX_MASKED #(N) sb (
                .clk (clk                ),
                .rst (rst                ),
                .x   (xin                ),
                .rnd (rnd[k*RPER +: RPER]),
                .y   (yout               )
            );
        end
    endgenerate
endmodule
