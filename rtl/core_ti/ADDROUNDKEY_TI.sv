import AES_PKG::*;
// ADDROUNDKEY_TI - share-wise AddRoundKey: XOR each state share with its round-key share.
module ADDROUNDKEY_TI #(
    parameter int N = 2
)(
    input  logic [N*128-1:0] state_in,
    input  logic [N*128-1:0] key_in,
    output logic [N*128-1:0] state_out
);
    assign state_out = state_in ^ key_in;
endmodule
