import AES_PKG::*;
import AES_TI_PKG::*;
// ROUND_TI - one masked AES round: masked SubBytes, then the linear layers
// (share-wise ShiftRows, MixColumns, AddRoundKey).  The pipelining comes from
// the S-box (latency 4); the linear layers are combinational.  round_key is the
// N shares of this round's (masked) round key.
module ROUND_TI #(
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
    logic [N*128-1:0] sb, sr, mc;
    SUBBYTES_TI  #(N) su (.clk(clk), .rst(rst), .state_in(state_in), .rnd(rnd), .state_out(sb));
    SHIFTROWS_TI #(N) sh (.state_in(sb), .state_out(sr));
    MIXCOLUMNS_TI#(N) mx (.state_in(sr), .state_out(mc));
    ADDROUNDKEY_TI#(N) ak (.state_in(mc), .key_in(round_key), .state_out(state_out));
endmodule
