import AES_PKG::*;
// ADDROUNDKEY_TI - AddRoundKey is a bit-wise XOR, applied share-wise: share s of
// the state is XORed with share s of the (masked) round key. Combinational.
module ADDROUNDKEY_TI #(
    parameter int N = 2
)(
    input  logic [N*128-1:0] state_in,
    input  logic [N*128-1:0] key_in,
    output logic [N*128-1:0] state_out
);
    // Share-wise XOR; because shares are aligned, this is a single vector XOR.
    assign state_out = state_in ^ key_in;
endmodule
