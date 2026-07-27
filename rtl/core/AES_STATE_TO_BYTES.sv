import AES_PKG::*;
// AES State to Bytes Conversion
// Converts AES state to 16 bytes in column-major order
//
// State is mapped to output bytes as:
//   bytes[0] = state[0][0], bytes[1] = state[0][1], bytes[2] = state[0][2], bytes[3] = state[0][3]
//   bytes[4] = state[1][0], bytes[5] = state[1][1], bytes[6] = state[1][2], bytes[7] = state[1][3]
//   bytes[8] = state[2][0], bytes[9] = state[2][1], bytes[10] = state[2][2], bytes[11] = state[2][3]
//   bytes[12] = state[3][0], bytes[13] = state[3][1], bytes[14] = state[3][2], bytes[15] = state[3][3]

module AES_STATE_TO_BYTES (
    input  state_t       state_in,
    output byte_t [15:0] bytes_out
);
    
    // Direct mapping following AES specification
    genvar col, row;
    generate
        for (col = 0; col < 4; col++) begin : gen_col
            for (row = 0; row < 4; row++) begin : gen_row
                assign bytes_out[15 - (col*4 + row)] = state_in[col][row];
            end
        end
    endgenerate
    
endmodule