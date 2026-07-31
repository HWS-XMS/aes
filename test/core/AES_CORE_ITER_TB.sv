import AES_PKG::*;
// AES_CORE_ITER_TB - end-to-end test of the iterative keyed core across all three
// runtime sizes.  For every OpenSSL vector: update_key -> encrypt (check) -> decrypt
// (check), re-keying every vector; also checks key_loaded and that a strobe asserted
// while busy is ignored.  References are OpenSSL/NIST (test/ref/aes*_{pt,key,ct}.mem).
module AES_CORE_ITER_TB;
    `include "tb_check.svh"

    localparam int MAXV = 256;

    logic clk = 0;
    logic rst = 1;
    logic update_key = 0;
    logic encrypt = 0;
    logic decrypt = 0;
    logic [1:0] ksz = KS_128;
    byte_t [31:0] key_in = '0;
    byte_t [15:0] pt_in = '0;
    byte_t [15:0] ct_in = '0;
    logic ready;
    logic key_loaded;
    byte_t [15:0] data_out;

    AES_CORE_ITER dut (
        .clk        (clk       ),
        .rst        (rst       ),
        .update_key (update_key),
        .encrypt    (encrypt   ),
        .decrypt    (decrypt   ),
        .keysize    (ksz       ),
        .key        (key_in    ),
        .plaintext  (pt_in     ),
        .ciphertext (ct_in     ),
        .ready      (ready     ),
        .key_loaded (key_loaded),
        .data_out   (data_out  )
    );

    always #5 clk = ~clk;

    reg [127:0] pt_m  [0:MAXV-1];
    reg [255:0] key_m [0:MAXV-1];
    reg [127:0] ct_m  [0:MAXV-1];
    integer i;

    task automatic do_update(input logic [1:0] ks, input byte_t [31:0] k);
        @(posedge clk); #1;
        ksz        = ks;
        key_in     = k;
        update_key = 1;
        @(posedge clk); #1;
        update_key = 0;
        while (!ready) begin
            @(posedge clk); #1;
        end
    endtask

    task automatic do_encrypt(input byte_t [15:0] p);
        @(posedge clk); #1;
        pt_in   = p;
        encrypt = 1;
        @(posedge clk); #1;
        encrypt = 0;
        while (!ready) begin
            @(posedge clk); #1;
        end
    endtask

    task automatic do_decrypt(input byte_t [15:0] c);
        @(posedge clk); #1;
        ct_in   = c;
        decrypt = 1;
        @(posedge clk); #1;
        decrypt = 0;
        while (!ready) begin
            @(posedge clk); #1;
        end
    endtask

    task automatic run_size(input logic [1:0] ks, input string pf, input string kf, input string cf);
        $readmemh(pf, pt_m);
        $readmemh(kf, key_m);
        $readmemh(cf, ct_m);
        i = 0;
        while (i < MAXV && (^pt_m[i] !== 1'bx)) begin
            do_update(ks, key_m[i]);
            do_encrypt(pt_m[i]);
            `CHK_EQ("enc", data_out, ct_m[i]);
            do_decrypt(ct_m[i]);
            `CHK_EQ("dec", data_out, pt_m[i]);
            i++;
        end
        `CHK("read vectors", i > 0);
    endtask

    initial begin
        repeat (2) @(posedge clk); #1;
        rst = 0;
        @(posedge clk); #1;
        `CHK("key_loaded clear after reset", key_loaded == 1'b0);

        // strobe-while-busy: an encrypt asserted mid key-update is ignored
        $readmemh("aes128_pt.mem",  pt_m);
        $readmemh("aes128_key.mem", key_m);
        $readmemh("aes128_ct.mem",  ct_m);
        @(posedge clk); #1;
        ksz        = KS_128;
        key_in     = key_m[0];
        update_key = 1;
        @(posedge clk); #1;
        update_key = 0;
        encrypt    = 1;
        pt_in      = '0;
        @(posedge clk); #1;
        encrypt = 0;
        while (!ready) begin
            @(posedge clk); #1;
        end
        `CHK("key_loaded set after update", key_loaded == 1'b1);
        do_encrypt(pt_m[0]);
        `CHK_EQ("enc after ignored strobe", data_out, ct_m[0]);

        run_size(KS_128, "aes128_pt.mem", "aes128_key.mem", "aes128_ct.mem");
        run_size(KS_192, "aes192_pt.mem", "aes192_key.mem", "aes192_ct.mem");
        run_size(KS_256, "aes256_pt.mem", "aes256_key.mem", "aes256_ct.mem");

        `TB_SUMMARY("AES_CORE_ITER_TB");
    end
endmodule
