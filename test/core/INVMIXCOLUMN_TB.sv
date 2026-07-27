import AES_PKG::*;
// INVMIXCOLUMN_TB - FIPS-197 round-1 column 0 (reversed: 04 66 81 e5 -> d4 bf 5d 30),
// plus MixColumn(InvMixColumn(c)) == c over random columns.
module INVMIXCOLUMN_TB;
    `include "tb_check.svh"

    column_t ci;
    column_t co;
    column_t rt;

    INVMIXCOLUMN dut (
        .col_in  (ci),
        .col_out (co)
    );
    MIXCOLUMN fwd (
        .col_in  (co),
        .col_out (rt)
    );

    integer t;
    initial begin
        ci[0] = 8'h04;
        ci[1] = 8'h66;
        ci[2] = 8'h81;
        ci[3] = 8'he5;
        #1;
        `CHK_EQ("invmixcolumn fips c0.0", co[0], 8'hd4);
        `CHK_EQ("invmixcolumn fips c0.1", co[1], 8'hbf);
        `CHK_EQ("invmixcolumn fips c0.2", co[2], 8'h5d);
        `CHK_EQ("invmixcolumn fips c0.3", co[3], 8'h30);

        for (t = 0; t < 200; t++) begin
            ci[0] = $random;
            ci[1] = $random;
            ci[2] = $random;
            ci[3] = $random;
            #1;
            `CHK_EQ("invmixcolumn rt0", rt[0], ci[0]);
            `CHK_EQ("invmixcolumn rt1", rt[1], ci[1]);
            `CHK_EQ("invmixcolumn rt2", rt[2], ci[2]);
            `CHK_EQ("invmixcolumn rt3", rt[3], ci[3]);
        end
        `TB_SUMMARY("INVMIXCOLUMN_TB");
    end
endmodule
