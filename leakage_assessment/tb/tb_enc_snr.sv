import AES_PKG::*;
// ============================================================================
// tb_enc_snr - SNR capture for the UNMASKED UNROLLED AES-128 encrypt datapath
// (AES_ENCRYPT).  Fixed key, RANDOM plaintext per trace (recorded as metadata so
// snr.py can group by Y = Sbox(pt_b ^ k_b)).  Full-datapath probe, so the
// concurrent switching of ALL pipeline stages is in the leakage - that algorithmic
// noise is exactly what SNR measures.  Compare against tb_enc_iter_snr.
// ============================================================================
`default_nettype none
module tb_enc_snr;
    localparam int PRE  = 10;
    localparam int NR   = 10;
    localparam int POST = 10;
    localparam [127:0] FIXED_KEY = 128'h000102030405060708090a0b0c0d0e0f;

    logic clk = 0;
    logic ke_rst = 1;
    logic rst = 1;
    logic [1:0] ksz = KS_128;

    logic kv = 0;
    logic kr;
    byte_t [31:0] key = '0;
    roundkey_t [10:0] rk128;
    roundkey_t [12:0] rk192;
    roundkey_t [14:0] rk256;
    KEY_EXPANSION ke (
        .clk            (clk  ),
        .rst            (ke_rst),
        .key_valid      (kv   ),
        .key            (key  ),
        .key_ready      (kr   ),
        .round_keys_128 (rk128),
        .round_keys_192 (rk192),
        .round_keys_256 (rk256)
    );

    roundkey_t [14:0] rk_hold;

    logic in_valid = 0;
    logic out_valid;
    byte_t [15:0] pt;
    byte_t [15:0] ct;
    AES_ENCRYPT dut (
        .clk        (clk      ),
        .rst        (rst      ),
        .in_valid   (in_valid ),
        .plaintext  (pt       ),
        .keysize    (ksz      ),
        .round_keys (rk_hold  ),
        .out_valid  (out_valid),
        .ciphertext (ct       )
    );

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
    string outfile = "trace.h5";
    logic [127:0] ptv;

    initial begin
        void'($value$plusargs("out=%s", outfile));
        void'($value$plusargs("ntraces=%d", num_traces));

        repeat (2) @(posedge clk); #1;
        ke_rst = 0;
        key = FIXED_KEY;
        kv = 1;
        @(posedge clk); #1;
        kv = 0;
        while (!kr) begin
            @(posedge clk); #1;
        end
        rk_hold = '0;
        for (r = 0; r <= 10; r++) begin
            rk_hold[r] = rk128[r];
        end

        sca_init("config_enc_snr.yaml");
        sca_set_metadata("dut", "enc_unrolled");

        for (t = 0; t < num_traces; t++) begin
            ptv = {$urandom, $urandom, $urandom, $urandom};
            pt  = ptv;
            sca_set_metadata("plaintext", $sformatf("%032x", ptv));
            rst = 1;
            @(posedge clk); #1;
            sca_start_capture();
            for (c = 0; c < PRE; c++) begin
                @(posedge clk); #1;
                sca_sample();
            end
            rst = 0;
            in_valid = 1;
            @(posedge clk); #1;
            sca_sample();
            in_valid = 0;
            for (c = 1; c < NR; c++) begin
                @(posedge clk); #1;
                sca_sample();
            end
            rst = 1;
            for (c = 0; c < POST; c++) begin
                @(posedge clk); #1;
                sca_sample();
            end
            sca_end_capture();
        end

        sca_save(outfile);
        $display("[tb_enc_snr] traces=%0d cycles=%0d -> %s", num_traces, PRE + NR + POST, outfile);
        $finish;
    end
endmodule
