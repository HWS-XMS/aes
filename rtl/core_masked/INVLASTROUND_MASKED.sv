import AES_PKG::*;
import AES_MASKED_PKG::*;
// INVLASTROUND_MASKED - masked inverse final round: InvShiftRows -> InvSubBytes ->
// AddRoundKey (no InvMixColumns).  Latency = S-box (8).
module INVLASTROUND_MASKED #(
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
    logic [N*128-1:0] isr;
    logic [N*128-1:0] isb;
    INVSHIFTROWS_MASKED #(N) sh (
        .state_in  (state_in),
        .state_out (isr     )
    );
    INVSUBBYTES_MASKED #(N) su (
        .clk       (clk),
        .rst       (rst),
        .state_in  (isr),
        .rnd       (rnd),
        .state_out (isb)
    );
    ADDROUNDKEY_MASKED #(N) ak (
        .state_in  (isb      ),
        .key_in    (round_key),
        .state_out (state_out)
    );
endmodule
