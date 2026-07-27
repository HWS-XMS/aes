import AES_PKG::*;
module INVROUND (
    input  logic        clk,
    input  logic        rst,
    input  block_t      round_key,
    input  block_t      state_in,
    output block_t      state_out
);

    // Inverse round for standard AES decryption
    // Order: InvShiftRows -> InvSubBytes -> AddRoundKey -> InvMixColumns

    block_t state_after_inv_shift_rows;
    INVSHIFTROWS isr (
        .state_in   (state_in),
        .state_out  (state_after_inv_shift_rows)
    );

    block_t state_after_inv_sub_bytes;
    INVSUBBYTES isb (
        .state_in   (state_after_inv_shift_rows),
        .state_out  (state_after_inv_sub_bytes)
    );

    block_t state_after_addroundkey;
    ADDROUNDKEY ark (
        .state_in   (state_after_inv_sub_bytes),
        .round_key  (round_key),
        .state_out  (state_after_addroundkey)
    );

    block_t round_out;
    INVMIXCOLUMNS imc (
        .state_in   (state_after_addroundkey),
        .state_out  (round_out)
    );

    // Registered round output: each inverse round is one pipeline stage.
    always_ff @(posedge clk) begin
        if (rst) begin
            state_out <= '0;
        end else begin
            state_out <= round_out;
        end
    end

endmodule