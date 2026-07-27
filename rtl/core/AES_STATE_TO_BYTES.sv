import AES_PKG::*;
// AES_STATE_TO_BYTES - map the AES state to 16 output bytes, column-major ([0][0] -> b0).
module AES_STATE_TO_BYTES (
    input  state_t       state_in,
    output byte_t [15:0] bytes_out
);
    genvar col;
    genvar row;
    generate
        for (col = 0; col < 4; col++) begin
            for (row = 0; row < 4; row++) begin
                assign bytes_out[15 - (col*4 + row)] = state_in[col][row];
            end
        end
    endgenerate
endmodule
