import AES_PKG::*;

// AES Bytes to State Conversion
// Converts 16 bytes to AES state in column-major order
//
// Input bytes b0,b1,...,b15 are mapped to state as:
//   state[0][0] = b0,  state[0][1] = b1,  state[0][2] = b2,  state[0][3] = b3
//   state[1][0] = b4,  state[1][1] = b5,  state[1][2] = b6,  state[1][3] = b7
//   state[2][0] = b8,  state[2][1] = b9,  state[2][2] = b10, state[2][3] = b11
//   state[3][0] = b12, state[3][1] = b13, state[3][2] = b14, state[3][3] = b15

module AES_BYTES_TO_STATE (
    input  byte_t [15:0] bytes_in,
    output state_t       state_out
);
    // Direct mapping following AES specification
    genvar col, row;
    generate
        for (col = 0; col < 4; col++) begin : gen_col
            for (row = 0; row < 4; row++) begin : gen_row
                assign state_out[col][row] = bytes_in[15 - (col*4 + row)];
            end
        end
    endgenerate
    
endmodule
