import AES_PKG::*;
// KEY_EXPANSION_TB - the keysize-agnostic distributor expands one key three ways.
// One DUT drives all three outputs; each size's output is checked against the NIST
// reference schedule (FIPS-197 App. A) via the single key_valid/key_ready handshake.
module KEY_EXPANSION_TB;
    `include "tb_check.svh"

    localparam int MAXK = 64;

    logic clk = 0;
    logic rst = 1;
    logic key_valid = 0;
    logic key_ready;
    byte_t [31:0] key = '0;
    roundkey_t [10:0] rk128;
    roundkey_t [12:0] rk192;
    roundkey_t [14:0] rk256;

    KEY_EXPANSION dut (
        .clk            (clk      ),
        .rst            (rst      ),
        .key_valid      (key_valid),
        .key            (key      ),
        .key_ready      (key_ready),
        .round_keys_128 (rk128    ),
        .round_keys_192 (rk192    ),
        .round_keys_256 (rk256    )
    );

    always #5 clk = ~clk;

    logic [11*128-1:0] f128;
    logic [13*128-1:0] f192;
    logic [15*128-1:0] f256;
    assign f128 = rk128;
    assign f192 = rk192;
    assign f256 = rk256;

    reg [255:0] key_m [0:MAXK-1];
    reg [31:0]  w_m   [0:MAXK*60-1];
    integer i;
    integer r;
    integer c;
    integer b;

    task automatic load_key(input byte_t [31:0] k);
        @(posedge clk); #1;
        key       = k;
        key_valid = 1;
        @(posedge clk); #1;
        key_valid = 0;
        while (!key_ready) begin
            @(posedge clk); #1;
        end
    endtask

    initial begin
        repeat (2) @(posedge clk); #1;
        rst = 0;

        $readmemh("keyexp128_key.mem", key_m);
        $readmemh("keyexp128_w.mem",   w_m);
        i = 0;
        while (i < MAXK && (^key_m[i] !== 1'bx)) begin
            load_key(key_m[i]);
            for (r = 0; r <= 10; r++) begin
                for (c = 0; c < 4; c++) begin
                    for (b = 0; b < 4; b++) begin
                        `CHK_EQ("rk128", f128[r*128 + c*32 + b*8 +: 8], w_m[i*44 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i++;
        end
        `CHK("128 vectors", i > 0);

        $readmemh("keyexp192_key.mem", key_m);
        $readmemh("keyexp192_w.mem",   w_m);
        i = 0;
        while (i < MAXK && (^key_m[i] !== 1'bx)) begin
            load_key(key_m[i]);
            for (r = 0; r <= 12; r++) begin
                for (c = 0; c < 4; c++) begin
                    for (b = 0; b < 4; b++) begin
                        `CHK_EQ("rk192", f192[r*128 + c*32 + b*8 +: 8], w_m[i*52 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i++;
        end
        `CHK("192 vectors", i > 0);

        $readmemh("keyexp256_key.mem", key_m);
        $readmemh("keyexp256_w.mem",   w_m);
        i = 0;
        while (i < MAXK && (^key_m[i] !== 1'bx)) begin
            load_key(key_m[i]);
            for (r = 0; r <= 14; r++) begin
                for (c = 0; c < 4; c++) begin
                    for (b = 0; b < 4; b++) begin
                        `CHK_EQ("rk256", f256[r*128 + c*32 + b*8 +: 8], w_m[i*60 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i++;
        end
        `CHK("256 vectors", i > 0);

        `TB_SUMMARY("KEY_EXPANSION_TB");
    end
endmodule
