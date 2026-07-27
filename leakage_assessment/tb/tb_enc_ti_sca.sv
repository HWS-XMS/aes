import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// tb_enc_ti_sca - leakage (SCA) testbench for the FULL DOM-masked AES-128
// encryption core, N shares (compile-time +define+NSHARES=<n>).
//
// The fixed key is loaded ONCE via the key_valid/key_ready handshake; then each
// trace captures a whole masked encryption with idle margins:
//
//     PRE idle cycles  (reset held -> datapath at 0, quiet; round keys preserved)
//     LAT encryption cycles (core active; fresh DOM randomness every cycle)
//     POST idle cycles (reset held, quiet again)
//
// The aggregated Hamming-distance sample per cycle is a simulated power trace
// (flat-low idle, active burst).  Fixed-vs-random TVLA (fixed vs random
// plaintext) runs over the whole window.  Expected: N=2 removes first-order
// leakage (second order remains); N=3 removes first and second order.
// ============================================================================
`default_nettype none
`ifndef NSHARES
 `define NSHARES 2
`endif
module tb_enc_ti_sca;
    localparam int N     = `NSHARES;
    localparam int Nr    = 10;
    localparam int RW    = N*(N-1)/2;
    localparam int RPERR = 16*4*RW*8;             // datapath randomness per round
    localparam int RNDW  = Nr*RPERR;              // total datapath randomness
    localparam int NSUB  = 10;
    localparam int KRTOT = NSUB*4*RW*8;           // key-schedule randomness
    localparam int KEY_LATENCY = (Nr+6)*4;        // key-setup latency (64)
    localparam int LAT   = Nr*4;                  // masked encryption latency (40)
    localparam int PRE   = 10;
    localparam int POST  = 10;
    localparam [127:0] FIXED_PT  = 128'h00112233445566778899aabbccddeeff;
    localparam [127:0] FIXED_KEY = 128'h000102030405060708090a0b0c0d0e0f;

    logic             clk = 0, rst = 1;
    logic             kv = 0, iv = 0, kr, ov;
    logic [N*128-1:0] keysh = '0, si = '0, so;
    logic [KRTOT-1:0] krn = '0;
    logic [RNDW-1:0]  rnd = '0;

    AES_ENCRYPT_TI #(.N(N), .KEYSIZE(16)) dut (
        .clk(clk), .rst(rst),
        .key_valid(kv), .key(keysh), .key_rnd(krn), .key_ready(kr),
        .in_valid(iv), .state_in(si), .rnd(rnd), .out_valid(ov), .state_out(so));

    always #5 begin
        clk = ~clk;
    end

    import "DPI-C" function void sca_init(string config_path);
    import "DPI-C" function void sca_set_metadata(string key, string value);
    import "DPI-C" function void sca_start_capture();
    import "DPI-C" function void sca_sample();
    import "DPI-C" function void sca_end_capture();
    import "DPI-C" function void sca_save(string output_path);

    // split a 128-bit value into N Boolean shares with fresh random masks
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

        // ---- one-time key setup (fixed key; round keys latched, survive rst) ----
        repeat (2) @(posedge clk); rst = 0;
        keysh = share(FIXED_KEY);
        kv = 1; @(posedge clk); #1; kv = 0;
        c = 0;
        while (!kr && c < 4*KEY_LATENCY) begin
            @(posedge clk); #1; c++;
        end

        sca_init("config_enc_ti.yaml");
        sca_set_metadata("dut", $sformatf("enc_ti_n%0d", N));
        sca_set_metadata("group", rk_mode ? "random" : "fixed");

        for (t = 0; t < num_traces; t++) begin
            ptv = rk_mode ? {$urandom, $urandom, $urandom, $urandom} : FIXED_PT;
            si  = share(ptv);
            // clear the datapath to 0 (NOT captured); round keys survive rst
            rst = 1; @(posedge clk); #1;
            sca_start_capture();
            // --- PRE idle: reset still held (quiet); rnd held so its port is quiet too ---
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
            // --- POST: assert reset -> datapath clears to 0 (clean finish), then idle.
            //     Round keys (rk_reg) survive rst, so the next trace re-keys for free. ---
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
