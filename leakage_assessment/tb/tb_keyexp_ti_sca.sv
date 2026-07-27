import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// tb_keyexp_ti_sca - leakage (SCA) testbench for the DOM-masked AES-128 KEY
// SCHEDULE (KEY_EXPANSION_128_TI), N shares (compile-time +define+NSHARES=<n>).
//
// Fixed-vs-random KEY TVLA (the key-schedule analogue of the core's fixed-vs-
// random plaintext).  Each trace splits the key (fixed or random) into N fresh
// Boolean shares, pulses key_valid, and clocks the masked schedule for
// LAT = Nr*SBOX_LAT cycles with fresh DOM randomness every cycle.  Each trace:
//     PRE idle (schedule reset -> 0, quiet)
//     LAT active cycles (SubWord / SBOX_TI cascade; fresh randomness)
//     POST idle (reset -> 0, quiet)
// Expected on this zero-delay value model: N=2 removes first order (2nd remains),
// N=3 removes both - glitch-domain leakage is NOT visible to a value model.
// ============================================================================
`default_nettype none
`ifndef NSHARES
 `define NSHARES 2
`endif
module tb_keyexp_ti_sca;
    localparam int N    = `NSHARES;
    localparam int Nr   = 10;
    localparam int RPS  = sbox_rand_words(N)*8;
    localparam int RTOT = Nr*4*RPS;                // masked key-schedule randomness
    localparam int LAT  = Nr*SBOX_LAT;             // AES-128 masked settle (key_ready)
    localparam int PRE  = 10;
    localparam int POST = 10;
    localparam [127:0] FIXED_KEY = 128'h000102030405060708090a0b0c0d0e0f;

    logic clk = 0;
    logic rst = 1;

    // --- DUT: the masked AES-128 key schedule (this is the SCA scope) ---
    logic kv = 0, kr;
    logic [N*128-1:0]    key = '0;
    logic [RTOT-1:0]     rnd = '0;
    logic [N*11*128-1:0] round_keys;
    KEY_EXPANSION_128_TI #(N) dut (
        .clk(clk), .rst(rst), .key_valid(kv), .key(key), .rnd(rnd),
        .key_ready(kr), .round_keys(round_keys));

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
        for (int w = 0; w < RTOT/32; w++) begin
            rnd[w*32 +: 32] = $urandom;
        end
    endtask

    int    num_traces = 2000;
    int    t, c;
    logic  rk_mode = 0;
    string outfile = "trace.h5";
    logic [127:0] kval;

    initial begin
        void'($value$plusargs("out=%s", outfile));
        void'($value$plusargs("ntraces=%d", num_traces));
        if ($test$plusargs("rk")) begin
            rk_mode = 1;
        end

        sca_init("config_keyexp_ti.yaml");
        sca_set_metadata("dut", $sformatf("keyexp_ti_n%0d", N));
        sca_set_metadata("group", rk_mode ? "random" : "fixed");

        for (t = 0; t < num_traces; t++) begin
            kval = rk_mode ? {$urandom, $urandom, $urandom, $urandom} : FIXED_KEY;
            key  = share(kval);
            // clear the schedule to 0 (NOT captured); begin quiet
            rst = 1; @(posedge clk); #1;
            sca_start_capture();
            // --- PRE idle: reset held (quiet) ---
            for (c = 0; c < PRE; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            // --- expansion: release reset, pulse key_valid, fresh randomness ---
            rst = 0; kv = 1;
            drive_rnd(); @(posedge clk); #1; sca_sample();
            kv = 0;
            for (c = 1; c < LAT; c++) begin
                drive_rnd(); @(posedge clk); #1; sca_sample();
            end
            // --- POST: reset -> schedule clears to 0 (clean finish), then idle ---
            rst = 1;
            for (c = 0; c < POST; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            sca_end_capture();
        end

        sca_save(outfile);
        $display("[tb_keyexp_ti_sca] N=%0d group=%s traces=%0d cycles=%0d -> %s",
                 N, rk_mode ? "random" : "fixed", num_traces, PRE + LAT + POST, outfile);
        $finish;
    end
endmodule
