import AES_PKG::*;
// INVLASTROUND - final inverse AES round: InvShiftRows -> InvSubBytes ->
// AddRoundKey (no InvMixColumns), registered.
module INVLASTROUND (
    input  logic   clk,
    input  logic   rst,
    input  block_t round_key,
    input  block_t state_in,
    output block_t state_out
);
    block_t state_after_inv_shift_rows;
    INVSHIFTROWS isr (
        .state_in  (state_in                  ),
        .state_out (state_after_inv_shift_rows)
    );

    block_t state_after_inv_sub_bytes;
    INVSUBBYTES isb (
        .state_in  (state_after_inv_shift_rows),
        .state_out (state_after_inv_sub_bytes )
    );

    block_t round_out;
    ADDROUNDKEY ark (
        .state_in  (state_after_inv_sub_bytes),
        .round_key (round_key                ),
        .state_out (round_out                )
    );

    always_ff @(posedge clk) begin
        if (rst) begin
            state_out <= '0;
        end else begin
            state_out <= round_out;
        end
    end
endmodule
