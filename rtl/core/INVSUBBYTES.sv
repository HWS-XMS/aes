import AES_PKG::*;
module INVSUBBYTES (
    input  block_t  state_in, 
    output block_t  state_out
);
    generate 
        genvar col;
        genvar row;
        for (col=0; col<4; col++) begin
            for (row=0; row<4; row++) begin
                INVSBOX invsbox_row_col (
                    .sbox_in    (state_in [col][row]),
                    .sbox_out   (state_out[col][row])
                );
            end
        end
    endgenerate  
endmodule