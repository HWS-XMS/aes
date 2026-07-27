import AES_PKG::*;
// ============================================================================
// tb_keyexp_sca - leakage (SCA) testbench for the UNMASKED AES-128 key schedule
// (KEY_EXPANSION_128), the baseline.  Fixed-vs-random KEY TVLA: each trace loads
// the key (fixed or random) and clocks the pipelined schedule for LAT = NG cycles.
// Each trace: PRE idle (reset->0), NG expansion cycles (active), POST idle.
// Expected strong first-order leakage during the active region (|t| >> 4.5).
// ============================================================================
`default_nettype none
module tb_keyexp_sca;
    localparam int PRE  = 10;
    localparam int NG   = 11;                      // AES-128 pipeline depth (44/4)
    localparam int POST = 10;
    localparam [127:0] FIXED_KEY = 128'h000102030405060708090a0b0c0d0e0f;

    logic clk = 0;
    logic rst = 1;

    logic kv = 0, kr;
    byte_t [15:0] key = '0;
    roundkey_t [10:0] round_keys;
    KEY_EXPANSION_128 dut (
        .clk(clk), .rst(rst), .key_valid(kv), .key(key),
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

        sca_init("config_keyexp.yaml");
        sca_set_metadata("dut", "keyexp_unmasked");
        sca_set_metadata("group", rk_mode ? "random" : "fixed");

        for (t = 0; t < num_traces; t++) begin
            kval = rk_mode ? {$urandom, $urandom, $urandom, $urandom} : FIXED_KEY;
            key  = kval;
            // clear the pipeline to 0 (NOT captured) so the idle window starts quiet
            rst = 1; @(posedge clk); #1;
            sca_start_capture();
            // --- PRE idle: reset held, schedule at 0 (quiet) ---
            for (c = 0; c < PRE; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            // --- expansion: release reset, pulse key_valid (active) ---
            rst = 0; kv = 1;
            @(posedge clk); #1; sca_sample();
            kv = 0;
            for (c = 1; c < NG; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            // --- POST: reset -> pipeline clears to 0, then idle ---
            rst = 1;
            for (c = 0; c < POST; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            sca_end_capture();
        end

        sca_save(outfile);
        $display("[tb_keyexp_sca] group=%s traces=%0d cycles=%0d -> %s",
                 rk_mode ? "random" : "fixed", num_traces, PRE + NG + POST, outfile);
        $finish;
    end
endmodule
