import AES_PKG::*;
// AES_DECRYPT_TB - drives the pipelined decryptor with the OpenSSL reference
// ciphertexts and checks the recovered plaintext (all three key sizes).
module AES_DECRYPT_TB;
    `include "tb_check.svh"

    localparam int MAXV = 256;

    logic clk = 0, rst = 1;
    logic [127:0] exp_pt, ct;
    logic [255:0] key;
    logic iv128 = 0, iv192 = 0, iv256 = 0;
    logic ov128, ov192, ov256;
    logic [127:0] pt128, pt192, pt256;

    AES_DECRYPT #(16) d128 (.clk(clk), .rst(rst), .in_valid(iv128),
        .ciphertext(ct), .key(key[127:0]), .out_valid(ov128), .plaintext(pt128));
    AES_DECRYPT #(24) d192 (.clk(clk), .rst(rst), .in_valid(iv192),
        .ciphertext(ct), .key(key[191:0]), .out_valid(ov192), .plaintext(pt192));
    AES_DECRYPT #(32) d256 (.clk(clk), .rst(rst), .in_valid(iv256),
        .ciphertext(ct), .key(key[255:0]), .out_valid(ov256), .plaintext(pt256));

    always #5 begin clk = ~clk; end

    reg [127:0] pt_m  [0:MAXV-1];
    reg [255:0] key_m [0:MAXV-1];
    reg [127:0] ct_m  [0:MAXV-1];
    integer i;

    initial begin
        repeat (2) begin @(posedge clk); end rst = 0; @(posedge clk);

        $readmemh("aes128_pt.mem", pt_m);
        $readmemh("aes128_key.mem", key_m);
        $readmemh("aes128_ct.mem", ct_m);
        i = 0;
        while (i < MAXV && (^ct_m[i] !== 1'bx)) begin
            ct = ct_m[i]; key = key_m[i]; exp_pt = pt_m[i];
            iv128 = 1; @(posedge clk); iv128 = 0; repeat (10) begin @(posedge clk); end #1;
            `CHK_EQ("dec128", pt128, exp_pt);
            i = i + 1;
        end
        `CHK("dec128 read vectors", i > 0);

        $readmemh("aes192_pt.mem", pt_m);
        $readmemh("aes192_key.mem", key_m);
        $readmemh("aes192_ct.mem", ct_m);
        i = 0;
        while (i < MAXV && (^ct_m[i] !== 1'bx)) begin
            ct = ct_m[i]; key = key_m[i]; exp_pt = pt_m[i];
            iv192 = 1; @(posedge clk); iv192 = 0; repeat (12) begin @(posedge clk); end #1;
            `CHK_EQ("dec192", pt192, exp_pt);
            i = i + 1;
        end

        $readmemh("aes256_pt.mem", pt_m);
        $readmemh("aes256_key.mem", key_m);
        $readmemh("aes256_ct.mem", ct_m);
        i = 0;
        while (i < MAXV && (^ct_m[i] !== 1'bx)) begin
            ct = ct_m[i]; key = key_m[i]; exp_pt = pt_m[i];
            iv256 = 1; @(posedge clk); iv256 = 0; repeat (14) begin @(posedge clk); end #1;
            `CHK_EQ("dec256", pt256, exp_pt);
            i = i + 1;
        end

        `TB_SUMMARY("AES_DECRYPT_TB");
    end
endmodule
