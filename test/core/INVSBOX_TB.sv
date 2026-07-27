import AES_PKG::*;
// INVSBOX_TB - exhaustive check of the inverse S-box against the NIST table,
// plus S(S^-1(y)) == y over all bytes.
module INVSBOX_TB;
    `include "tb_check.svh"

    byte_t y, inv_out, fwd_out;
    reg [7:0] nist_invsbox [0:255];

    INVSBOX dut (.sbox_in(y),        .sbox_out(inv_out));
    SBOX    fwd (.sbox_in(inv_out),  .sbox_out(fwd_out));  // S(S^-1(y))

    integer x;
    initial begin
        $readmemh("invsbox.mem", nist_invsbox);
        for (x = 0; x < 256; x = x + 1) begin
            y = x[7:0];
            #1;
            `CHK_EQ("Sinv(y)", inv_out, nist_invsbox[x]);
            `CHK_EQ("S(Sinv(y))==y", fwd_out, y);
        end
        `TB_SUMMARY("INVSBOX_TB");
    end
endmodule
