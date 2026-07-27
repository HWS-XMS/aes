import AES_PKG::*;
// ============================================================================
// tb_enc_sca - leakage (SCA) testbench for the FULL UNMASKED AES-128 encryption
// core (baseline).  Each trace captures a whole encryption with idle margins:
//
//     PRE idle cycles (reset held, core quiet)
//     Nr  encryption cycles (core active - the pipeline fills)
//     POST idle cycles (reset held, core quiet again)
//
// The aggregated Hamming-distance sample per cycle is a simulated power trace:
// flat-low before/after, a burst of activity while the AES is computing.
// Fixed-vs-random TVLA (fixed vs random plaintext, fixed key) runs over the whole
// window, so the per-cycle t-trace shows WHERE the leakage happens.  Expected:
// strong first-order leakage during the active region (|t| >> 4.5).
// ============================================================================
`default_nettype none
module tb_enc_sca;
    localparam int PRE  = 10;
    localparam int NR   = 10;                     // AES-128 rounds = unmasked latency
    localparam int POST = 10;
    localparam [127:0] FIXED_PT  = 128'h00112233445566778899aabbccddeeff;
    localparam [127:0] FIXED_KEY = 128'h000102030405060708090a0b0c0d0e0f;

    logic         clk = 0, rst = 1;
    logic         in_valid = 0, out_valid;
    byte_t [15:0] pt, ct;
    byte_t [15:0] key;

    AES_ENCRYPT #(.KEYSIZE(16)) dut (
        .clk(clk), .rst(rst), .in_valid(in_valid),
        .plaintext(pt), .key(key), .out_valid(out_valid), .ciphertext(ct));

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
    logic [127:0] ptv;

    initial begin
        void'($value$plusargs("out=%s", outfile));
        void'($value$plusargs("ntraces=%d", num_traces));
        if ($test$plusargs("rk")) begin
            rk_mode = 1;
        end

        key = FIXED_KEY;
        repeat (4) @(posedge clk); rst = 0;
        sca_init("config_enc.yaml");
        sca_set_metadata("dut", "enc_unmasked");
        sca_set_metadata("group", rk_mode ? "random" : "fixed");

        for (t = 0; t < num_traces; t++) begin
            ptv = rk_mode ? {$urandom, $urandom, $urandom, $urandom} : FIXED_PT;
            pt  = ptv;
            // clear the pipeline to 0 (NOT captured) so the idle window starts quiet
            rst = 1; @(posedge clk); #1;
            sca_start_capture();
            // --- PRE idle: reset still held, datapath at 0 (quiet) ---
            for (c = 0; c < PRE; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            // --- encryption: release reset, present plaintext (active) ---
            rst = 0; in_valid = 1;
            @(posedge clk); #1; sca_sample();
            in_valid = 0;
            for (c = 1; c < NR; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            // --- POST: assert reset -> pipeline clears to 0 (clean finish), then idle ---
            rst = 1;
            for (c = 0; c < POST; c++) begin
                @(posedge clk); #1; sca_sample();
            end
            sca_end_capture();
        end

        sca_save(outfile);
        $display("[tb_enc_sca] group=%s traces=%0d cycles=%0d -> %s",
                 rk_mode ? "random" : "fixed", num_traces, PRE + NR + POST, outfile);
        $finish;
    end
endmodule
