import AES_PKG::*;
import AES_TI_PKG::*;
// KEY_EXPANSION_TI_TB - keysize-agnostic masked key-schedule distributor, N = 2.
// One shared key is expanded three ways; per size the recombined round-key shares
// are compared to the NIST reference (keyexp*_w.mem).  Exercises the 3-output
// distribution + AND'd key_ready via one handshake, fresh randomness every cycle.
module KEY_EXPANSION_TI_TB;
    `include "tb_check.svh"

    localparam int N    = 2;
    localparam int RTOT = (10+8+13)*4*sbox_rand_words(N)*8;
    localparam int MAXK = 32;

    logic clk = 0;
    logic rst = 1;
    logic kvld = 0;
    logic kr;
    always #5 clk = ~clk;

    logic [N*256-1:0]    key = '0;
    logic [RTOT-1:0]     rn  = '0;
    logic [N*11*128-1:0] rk128;
    logic [N*13*128-1:0] rk192;
    logic [N*15*128-1:0] rk256;
    KEY_EXPANSION_TI #(N) dut (
        .clk            (clk  ),
        .rst            (rst  ),
        .key_valid      (kvld ),
        .key            (key  ),
        .rnd            (rn   ),
        .key_ready      (kr   ),
        .round_keys_128 (rk128),
        .round_keys_192 (rk192),
        .round_keys_256 (rk256)
    );

    integer kk;
    always @(posedge clk) begin
        for (kk = 0; kk < RTOT/32; kk++) begin
            rn[kk*32 +: 32] <= $random;
        end
    end

    function automatic logic [127:0] r128;
        r128 = {$random, $random, $random, $random};
    endfunction

    function automatic byte_t rec128(input int r, input int c, input int b);
        rec128 = rk128[r*N*128 + 0*128 + c*32 + b*8 +: 8] ^ rk128[r*N*128 + 1*128 + c*32 + b*8 +: 8];
    endfunction
    function automatic byte_t rec192(input int r, input int c, input int b);
        rec192 = rk192[r*N*128 + 0*128 + c*32 + b*8 +: 8] ^ rk192[r*N*128 + 1*128 + c*32 + b*8 +: 8];
    endfunction
    function automatic byte_t rec256(input int r, input int c, input int b);
        rec256 = rk256[r*N*128 + 0*128 + c*32 + b*8 +: 8] ^ rk256[r*N*128 + 1*128 + c*32 + b*8 +: 8];
    endfunction

    reg [255:0] key_m [0:MAXK-1];
    reg [31:0]  w_m   [0:MAXK*60-1];
    reg [31:0]  nk_m  [0:0];
    integer i;
    integer r;
    integer c;
    integer b;
    integer nkey;
    logic [255:0] mk;

    task automatic loadkey(input logic [255:0] kval);
        mk = {r128(), r128()};
        key[0 +: 256]   = kval ^ mk;
        key[256 +: 256] = mk;
        kvld = 1;
        @(posedge clk); #1;
        kvld = 0;
        while (!kr) begin
            @(posedge clk); #1;
        end
    endtask

    initial begin
        $readmemh("keyexp_nkey.mem", nk_m);
        nkey = nk_m[0];
        repeat (2) @(posedge clk); #1;
        rst = 0;
        // AES-128
        $readmemh("keyexp128_key.mem", key_m);
        $readmemh("keyexp128_w.mem", w_m);
        for (i = 0; i < nkey; i++) begin
            loadkey(key_m[i]);
            for (r = 0; r <= 10; r++) begin
                for (c = 0; c < 4; c++) begin
                    for (b = 0; b < 4; b++) begin
                        `CHK_EQ("rk128", rec128(r, c, b), w_m[i*44 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
        end
        // AES-192
        $readmemh("keyexp192_key.mem", key_m);
        $readmemh("keyexp192_w.mem", w_m);
        for (i = 0; i < nkey; i++) begin
            loadkey(key_m[i]);
            for (r = 0; r <= 12; r++) begin
                for (c = 0; c < 4; c++) begin
                    for (b = 0; b < 4; b++) begin
                        `CHK_EQ("rk192", rec192(r, c, b), w_m[i*52 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
        end
        // AES-256
        $readmemh("keyexp256_key.mem", key_m);
        $readmemh("keyexp256_w.mem", w_m);
        for (i = 0; i < nkey; i++) begin
            loadkey(key_m[i]);
            for (r = 0; r <= 14; r++) begin
                for (c = 0; c < 4; c++) begin
                    for (b = 0; b < 4; b++) begin
                        `CHK_EQ("rk256", rec256(r, c, b), w_m[i*60 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
        end
        `CHK("read keys", nkey > 0);
        `TB_SUMMARY("KEY_EXPANSION_TI_TB");
    end
endmodule
