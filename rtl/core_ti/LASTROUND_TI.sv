import AES_PKG::*;
import AES_TI_PKG::*;
// LASTROUND_TI - masked final round: masked SubBytes, share-wise ShiftRows and
// AddRoundKey (no MixColumns).  Latency = S-box latency (4).
module LASTROUND_TI #(
    parameter  int N    = 2,
    localparam int RW   = N*(N-1)/2,
    localparam int RTOT = 16*4*RW*8
)(
    input  logic             clk,
    input  logic             rst,
    input  logic [N*128-1:0] state_in,
    input  logic [N*128-1:0] round_key,
    input  logic [RTOT-1:0]  rnd,
    output logic [N*128-1:0] state_out
);
    logic [N*128-1:0] sb, sr;
    SUBBYTES_TI  #(N) su (.clk(clk), .rst(rst), .state_in(state_in), .rnd(rnd), .state_out(sb));
    SHIFTROWS_TI #(N) sh (.state_in(sb), .state_out(sr));
    ADDROUNDKEY_TI#(N) ak (.state_in(sr), .key_in(round_key), .state_out(state_out));
endmodule
