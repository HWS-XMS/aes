import AES_PKG::*;
// INVSHIFTROWS_MASKED - InvShiftRows applied share-wise (linear).  Combinational.
module INVSHIFTROWS_MASKED #(
    parameter int N = 2
)(
    input  logic [N*128-1:0] state_in,
    output logic [N*128-1:0] state_out
);
    genvar s;
    generate
        for (s = 0; s < N; s++) begin
            INVSHIFTROWS sr (
                .state_in  (state_in [s*128 +: 128]),
                .state_out (state_out[s*128 +: 128])
            );
        end
    endgenerate
endmodule
