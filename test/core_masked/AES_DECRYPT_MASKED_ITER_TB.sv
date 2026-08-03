import AES_PKG::*;
import AES_MASKED_PKG::*;
// AES_DECRYPT_MASKED_ITER_TB - iterative DOM-masked decrypt datapath, N = 2, all sizes.
// Round-key shares from KEY_EXPANSION_MASKED (key_rnd = 0 -> stable) muxed by size;
// datapath runs rnd = 0.  Recombined plaintext vs OpenSSL.
module AES_DECRYPT_MASKED_ITER_TB;
    `include "tb_check.svh"

    localparam int N     = 2;
    localparam int RPERR = 16*sbox_rand_words(N)*8;
    localparam int KRTOT = 31*4*sbox_rand_words(N)*8;
    localparam int NV    = 8;

    logic clk = 0;
    logic rst = 1;
    logic kvld = 0;
    logic kr;
    logic [1:0]          ksz     = KS_128;
    logic [N*256-1:0]    key_in  = '0;
    logic [KRTOT-1:0]    key_rnd = '0;
    logic [N*11*128-1:0] rk128;
    logic [N*13*128-1:0] rk192;
    logic [N*15*128-1:0] rk256;

    KEY_EXPANSION_MASKED #(N) ke (
        .clk            (clk    ),
        .rst            (rst    ),
        .key_valid      (kvld   ),
        .key            (key_in ),
        .rnd            (key_rnd),
        .key_ready      (kr     ),
        .round_keys_128 (rk128  ),
        .round_keys_192 (rk192  ),
        .round_keys_256 (rk256  )
    );

    logic [N*15*128-1:0] round_keys;
    integer rr;
    always_comb begin
        round_keys = '0;
        case (ksz)
            KS_128: begin
                for (rr = 0; rr <= 10; rr++) begin
                    round_keys[rr*N*128 +: N*128] = rk128[rr*N*128 +: N*128];
                end
            end
            KS_192: begin
                for (rr = 0; rr <= 12; rr++) begin
                    round_keys[rr*N*128 +: N*128] = rk192[rr*N*128 +: N*128];
                end
            end
            default: round_keys = rk256;
        endcase
    end

    logic iv = 0;
    logic ov;
    logic [N*128-1:0] si = '0;
    logic [N*128-1:0] so;
    logic [RPERR-1:0] rnd = '0;
    AES_DECRYPT_MASKED_ITER #(N) dut (
        .clk        (clk       ),
        .rst        (rst       ),
        .in_valid   (iv        ),
        .keysize    (ksz       ),
        .state_in   (si        ),
        .round_keys (round_keys),
        .rnd        (rnd       ),
        .out_valid  (ov        ),
        .state_out  (so        )
    );

    always #5 clk = ~clk;

    logic [127:0] rec;
    assign rec = so[0 +: 128] ^ so[128 +: 128];

    function automatic logic [127:0] rnd128;
        rnd128 = {$random, $random, $random, $random};
    endfunction

    reg [127:0] pt_m  [0:63];
    reg [127:0] ct_m  [0:63];
    reg [255:0] key_m [0:63];
    integer i;
    logic [255:0] mk;
    logic [127:0] m;

    task automatic run_size(input logic [1:0] ks,
                            input string pf, input string kf, input string cf);
        $readmemh(pf, pt_m);
        $readmemh(kf, key_m);
        $readmemh(cf, ct_m);
        for (i = 0; i < NV; i++) begin
            @(posedge clk); #1;
            ksz = ks;
            mk  = {rnd128(), rnd128()};
            key_in[0 +: 256]   = key_m[i] ^ mk;
            key_in[256 +: 256] = mk;
            kvld = 1;
            @(posedge clk); #1;
            kvld = 0;
            while (!kr) begin
                @(posedge clk); #1;
            end
            @(posedge clk); #1;
            m = rnd128();
            si[0 +: 128]   = ct_m[i] ^ m;
            si[128 +: 128] = m;
            iv = 1;
            @(posedge clk); #1;
            iv = 0;
            while (!ov) begin
                @(posedge clk); #1;
            end
            `CHK_EQ("dec", rec, pt_m[i]);
        end
    endtask

    initial begin
        repeat (2) @(posedge clk); #1;
        rst = 0;
        run_size(KS_128, "aes128_pt.mem", "aes128_key.mem", "aes128_ct.mem");
        run_size(KS_192, "aes192_pt.mem", "aes192_key.mem", "aes192_ct.mem");
        run_size(KS_256, "aes256_pt.mem", "aes256_key.mem", "aes256_ct.mem");
        `CHK("done", 1);
        `TB_SUMMARY("AES_DECRYPT_MASKED_ITER_TB");
    end
endmodule
