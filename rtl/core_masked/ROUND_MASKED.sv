import AES_PKG::*;
import AES_MASKED_PKG::*;
// ROUND_MASKED - one masked AES round: SubBytes then share-wise ShiftRows, MixColumns,
// AddRoundKey.  Pipelining from the S-box (latency 8); linear layers combinational.
module ROUND_MASKED #(
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
    logic [N*128-1:0] mc;
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
    MIXCOLUMNS_MASKED #(N) mx (
        .state_in  (sr),
        .state_out (mc)
    );
    ADDROUNDKEY_MASKED #(N) ak (
        .state_in  (mc       ),
        .key_in    (round_key),
        .state_out (state_out)
    );
endmodule
