import AES_PKG::*;
// KEY_EXPANSION_192_TI_TB - DOM-masked AES-192 key schedule, N = 2.  The key is
// split into 2 random shares; after the schedule settles the round-key shares are
// recombined and compared to the NIST reference (keyexp192_w.mem, validated vs
// FIPS-197 App. A).
module KEY_EXPANSION_192_TI_TB;
    `include "tb_check.svh"

    localparam int NR = 12, NW = 4*(NR+1), MAXK = 32, SETTLE = 140;

    logic clk = 0, rst = 1;
    always begin #5 clk = ~clk; end

    reg [191:0] key_m [0:MAXK-1];
    reg [31:0]  w_m   [0:MAXK*NW-1];
    reg [31:0]  nk_m  [0:0];

    localparam int N2 = 2;
    localparam int RTOT = 8*4*(N2*(N2-1)/2)*8;           // NSUB = 8 for AES-192
    logic [N2*192-1:0]        k2;
    logic [RTOT-1:0]          rn2;
    logic [N2*(NR+1)*128-1:0] rko2;
    KEY_EXPANSION_192_TI #(N2) e2 (.clk(clk), .rst(rst), .key(k2), .rnd(rn2), .round_keys(rko2));

    integer kk;
    always @(posedge clk) begin
        for (kk = 0; kk < RTOT/32; kk++) begin rn2[kk*32 +: 32] <= $random; end
    end

    function automatic byte_t rec2(input int r, input int c, input int b);
        rec2 = rko2[r*N2*128 + 0*128 + c*32 + b*8 +: 8] ^ rko2[r*N2*128 + 1*128 + c*32 + b*8 +: 8];
    endfunction

    integer i, r, c, b, nkey;
    logic [191:0] kv, mask;
    initial begin
        $readmemh("keyexp192_key.mem", key_m);
        $readmemh("keyexp192_w.mem",   w_m);
        $readmemh("keyexp_nkey.mem",   nk_m);
        nkey = nk_m[0];
        repeat (2) begin @(posedge clk); end rst = 0; @(posedge clk);

        i = 0;
        while (i < nkey) begin
            kv   = key_m[i];
            mask = {$random, $random, $random, $random, $random, $random};
            k2[0 +: 192] = kv ^ mask;  k2[192 +: 192] = mask;
            repeat (SETTLE) begin @(posedge clk); end #1;
            for (r = 0; r <= NR; r = r + 1) begin
                for (c = 0; c < 4; c = c + 1) begin
                    for (b = 0; b < 4; b = b + 1) begin
                        `CHK_EQ("rk192 N2", rec2(r,c,b), w_m[i*NW + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i = i + 1;
        end
        `CHK("read keys", i > 0);
        `TB_SUMMARY("KEY_EXPANSION_192_TI_TB");
    end
endmodule
