import AES_PKG::*;
import AES_MASKED_PKG::*;
// AES_MASKED_PKG_TB - masked-domain GF math (mirror of AES_PKG_TB).  gf_mul8 anchored to
// FIPS-197; gf_sq vs x*x; the affine transforms reconstruct the NIST S-box / inverse
// S-box for all 256 bytes; randomness accounting checked.  Pure functions, no clock.
module AES_MASKED_PKG_TB;
    `include "tb_check.svh"

    function automatic byte_t gf_inv(input byte_t x);
        byte_t x2;
        byte_t x3;
        byte_t x12;
        byte_t x15;
        byte_t x240;
        byte_t x252;
        x2   = gf_sq(x);
        x3   = gf_mul8(x2, x);
        x12  = gf_sq(gf_sq(x3));
        x15  = gf_mul8(x12, x3);
        x240 = gf_sq(gf_sq(gf_sq(gf_sq(x15))));
        x252 = gf_mul8(x240, x12);
        gf_inv = gf_mul8(x252, x2);
    endfunction

    reg [7:0] sbox_m    [0:255];
    reg [7:0] invsbox_m [0:255];
    integer x;
    initial begin
        $readmemh("sbox.mem",    sbox_m);
        $readmemh("invsbox.mem", invsbox_m);

        `CHK_EQ("gf 57*02", gf_mul8(8'h57, 8'h02), 8'hae);
        `CHK_EQ("gf 57*13", gf_mul8(8'h57, 8'h13), 8'hfe);
        `CHK_EQ("gf 00*ab", gf_mul8(8'h00, 8'hab), 8'h00);
        `CHK_EQ("gf 01*ab", gf_mul8(8'h01, 8'hab), 8'hab);

        for (x = 0; x < 256; x++) begin
            `CHK_EQ("gf_sq==x*x", gf_sq(x[7:0]), gf_mul8(x[7:0], x[7:0]));
            if (x != 0) begin
                `CHK_EQ("x*inv==1", gf_mul8(x[7:0], gf_inv(x[7:0])), 8'h01);
            end
            `CHK_EQ("sbox reconstruct", aes_affine_lin(gf_inv(x[7:0])) ^ AES_AFFINE_CONST, sbox_m[x]);
            `CHK_EQ("invsbox reconstruct", gf_inv(aes_inv_affine_lin(x[7:0]) ^ AES_INV_AFFINE_CONST), invsbox_m[x]);
        end

        `CHK_EQ("dom_rand_words(2)",  dom_rand_words(2),  1);
        `CHK_EQ("dom_rand_words(3)",  dom_rand_words(3),  3);
        `CHK_EQ("dom_rand_words(4)",  dom_rand_words(4),  6);
        `CHK_EQ("ref_rand_words(2)",  ref_rand_words(2),  1);
        `CHK_EQ("ref_rand_words(3)",  ref_rand_words(3),  2);
        `CHK_EQ("ref_rand_words(4)",  ref_rand_words(4),  4);
        `CHK_EQ("hpc1_rand_words(2)", hpc1_rand_words(2), 2);
        `CHK_EQ("sbox_rand_words(2)", sbox_rand_words(2), 8);

        `TB_SUMMARY("AES_MASKED_PKG_TB");
    end
endmodule
