import AES_PKG::*;
// FINITE_MULTIPLICATION_TB - GF(2^8) constant multipliers vs FIPS-197 section 4.2
// values.  The multiply-by-2 (xtime) chain 57->ae->47->8e and the reduction
// 80->1b are the published FIPS-197 examples; the 9/11/13/14 products for {57}
// follow from that same xtime chain (57*9=57*8^57, etc.).
module FINITE_MULTIPLICATION_TB;
    `include "tb_check.svh"

    byte_t a;
    byte_t o2, o3, o4, o8, o9, o11, o13, o14;

    MUL_2  m2  (.data_in(a), .data_out(o2));
    MUL_3  m3  (.data_in(a), .data_out(o3));
    MUL_4  m4  (.data_in(a), .data_out(o4));
    MUL_8  m8  (.data_in(a), .data_out(o8));
    MUL_9  m9  (.data_in(a), .data_out(o9));
    MUL_11 m11 (.data_in(a), .data_out(o11));
    MUL_13 m13 (.data_in(a), .data_out(o13));
    MUL_14 m14 (.data_in(a), .data_out(o14));

    initial begin
        a = 8'h57; #1;
        `CHK_EQ("57*2",  o2,  8'hae);
        `CHK_EQ("57*3",  o3,  8'hf9);
        `CHK_EQ("57*4",  o4,  8'h47);
        `CHK_EQ("57*8",  o8,  8'h8e);
        `CHK_EQ("57*9",  o9,  8'hd9);
        `CHK_EQ("57*11", o11, 8'h77);
        `CHK_EQ("57*13", o13, 8'h9e);
        `CHK_EQ("57*14", o14, 8'h67);

        // FIPS-197 4.2.1 xtime chain and reduction
        a = 8'hae; #1; `CHK_EQ("ae*2", o2, 8'h47);
        a = 8'h47; #1; `CHK_EQ("47*2", o2, 8'h8e);
        a = 8'h80; #1; `CHK_EQ("80*2 (reduce)", o2, 8'h1b);

        // zero maps to zero for all
        a = 8'h00; #1;
        `CHK_EQ("0*2", o2, 8'h00); `CHK_EQ("0*3", o3, 8'h00);
        `CHK_EQ("0*14", o14, 8'h00); `CHK_EQ("0*9", o9, 8'h00);

        `TB_SUMMARY("FINITE_MULTIPLICATION_TB");
    end
endmodule
