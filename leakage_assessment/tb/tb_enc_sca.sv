import AES_PKG::*;
// ============================================================================
// tb_enc_sca - leakage (SCA) testbench for the UNMASKED AES-128 encrypt datapath
// (AES_ENCRYPT), the baseline.  Round keys for a FIXED key are produced once by
// KEY_EXPANSION and latched into rk_hold (a TB register), keeping the key schedule
// out of the capture scope.  Each trace: PRE idle (reset->0), Nr encryption
// cycles (active), POST idle.  Fixed-vs-random plaintext TVLA; expected strong
// first-order leakage during the active region (|t| >> 4.5).
// ============================================================================
`default_nettype none
module tb_enc_sca;
    localparam int PRE  = 10;
    localparam int NR   = 10;                      // AES-128 unmasked latency
    localparam int POST = 10;
    localparam [127:0] FIXED_PT  = 128'h00112233445566778899aabbccddeeff;
    localparam [127:0] FIXED_KEY = 128'h000102030405060708090a0b0c0d0e0f;

    logic clk = 0;
    logic ke_rst = 1;     // key-schedule reset (released once)
    logic rst    = 1;     // datapath reset (per trace)
    logic [1:0] ksz = KS_128;

    logic kv = 0, kr;
    byte_t [31:0] key = '0;
    roundkey_t [10:0] rk128;
    roundkey_t [12:0] rk192;
    roundkey_t [14:0] rk256;
    KEY_EXPANSION ke (
        .clk(clk), .rst(ke_rst), .key_valid(kv), .key(key), .key_ready(kr),
        .round_keys_128(rk128), .round_keys_192(rk192), .round_keys_256(rk256));

    roundkey_t [14:0] rk_hold;                     // latched AES-128 round keys

    logic in_valid = 0, out_valid;
    byte_t [15:0] pt, ct;
    AES_ENCRYPT dut (
        .clk(clk), .rst(rst), .in_valid(in_valid), .plaintext(pt), .keysize(ksz),
        .round_keys(rk_hold), .out_valid(out_valid), .ciphertext(ct));

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

        // ---- one-time round-key setup (fixed key), latched into rk_hold ----
        repeat (2) @(posedge clk); #1 ke_rst = 0;
        key = FIXED_KEY;                           // right-aligned in the 256-bit port
        kv = 1; @(posedge clk); #1 kv = 0;
        while (!kr) begin @(posedge clk); #1; end
        rk_hold = '0;
        for (r = 0; r <= 10; r++) rk_hold[r] = rk128[r];

        sca_init("config_enc.yaml");
        sca_set_metadata("dut", "enc_unmasked");
        sca_set_metadata("group", rk_mode ? "random" : "fixed");

        for (t = 0; t < num_traces; t++) begin
            ptv = rk_mode ? {$urandom, $urandom, $urandom, $urandom} : FIXED_PT;
            pt  = ptv;
            // clear the pipeline to 0 (NOT captured) so the idle window starts quiet
            rst = 1; @(posedge clk); #1;
            sca_start_capture();
            // --- PRE idle: reset held, datapath at 0 (quiet) ---
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
            // --- POST: reset -> pipeline clears to 0, then idle ---
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
