import AES_PKG::*;
// SBOX_TB - exhaustive check of the AES S-box against the NIST FIPS-197 table.
module SBOX_TB;
    `include "tb_check.svh"

    byte_t sbox_in, sbox_out;
    reg [7:0] nist_sbox [0:255];   // NIST FIPS-197 S-box (Fig. 7), loaded from sbox.mem

    SBOX dut (.sbox_in(sbox_in), .sbox_out(sbox_out));

    integer x;
    initial begin
        $readmemh("sbox.mem", nist_sbox);
        for (x = 0; x < 256; x = x + 1) begin
            sbox_in = x[7:0];
            #1;
            `CHK_EQ("S-box(x)", sbox_out, nist_sbox[x]);
        end
        `TB_SUMMARY("SBOX_TB");
    end
endmodule
