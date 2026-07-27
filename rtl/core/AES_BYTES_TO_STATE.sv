import AES_PKG::*;
// AES_BYTES_TO_STATE - map 16 input bytes to the AES state, column-major (b0 -> [0][0]).
module AES_BYTES_TO_STATE (
    input  byte_t [15:0] bytes_in,
    output state_t       state_out
);
    genvar col;
    genvar row;
    generate
        for (col = 0; col < 4; col++) begin
            for (row = 0; row < 4; row++) begin
                assign state_out[col][row] = bytes_in[15 - (col*4 + row)];
            end
        end
    endgenerate
endmodule
