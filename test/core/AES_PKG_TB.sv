import AES_PKG::*;
// AES_PKG_TB - checks the AES_PKG helper functions (Nk and Nr per key size)
// against the FIPS-197 definitions.
module AES_PKG_TB;
    `include "tb_check.svh"

    initial begin
        `CHK_EQ("Nk(128)", calc_Nk(KEYSIZE_AES_128), 4);
        `CHK_EQ("Nk(192)", calc_Nk(KEYSIZE_AES_192), 6);
        `CHK_EQ("Nk(256)", calc_Nk(KEYSIZE_AES_256), 8);
        `CHK_EQ("Nr(128)", calc_Nr(KEYSIZE_AES_128), 10);
        `CHK_EQ("Nr(192)", calc_Nr(KEYSIZE_AES_192), 12);
        `CHK_EQ("Nr(256)", calc_Nr(KEYSIZE_AES_256), 14);
        `TB_SUMMARY("AES_PKG_TB");
    end
endmodule
