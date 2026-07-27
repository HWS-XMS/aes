import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// tb_enc_ti_sca - leakage (SCA) testbench for the DOM-masked AES-128 encrypt
// DATAPATH (AES_ENCRYPT_TI), N shares (compile-time +define+NSHARES=<n>).
//
// The round-key VALUES for a FIXED key are computed once by the tiny UNMASKED
// KEY_EXPANSION (identical values, negligible sim cost) and split into N shares
// in the TB, latched into rk_hold.  So the only masked hardware Verilator has to
// evaluate is the datapath under test, and the (common-mode, fixed-key) schedule
// stays out of the capture scope.  Each trace:
//     PRE idle (datapath reset -> 0, quiet)
//     LAT=Nr*4 encryption cycles (active; fresh DOM randomness every cycle)
//     POST idle (reset -> 0, quiet)
// Fixed-vs-random plaintext TVLA.  Expected on this zero-delay value model: N=2
// removes first order (2nd remains), N=3 removes both - glitch-domain leakage
// (the flagged DOM-indep concern) is NOT visible to a value model.
// ============================================================================
`default_nettype none
`ifndef NSHARES
 `define NSHARES 2
`endif
module tb_enc_ti_sca;
    localparam int N     = `NSHARES;
    localparam int RPERR = 16*sbox_rand_words(N)*8;
    localparam int RNDW  = 14*RPERR;               // tapped datapath randomness
    localparam int LAT   = 10*SBOX_LAT;            // AES-128 masked encryption latency (Nr*SBOX_LAT)
    localparam int PRE   = 10;
    localparam int POST  = 10;
    localparam [127:0] FIXED_PT  = 128'h00112233445566778899aabbccddeeff;
    localparam [127:0] FIXED_KEY = 128'h000102030405060708090a0b0c0d0e0f;

    logic clk = 0;
    logic ke_rst = 1;     // key-schedule reset (released once, for setup)
    logic rst    = 1;     // datapath reset (toggled per trace)
    logic [1:0] ksz = KS_128;

    // --- unmasked key schedule: round-key VALUES only (setup, out of scope) ---
    logic kv = 0, kr;
    byte_t [31:0] key = '0;
    roundkey_t [10:0] u_rk128;
    roundkey_t [12:0] u_rk192;
    roundkey_t [14:0] u_rk256;
    KEY_EXPANSION ke (
        .clk(clk), .rst(ke_rst), .key_valid(kv), .key(key), .key_ready(kr),
        .round_keys_128(u_rk128), .round_keys_192(u_rk192), .round_keys_256(u_rk256));

    logic [N*15*128-1:0] rk_hold = '0;             // TB-shared AES-128 round keys

    // --- DUT: the masked encrypt datapath (this is the SCA scope) ---
    logic iv = 0, ov;
    logic [N*128-1:0] si = '0, so;
    logic [RNDW-1:0]  rnd = '0;
    AES_ENCRYPT_TI #(N) dut (
        .clk(clk), .rst(rst), .in_valid(iv), .keysize(ksz),
        .state_in(si), .round_keys(rk_hold), .rnd(rnd), .out_valid(ov), .state_out(so));

    always #5 begin
        clk = ~clk;
    end

    import "DPI-C" function void sca_init(string config_path);
    import "DPI-C" function void sca_set_metadata(string key, string value);
    import "DPI-C" function void sca_start_capture();
    import "DPI-C" function void sca_sample();
    import "DPI-C" function void sca_end_capture();
    import "DPI-C" function void sca_save(string output_path);

    // split a 128-bit value into N Boolean shares
    function automatic logic [N*128-1:0] share(input logic [127:0] v);
        logic [127:0] acc, m;
        acc = v;
        for (int k = 1; k < N; k++) begin
            m = {$urandom, $urandom, $urandom, $urandom};
            share[k*128 +: 128] = m;
            acc = acc ^ m;
        end
        share[0 +: 128] = acc;
    endfunction

    task automatic drive_rnd();
        for (int w = 0; w < RNDW/32; w++) begin
            rnd[w*32 +: 32] = $urandom;
        end
    endtask

    int    num_traces = 2000;
    int    t, c, r;
    logic  rk_mode = 0;
    string outfile = "trace.h5";
    logic [127:0] ptv;

    initial begin
        void'($value$plusargs("out=%s", outfile));
        void'($value$plusargs("ntraces=%d", num_traces));
        if ($test$plusargs("rk")) begin
            rk_mode = 1;
        end

        // ---- one-time round-key setup: compute (unmasked) then split into shares ----
        repeat (2) @(posedge clk); #1 ke_rst = 0;
        key = FIXED_KEY;
        kv = 1; @(posedge clk); #1 kv = 0;
        while (!kr) begin @(posedge clk); #1; end
        for (r = 0; r <= 10; r++) begin
            rk_hold[r*N*128 +: N*128] = share(u_rk128[r]);
        end

        sca_init("config_enc_ti.yaml");
        sca_set_metadata("dut", $sformatf("enc_ti_n%0d", N));
        sca_set_metadata("group", rk_mode ? "random" : "fixed");

        for (t = 0; t < num_traces; t++) begin
            ptv = rk_mode ? {$urandom, $urandom, $urandom, $urandom} : FIXED_PT;
            si  = share(ptv);
            // clear the datapath to 0 (NOT captured); rk_hold is a TB reg, unaffected
            rst = 1; @(posedge clk); #1;
            sca_start_capture();
            // --- PRE idle: reset held, rnd held (quiet) ---
            for (c = 0; c < PRE; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            // --- encryption: release reset, present plaintext, fresh randomness ---
            rst = 0; iv = 1;
            drive_rnd(); @(posedge clk); #1; sca_sample();
            iv = 0;
            for (c = 1; c < LAT; c++) begin
                drive_rnd(); @(posedge clk); #1; sca_sample();
            end
            // --- POST: reset -> datapath clears to 0 (clean finish), then idle ---
            rst = 1;
            for (c = 0; c < POST; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            sca_end_capture();
        end

        sca_save(outfile);
        $display("[tb_enc_ti_sca] N=%0d group=%s traces=%0d cycles=%0d -> %s",
                 N, rk_mode ? "random" : "fixed", num_traces, PRE + LAT + POST, outfile);
        $finish;
    end
endmodule
