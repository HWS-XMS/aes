import AES_PKG::*;
// AES_ENCRYPT_TB - drives the pipelined encryptor and checks every ciphertext
// against the OpenSSL reference vectors (test/ref/aes{128,192,256}_*.mem), which
// include the FIPS-197 known-answer anchors as the first entry.
module AES_ENCRYPT_TB;
    `include "tb_check.svh"

    localparam int MAXV = 256;

    logic clk = 0, rst = 1;
    logic [127:0] pt, exp;
    logic [255:0] key;
    logic iv128 = 0, iv192 = 0, iv256 = 0;
    logic ov128, ov192, ov256;
    logic [127:0] ct128, ct192, ct256;

    AES_ENCRYPT #(16) e128 (.clk(clk), .rst(rst), .in_valid(iv128),
        .plaintext(pt), .key(key[127:0]), .out_valid(ov128), .ciphertext(ct128));
    AES_ENCRYPT #(24) e192 (.clk(clk), .rst(rst), .in_valid(iv192),
        .plaintext(pt), .key(key[191:0]), .out_valid(ov192), .ciphertext(ct192));
    AES_ENCRYPT #(32) e256 (.clk(clk), .rst(rst), .in_valid(iv256),
        .plaintext(pt), .key(key[255:0]), .out_valid(ov256), .ciphertext(ct256));

    always #5 begin clk = ~clk; end

    reg [127:0] pt_m  [0:MAXV-1];
    reg [255:0] key_m [0:MAXV-1];
    reg [127:0] ct_m  [0:MAXV-1];
    integer i;

    initial begin
        repeat (2) begin @(posedge clk); end rst = 0; @(posedge clk);

        // ---- AES-128 (latency 10) ----
        $readmemh("aes128_pt.mem", pt_m);
        $readmemh("aes128_key.mem", key_m);
        $readmemh("aes128_ct.mem", ct_m);
        i = 0;
        while (i < MAXV && (^pt_m[i] !== 1'bx)) begin
            pt = pt_m[i]; key = key_m[i]; exp = ct_m[i];
            iv128 = 1; @(posedge clk); iv128 = 0; repeat (10) begin @(posedge clk); end #1;
            `CHK_EQ("enc128", ct128, exp);
            i = i + 1;
        end
        `CHK("enc128 read vectors", i > 0);

        // ---- AES-192 (latency 12) ----
        $readmemh("aes192_pt.mem", pt_m);
        $readmemh("aes192_key.mem", key_m);
        $readmemh("aes192_ct.mem", ct_m);
        i = 0;
        while (i < MAXV && (^pt_m[i] !== 1'bx)) begin
            pt = pt_m[i]; key = key_m[i]; exp = ct_m[i];
            iv192 = 1; @(posedge clk); iv192 = 0; repeat (12) begin @(posedge clk); end #1;
            `CHK_EQ("enc192", ct192, exp);
            i = i + 1;
        end

        // ---- AES-256 (latency 14) ----
        $readmemh("aes256_pt.mem", pt_m);
        $readmemh("aes256_key.mem", key_m);
        $readmemh("aes256_ct.mem", ct_m);
        i = 0;
        while (i < MAXV && (^pt_m[i] !== 1'bx)) begin
            pt = pt_m[i]; key = key_m[i]; exp = ct_m[i];
            iv256 = 1; @(posedge clk); iv256 = 0; repeat (14) begin @(posedge clk); end #1;
            `CHK_EQ("enc256", ct256, exp);
            i = i + 1;
        end

        `TB_SUMMARY("AES_ENCRYPT_TB");
    end
endmodule
