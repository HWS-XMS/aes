import AES_PKG::*;
import AES_MASKED_PKG::*;
// LASTROUND_MASKED - masked final round: SubBytes, share-wise ShiftRows and
// AddRoundKey (no MixColumns).  Latency = S-box (8).
module LASTROUND_MASKED #(
    parameter  int N    = 2,
    localparam int RTOT = 16*sbox_rand_words(N)*8
)(
    input  logic             clk,
    input  logic             rst,
    input  logic [N*128-1:0] state_in,
    input  logic [N*128-1:0] round_key,
    input  logic [RTOT-1:0]  rnd,
    output logic [N*128-1:0] state_out
);
    logic [N*128-1:0] sb;
    logic [N*128-1:0] sr;
    SUBBYTES_MASKED #(N) su (
        .clk       (clk     ),
        .rst       (rst     ),
        .state_in  (state_in),
        .rnd       (rnd     ),
        .state_out (sb      )
    );
    SHIFTROWS_MASKED #(N) sh (
        .state_in  (sb),
        .state_out (sr)
    );
    ADDROUNDKEY_MASKED #(N) ak (
        .state_in  (sr       ),
        .key_in    (round_key),
        .state_out (state_out)
    );
endmodule
