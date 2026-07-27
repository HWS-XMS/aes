import AES_PKG::*;
// MIXCOLUMNS_TI - MixColumns applied share-wise (linear).  Combinational.
module MIXCOLUMNS_TI #(
    parameter int N = 2
)(
    input  logic [N*128-1:0] state_in,
    output logic [N*128-1:0] state_out
);
    genvar s;
    generate
        for (s = 0; s < N; s++) begin
            MIXCOLUMNS mc (
                .state_in  (state_in [s*128 +: 128]),
                .state_out (state_out[s*128 +: 128])
            );
        end
    endgenerate
endmodule
