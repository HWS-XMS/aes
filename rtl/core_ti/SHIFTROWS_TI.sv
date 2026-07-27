import AES_PKG::*;
// SHIFTROWS_TI - ShiftRows is linear, so it is applied independently to each of
// the N Boolean shares (a plain SHIFTROWS per share). Combinational.
// Each share is a 128-bit state block.
module SHIFTROWS_TI #(
    parameter int N = 2
)(
    input  logic [N*128-1:0] state_in,
    output logic [N*128-1:0] state_out
);
    genvar s;
    generate
        for (s = 0; s < N; s++) begin : g_share
            SHIFTROWS sr (
                .state_in  (state_in [s*128 +: 128]),
                .state_out (state_out[s*128 +: 128])
            );
        end
    endgenerate
endmodule
