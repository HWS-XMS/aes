import AES_PKG::*;
// KEY_EXPANSION_256_TB - full AES-256 key schedule vs the NIST reference.
module KEY_EXPANSION_256_TB;
    `include "tb_check.svh"

    localparam int NR = 14;
    localparam int NW = 4*(NR+1);
    localparam int MAXK = 64;

    byte_t [31:0] key;
    roundkey_t [NR:0] round_keys;
    KEY_EXPANSION_256 dut (.key(key), .round_keys(round_keys));

    logic [(NR+1)*128-1:0] rk_flat;
    assign rk_flat = round_keys;

    reg [255:0] key_m [0:MAXK-1];
    reg [31:0]  w_m   [0:MAXK*NW-1];
    integer i, r, c, b;

    initial begin
        $readmemh("keyexp256_key.mem", key_m);
        $readmemh("keyexp256_w.mem",   w_m);
        i = 0;
        while (i < MAXK && (^key_m[i] !== 1'bx)) begin
            key = key_m[i]; #1;
            for (r = 0; r <= NR; r = r + 1) begin
                for (c = 0; c < 4; c = c + 1) begin
                    for (b = 0; b < 4; b = b + 1) begin
                        `CHK_EQ("rk byte", rk_flat[r*128 + c*32 + b*8 +: 8],
                                            w_m[i*NW + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i = i + 1;
        end
        `CHK("read keys", i > 0);
        `TB_SUMMARY("KEY_EXPANSION_256_TB");
    end
endmodule
