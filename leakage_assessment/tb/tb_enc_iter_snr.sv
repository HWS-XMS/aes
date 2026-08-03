import AES_PKG::*;
// ============================================================================
// tb_enc_iter_snr - SNR capture for the UNMASKED ROLLED AES-128 encrypt datapath
// (AES_ENCRYPT_ITER).  Identical stimulus/flow to tb_enc_snr (fixed key, random
// plaintext recorded per trace, full-datapath probe) - only the DUT and the active
// window differ.  One round switches per cycle, so the round-1 target should have
// far less concurrent noise than the unrolled pipeline -> higher SNR.
// ============================================================================
`default_nettype none
module tb_enc_iter_snr;
    localparam int PRE  = 10;
    localparam int ACT  = 12;                      // Nr+1 (=11) + margin
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
    AES_ENCRYPT_ITER dut (
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

        sca_init("config_enc_iter_snr.yaml");
        sca_set_metadata("dut", "enc_rolled");

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
            for (c = 1; c < ACT; c++) begin
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
        $display("[tb_enc_iter_snr] traces=%0d cycles=%0d -> %s", num_traces, PRE + ACT + POST, outfile);
        $finish;
    end
endmodule
