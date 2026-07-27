import AES_PKG::*;
// MIXCOLUMN_TB - single-column MixColumn on FIPS-197 round-1 column 0
// (after ShiftRows col0 = d4 bf 5d 30 -> after MixColumns col0 = 04 66 81 e5),
// plus InvMixColumn(MixColumn(c)) == c over random columns.
module MIXCOLUMN_TB;
    `include "tb_check.svh"

    column_t ci, co, rt;

    MIXCOLUMN    dut (.col_in(ci), .col_out(co));
    INVMIXCOLUMN inv (.col_in(co), .col_out(rt));

    integer t;
    initial begin
        ci[0] = 8'hd4; ci[1] = 8'hbf; ci[2] = 8'h5d; ci[3] = 8'h30; #1;
        `CHK_EQ("mixcolumn fips c0.0", co[0], 8'h04);
        `CHK_EQ("mixcolumn fips c0.1", co[1], 8'h66);
        `CHK_EQ("mixcolumn fips c0.2", co[2], 8'h81);
        `CHK_EQ("mixcolumn fips c0.3", co[3], 8'he5);

        for (t = 0; t < 200; t = t + 1) begin
            ci[0] = $random; ci[1] = $random; ci[2] = $random; ci[3] = $random; #1;
            `CHK_EQ("mixcolumn rt0", rt[0], ci[0]);
            `CHK_EQ("mixcolumn rt1", rt[1], ci[1]);
            `CHK_EQ("mixcolumn rt2", rt[2], ci[2]);
            `CHK_EQ("mixcolumn rt3", rt[3], ci[3]);
        end
        `TB_SUMMARY("MIXCOLUMN_TB");
    end
endmodule
