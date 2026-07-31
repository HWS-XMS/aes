import AES_PKG::*;
// AES_ENCRYPT_ITER_TB - drives the iterative encrypt datapath; checks every ciphertext
// vs the OpenSSL vectors (round keys from the verified KEY_EXPANSION), all three sizes.
module AES_ENCRYPT_ITER_TB;
    `include "tb_check.svh"

    localparam int MAXV = 256;

    logic clk = 0;
    logic rst = 1;
    logic key_valid = 0;
    logic key_ready;
    logic [1:0] keysize = KS_128;
    byte_t [31:0] key = '0;
    roundkey_t [10:0] rk128;
    roundkey_t [12:0] rk192;
    roundkey_t [14:0] rk256;
    roundkey_t [14:0] round_keys;
    logic in_valid = 0;
    logic out_valid;
    byte_t [15:0] pt = '0;
    byte_t [15:0] ct;

    KEY_EXPANSION ke (
        .clk            (clk      ),
        .rst            (rst      ),
        .key_valid      (key_valid),
        .key            (key      ),
        .key_ready      (key_ready),
        .round_keys_128 (rk128    ),
        .round_keys_192 (rk192    ),
        .round_keys_256 (rk256    )
    );

    integer rr;
    always_comb begin
        round_keys = '0;
        case (keysize)
            KS_128: for (rr = 0; rr <= 10; rr++) begin
                round_keys[rr] = rk128[rr];
            end
            KS_192: for (rr = 0; rr <= 12; rr++) begin
                round_keys[rr] = rk192[rr];
            end
            default: for (rr = 0; rr <= 14; rr++) begin
                round_keys[rr] = rk256[rr];
            end
        endcase
    end

    AES_ENCRYPT_ITER dut (
        .clk        (clk       ),
        .rst        (rst       ),
        .in_valid   (in_valid  ),
        .plaintext  (pt        ),
        .keysize    (keysize   ),
        .round_keys (round_keys),
        .out_valid  (out_valid ),
        .ciphertext (ct        )
    );

    always #5 clk = ~clk;

    reg [127:0] pt_m  [0:MAXV-1];
    reg [255:0] key_m [0:MAXV-1];
    reg [127:0] ct_m  [0:MAXV-1];
    integer i;

    task automatic run_size(input logic [1:0] ks, input string pf, input string kf, input string cf);
        $readmemh(pf, pt_m);
        $readmemh(kf, key_m);
        $readmemh(cf, ct_m);
        i = 0;
        while (i < MAXV && (^pt_m[i] !== 1'bx)) begin
            @(posedge clk); #1;
            keysize   = ks;
            key       = key_m[i];
            key_valid = 1;
            @(posedge clk); #1;
            key_valid = 0;
            while (!key_ready) begin
                @(posedge clk); #1;
            end
            @(posedge clk); #1;
            pt       = pt_m[i];
            in_valid = 1;
            @(posedge clk); #1;
            in_valid = 0;
            while (!out_valid) begin
                @(posedge clk); #1;
            end
            `CHK_EQ("ct", ct, ct_m[i]);
            i++;
        end
        `CHK("read vectors", i > 0);
    endtask

    initial begin
        repeat (2) @(posedge clk); #1;
        rst = 0;
        run_size(KS_128, "aes128_pt.mem", "aes128_key.mem", "aes128_ct.mem");
        run_size(KS_192, "aes192_pt.mem", "aes192_key.mem", "aes192_ct.mem");
        run_size(KS_256, "aes256_pt.mem", "aes256_key.mem", "aes256_ct.mem");
        `TB_SUMMARY("AES_ENCRYPT_ITER_TB");
    end
endmodule
