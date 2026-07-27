import AES_PKG::*;
import AES_MASKED_PKG::*;
// KEY_EXPANSION_128_MASKED_TB - DOM-masked AES-128 key schedule, N = 2 and 3 shares.
// key_valid/key_ready handshake; recombined round-key shares vs NIST reference
// (test/ref/keyexp128_w.mem, validated vs FIPS-197 App. A).  Rekey is reset-free.
module KEY_EXPANSION_128_MASKED_TB;
    `include "tb_check.svh"

    localparam int NR   = 10;
    localparam int NW   = 4*(NR+1);
    localparam int MAXK = 32;

    logic clk = 0;
    logic rst = 1;
    logic kvld = 0;
    logic kr2;
    logic kr3;
    always #5 clk = ~clk;

    reg [127:0] key_m [0:MAXK-1];
    reg [31:0]  w_m   [0:MAXK*NW-1];

    localparam int N2  = 2;
    localparam int RT2 = NR*4*sbox_rand_words(N2)*8;
    logic [N2*128-1:0]        k2;
    logic [RT2-1:0]           rn2;
    logic [N2*(NR+1)*128-1:0] rko2;
    KEY_EXPANSION_128_MASKED #(N2) e2 (
        .clk        (clk ),
        .rst        (rst ),
        .key_valid  (kvld),
        .key        (k2  ),
        .rnd        (rn2 ),
        .key_ready  (kr2 ),
        .round_keys (rko2)
    );

    localparam int N3  = 3;
    localparam int RT3 = NR*4*sbox_rand_words(N3)*8;
    logic [N3*128-1:0]        k3;
    logic [RT3-1:0]           rn3;
    logic [N3*(NR+1)*128-1:0] rko3;
    KEY_EXPANSION_128_MASKED #(N3) e3 (
        .clk        (clk ),
        .rst        (rst ),
        .key_valid  (kvld),
        .key        (k3  ),
        .rnd        (rn3 ),
        .key_ready  (kr3 ),
        .round_keys (rko3)
    );

    integer kk;
    always @(posedge clk) begin
        for (kk = 0; kk < RT2/32; kk++) begin
            rn2[kk*32 +: 32] <= $random;
        end
        for (kk = 0; kk < RT3/32; kk++) begin
            rn3[kk*32 +: 32] <= $random;
        end
    end

    function automatic logic [127:0] rnd128;
        rnd128 = {$random, $random, $random, $random};
    endfunction

    function automatic byte_t rec2(input int r, input int c, input int b);
        rec2 = rko2[r*N2*128 + 0*128 + c*32 + b*8 +: 8] ^ rko2[r*N2*128 + 1*128 + c*32 + b*8 +: 8];
    endfunction
    function automatic byte_t rec3(input int r, input int c, input int b);
        rec3 = rko3[r*N3*128 + 0*128 + c*32 + b*8 +: 8] ^ rko3[r*N3*128 + 1*128 + c*32 + b*8 +: 8] ^ rko3[r*N3*128 + 2*128 + c*32 + b*8 +: 8];
    endfunction

    integer i;
    integer r;
    integer c;
    integer b;
    integer nkey;
    reg [31:0] nk_m [0:0];
    logic [127:0] a1;
    logic [127:0] a2;
    logic [127:0] kv;
    initial begin
        $readmemh("keyexp128_key.mem", key_m);
        $readmemh("keyexp128_w.mem",   w_m);
        $readmemh("keyexp_nkey.mem",   nk_m);
        nkey = nk_m[0];
        repeat (2) @(posedge clk); #1;
        rst = 0;
        i = 0;
        while (i < nkey) begin
            kv = key_m[i];
            a1 = rnd128();
            k2[0 +: 128]   = kv ^ a1;
            k2[128 +: 128] = a1;
            a1 = rnd128();
            a2 = rnd128();
            k3[0 +: 128]   = kv ^ a1 ^ a2;
            k3[128 +: 128] = a1;
            k3[256 +: 128] = a2;
            kvld = 1;
            @(posedge clk); #1;
            kvld = 0;
            while (!kr2) begin
                @(posedge clk); #1;
            end
            #1;
            for (r = 0; r <= NR; r++) begin
                for (c = 0; c < 4; c++) begin
                    for (b = 0; b < 4; b++) begin
                        `CHK_EQ("rk128 N2", rec2(r, c, b), w_m[i*NW + 4*r+c][31-8*b -: 8]);
                        `CHK_EQ("rk128 N3", rec3(r, c, b), w_m[i*NW + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i++;
        end
        `CHK("read keys", i > 0);
        `TB_SUMMARY("KEY_EXPANSION_128_MASKED_TB");
    end
endmodule
