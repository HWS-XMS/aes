import AES_PKG::*;
// AES_DECRYPT_TI_TB - end-to-end DOM-masked AES-128 decryption, N = 2 (mirror of
// AES_ENCRYPT_TI_TB).  Drives the shared key via the key_valid/key_ready
// handshake, then the ciphertext; recombines the output shares -> bytes ->
// compares to the OpenSSL plaintext.
//
// Re-keying is exercised WITHOUT any reset between vectors.  Stimulus changes #1
// after the posedge (clk-to-Q); status sampled #1 after the posedge.  See
// AES_ENCRYPT_TI_TB for the 192/256 coverage-by-composition note.
module AES_DECRYPT_TI_TB;
    `include "tb_check.svh"

    localparam int MAXV = 64;
    localparam int LAT  = 10*4;                 // decryption latency (Nr*4)
    logic clk = 0, rst = 1;
    always begin #5 clk = ~clk; end

    logic [127:0] ct_blk;
    state_t ct_state;
    AES_BYTES_TO_STATE c2s (.bytes_in(ct_blk), .state_out(ct_state));

    logic kv = 0, iv = 0, kr, ov;
    logic [2*128-1:0] k = '0, si = '0, so;
    logic [ (10*4*1*8)-1:0]    krn;
    logic [ (10*16*4*1*8)-1:0] rn;
    AES_DECRYPT_TI #(.N(2), .KEYSIZE(16)) dec (.clk(clk), .rst(rst),
        .key_valid(kv), .key(k), .key_rnd(krn), .key_ready(kr),
        .in_valid(iv), .state_in(si), .rnd(rn), .out_valid(ov), .state_out(so));

    initial begin krn = '0; rn = '0; end

    logic [127:0] rec_state, pb;
    assign rec_state = so[0 +: 128] ^ so[128 +: 128];
    AES_STATE_TO_BYTES b (.state_in(rec_state), .bytes_out(pb));

    function automatic logic [127:0] r128; r128 = {$random,$random,$random,$random}; endfunction

    reg [127:0] pt_m[0:MAXV-1], ct_m[0:MAXV-1], key_m[0:MAXV-1];
    reg [31:0]  nv_m[0:0];
    logic [127:0] mask;
    integer i, nvec;

    initial begin
        $readmemh("aes128_pt.mem", pt_m); $readmemh("aes128_key.mem", key_m);
        $readmemh("aes128_ct.mem", ct_m); $readmemh("ecb_nvec.mem", nv_m);
        nvec = nv_m[0];

        repeat (2) begin @(posedge clk); end #1; rst = 0;

        for (i = 0; i < nvec; i++) begin
            // ---- key setup: valid/ready handshake ----
            mask = r128();
            k = {mask, key_m[i] ^ mask};
            kv = 1;
            @(posedge clk); #1; kv = 0;
            while (!kr) begin @(posedge clk); #1; end
            // ---- decrypt one block ----
            ct_blk = ct_m[i]; #1;               // let combinational ct_state settle
            mask = r128();
            si = {mask, ct_state ^ mask};
            iv = 1;
            @(posedge clk); #1; iv = 0;
            repeat (LAT) begin @(posedge clk); end #1;
            `CHK_EQ("dec128", pb, pt_m[i]);
        end
        `CHK("read vectors", nvec > 0);
        `TB_SUMMARY("AES_DECRYPT_TI_TB");
    end
endmodule
