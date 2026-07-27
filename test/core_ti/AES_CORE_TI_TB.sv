import AES_PKG::*;
import AES_TI_PKG::*;
// AES_CORE_TI_TB - end-to-end DOM-masked keyed core, N = 2, all three sizes.
// Drives the FSM (update_key/encrypt/decrypt, wait ready) with shared shares and
// fresh DOM randomness every cycle; recombined data_out vs OpenSSL.  Rekey is
// reset-free.
module AES_CORE_TI_TB;
    `include "tb_check.svh"

    localparam int N     = 2;
    localparam int RPERR = 16*sbox_rand_words(N)*8;
    localparam int RNDW  = 14*RPERR;
    localparam int KRTOT = 31*4*sbox_rand_words(N)*8;
    localparam int NV    = 8;

    logic clk = 0;
    logic rst = 1;
    logic update_key = 0;
    logic encrypt = 0;
    logic decrypt = 0;
    logic [1:0]       ksz     = KS_128;
    logic [N*256-1:0] key_in  = '0;
    logic [N*128-1:0] pt_in   = '0;
    logic [N*128-1:0] ct_in   = '0;
    logic [RNDW-1:0]  rnd     = '0;
    logic [KRTOT-1:0] key_rnd = '0;
    logic ready;
    logic key_loaded;
    logic [N*128-1:0] data_out;

    AES_CORE_TI #(N) dut (
        .clk        (clk       ),
        .rst        (rst       ),
        .update_key (update_key),
        .encrypt    (encrypt   ),
        .decrypt    (decrypt   ),
        .keysize    (ksz       ),
        .key        (key_in    ),
        .plaintext  (pt_in     ),
        .ciphertext (ct_in     ),
        .rnd        (rnd       ),
        .key_rnd    (key_rnd   ),
        .ready      (ready     ),
        .key_loaded (key_loaded),
        .data_out   (data_out  )
    );

    always #5 clk = ~clk;

    integer kk;
    always @(posedge clk) begin
        for (kk = 0; kk < RNDW/32; kk++) begin
            rnd[kk*32 +: 32] <= $random;
        end
        for (kk = 0; kk < KRTOT/32; kk++) begin
            key_rnd[kk*32 +: 32] <= $random;
        end
    end

    logic [127:0] rec;
    assign rec = data_out[0 +: 128] ^ data_out[128 +: 128];

    function automatic logic [127:0] rnd128;
        rnd128 = {$random, $random, $random, $random};
    endfunction

    task automatic do_update(input logic [1:0] ks, input logic [255:0] kval);
        logic [255:0] m;
        @(posedge clk); #1;
        ksz = ks;
        m   = {rnd128(), rnd128()};
        key_in[0 +: 256]   = kval ^ m;
        key_in[256 +: 256] = m;
        update_key = 1;
        @(posedge clk); #1;
        update_key = 0;
        while (!ready) begin
            @(posedge clk); #1;
        end
    endtask

    task automatic do_encrypt(input logic [127:0] p);
        logic [127:0] m;
        @(posedge clk); #1;
        m = rnd128();
        pt_in[0 +: 128]   = p ^ m;
        pt_in[128 +: 128] = m;
        encrypt = 1;
        @(posedge clk); #1;
        encrypt = 0;
        while (!ready) begin
            @(posedge clk); #1;
        end
    endtask

    task automatic do_decrypt(input logic [127:0] c);
        logic [127:0] m;
        @(posedge clk); #1;
        m = rnd128();
        ct_in[0 +: 128]   = c ^ m;
        ct_in[128 +: 128] = m;
        decrypt = 1;
        @(posedge clk); #1;
        decrypt = 0;
        while (!ready) begin
            @(posedge clk); #1;
        end
    endtask

    reg [127:0] pt_m  [0:63];
    reg [127:0] ct_m  [0:63];
    reg [255:0] key_m [0:63];
    integer i;

    task automatic run_size(input logic [1:0] ks,
                            input string pf, input string kf, input string cf);
        $readmemh(pf, pt_m);
        $readmemh(kf, key_m);
        $readmemh(cf, ct_m);
        for (i = 0; i < NV; i++) begin
            do_update(ks, key_m[i]);
            do_encrypt(pt_m[i]);
            `CHK_EQ("enc", rec, ct_m[i]);
            do_decrypt(ct_m[i]);
            `CHK_EQ("dec", rec, pt_m[i]);
        end
    endtask

    initial begin
        repeat (2) @(posedge clk); #1;
        rst = 0;
        @(posedge clk); #1;
        `CHK("key_loaded clear", key_loaded == 1'b0);
        run_size(KS_128, "aes128_pt.mem", "aes128_key.mem", "aes128_ct.mem");
        run_size(KS_192, "aes192_pt.mem", "aes192_key.mem", "aes192_ct.mem");
        run_size(KS_256, "aes256_pt.mem", "aes256_key.mem", "aes256_ct.mem");
        `CHK("key_loaded set", key_loaded == 1'b1);
        `TB_SUMMARY("AES_CORE_TI_TB");
    end
endmodule
