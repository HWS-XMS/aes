import AES_PKG::*;
import AES_TI_PKG::*;
// INVLASTROUND_TI - masked inverse final round (mirror of unmasked INVLASTROUND):
// InvShiftRows -> InvSubBytes -> AddRoundKey (no InvMixColumns).  Latency = 4.
module INVLASTROUND_TI #(
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
    logic [N*128-1:0] isr, isb;
    INVSHIFTROWS_TI #(N) sh (.state_in(state_in), .state_out(isr));
    INVSUBBYTES_TI  #(N) su (.clk(clk), .rst(rst), .state_in(isr), .rnd(rnd), .state_out(isb));
    ADDROUNDKEY_TI  #(N) ak (.state_in(isb), .key_in(round_key), .state_out(state_out));
endmodule
