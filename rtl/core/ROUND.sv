import AES_PKG::*;
module ROUND (
    input  logic        clk,
    input  logic        rst,
    input  block_t      round_key, 
    input  block_t      state_in, 
    output block_t      state_out
);
    
    block_t state_after_subbytes;
    SUBBYTES sb (
        .state_in   (state_in), 
        .state_out  (state_after_subbytes)
    );
    
    block_t state_after_shift_rows;
    SHIFTROWS sr (
        .state_in   (state_after_subbytes), 
        .state_out  (state_after_shift_rows)
    );

    block_t state_after_mix_columns;
    MIXCOLUMNS mc (
        .state_in   (state_after_shift_rows),
        .state_out  (state_after_mix_columns)
    );
    
    block_t round_out;
    ADDROUNDKEY ark (
        .state_in   (state_after_mix_columns),
        .round_key  (round_key),
        .state_out  (round_out)
    );

    // Registered round output: each round is one pipeline stage (uses clk/rst).
    always_ff @(posedge clk) begin
        if (rst) begin
            state_out <= '0;
        end else begin
            state_out <= round_out;
        end
    end

endmodule
