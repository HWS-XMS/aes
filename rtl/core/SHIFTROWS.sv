import AES_PKG::*;
module SHIFTROWS (
    input  block_t  state_in, 
    output block_t  state_out
);

    // Row 0: no shift
    assign state_out[0][0] = state_in[0][0];
    assign state_out[1][0] = state_in[1][0];
    assign state_out[2][0] = state_in[2][0];
    assign state_out[3][0] = state_in[3][0];
    
    // Row 1: shift left by 1
    assign state_out[0][1] = state_in[1][1];
    assign state_out[1][1] = state_in[2][1];
    assign state_out[2][1] = state_in[3][1];
    assign state_out[3][1] = state_in[0][1];
    
    // Row 2: shift left by 2
    assign state_out[0][2] = state_in[2][2];
    assign state_out[1][2] = state_in[3][2];
    assign state_out[2][2] = state_in[0][2];
    assign state_out[3][2] = state_in[1][2];
    
    // Row 3: shift left by 3
    assign state_out[0][3] = state_in[3][3];
    assign state_out[1][3] = state_in[0][3];
    assign state_out[2][3] = state_in[1][3];
    assign state_out[3][3] = state_in[2][3];

endmodule