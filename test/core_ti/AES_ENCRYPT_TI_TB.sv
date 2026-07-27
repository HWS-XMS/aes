import AES_PKG::*;
// AES_ENCRYPT_TI_TB - end-to-end DOM-masked AES-128 encryption, N = 2 (the
// ASCAD-comparable first order).  The core embeds the masked key schedule, so
// the TB drives the *shared key* via the key_valid/key_ready handshake, then the
// plaintext; the output shares are recombined -> bytes -> compared to OpenSSL.
//
// Re-keying is exercised WITHOUT any reset between vectors: each iteration loads
// a fresh (shared) key and waits for key_ready, proving the core accepts a new
// key with no reset.  Stimulus changes #1 after the posedge (clk-to-Q) and status
// is sampled #1 after the posedge - a normal synchronous producer/consumer, not
// a falling-edge hack.
//
// Coverage note: N-scaling (N=2,3,4) is proven in SBOX_TI_TB; the 192/256 masked
// key schedules in KEY_EXPANSION_{192,256}_TI_TB; so the 192/256 embed cores
// (identical structure, larger Nr) are covered by composition.
module AES_ENCRYPT_TI_TB;
    `include "tb_check.svh"

    localparam int MAXV = 64;
    localparam int LAT  = 10*4;                 // encryption latency (Nr*4)
    logic clk = 0, rst = 1;
    always begin #5 clk = ~clk; end

    logic [127:0] pt_blk;
    state_t pt_state;
    AES_BYTES_TO_STATE p2s (.bytes_in(pt_blk), .state_out(pt_state));

    logic kv = 0, iv = 0, kr, ov;
    logic [2*128-1:0] k = '0, si = '0, so;
    logic [ (10*4*1*8)-1:0]    krn;    // NSUB=10
    logic [ (10*16*4*1*8)-1:0] rn;     // Nr=10
    AES_ENCRYPT_TI #(.N(2), .KEYSIZE(16)) enc (.clk(clk), .rst(rst),
        .key_valid(kv), .key(k), .key_rnd(krn), .key_ready(kr),
        .in_valid(iv), .state_in(si), .rnd(rn), .out_valid(ov), .state_out(so));

    // functional correctness is randomness-independent -> drive DOM randomness 0
    initial begin krn = '0; rn = '0; end

    logic [127:0] rec_state, cb;
    assign rec_state = so[0 +: 128] ^ so[128 +: 128];
    AES_STATE_TO_BYTES b (.state_in(rec_state), .bytes_out(cb));

    function automatic logic [127:0] r128; r128 = {$random,$random,$random,$random}; endfunction

    reg [127:0] pt_m[0:MAXV-1], ct_m[0:MAXV-1], key_m[0:MAXV-1];
    reg [31:0]  nv_m[0:0];
    logic [127:0] mask;
    integer i, nvec;

    initial begin
        $readmemh("aes128_pt.mem", pt_m); $readmemh("aes128_key.mem", key_m);
        $readmemh("aes128_ct.mem", ct_m); $readmemh("ecb_nvec.mem", nv_m);
        nvec = nv_m[0];

        // single global reset, then every key is loaded reset-free
        repeat (2) begin @(posedge clk); end #1; rst = 0;

        for (i = 0; i < nvec; i++) begin
            // ---- key setup: valid/ready handshake ----
            mask = r128();
            k = {mask, key_m[i] ^ mask};        // {share1, share0}, recombine = key
            kv = 1;
            @(posedge clk); #1; kv = 0;         // one-cycle key_valid pulse
            while (!kr) begin @(posedge clk); #1; end   // wait for key_ready (rk_reg valid)
            // ---- encrypt one block ----
            pt_blk = pt_m[i]; #1;               // let combinational pt_state settle
            mask = r128();
            si = {mask, pt_state ^ mask};
            iv = 1;
            @(posedge clk); #1; iv = 0;         // one-cycle in_valid pulse
            repeat (LAT) begin @(posedge clk); end #1;
            `CHK_EQ("enc128", cb, ct_m[i]);
        end
        `CHK("read vectors", nvec > 0);
        `TB_SUMMARY("AES_ENCRYPT_TI_TB");
    end
endmodule
