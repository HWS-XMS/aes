import AES_PKG::*;
// KEY_EXPANSION_192_TB - pipelined AES-192 key schedule vs the NIST reference
// (FIPS-197 App. A).  Drives the key_valid/key_ready handshake.
module KEY_EXPANSION_192_TB;
    `include "tb_check.svh"

    localparam int NR   = 12;
    localparam int NW   = 4*(NR+1);
    localparam int MAXK = 64;

    logic clk = 0;
    logic rst = 1;
    logic key_valid = 0;
    logic key_ready;
    byte_t [23:0] key = '0;
    roundkey_t [NR:0] round_keys;

    KEY_EXPANSION_192 dut (
        .clk        (clk       ),
        .rst        (rst       ),
        .key_valid  (key_valid ),
        .key        (key       ),
        .key_ready  (key_ready ),
        .round_keys (round_keys)
    );

    always #5 clk = ~clk;

    logic [(NR+1)*128-1:0] rk_flat;
    assign rk_flat = round_keys;

    reg [191:0] key_m [0:MAXK-1];
    reg [31:0]  w_m   [0:MAXK*NW-1];
    integer i;
    integer r;
    integer c;
    integer b;

    initial begin
        $readmemh("keyexp192_key.mem", key_m);
        $readmemh("keyexp192_w.mem",   w_m);

        repeat (2) @(posedge clk); #1;
        rst = 0;

        i = 0;
        while (i < MAXK && (^key_m[i] !== 1'bx)) begin
            @(posedge clk); #1;
            key       = key_m[i];
            key_valid = 1;
            @(posedge clk); #1;
            key_valid = 0;
            while (!key_ready) begin
                @(posedge clk); #1;
            end

            for (r = 0; r <= NR; r++) begin
                for (c = 0; c < 4; c++) begin
                    for (b = 0; b < 4; b++) begin
                        `CHK_EQ("rk byte", rk_flat[r*128 + c*32 + b*8 +: 8], w_m[i*NW + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i++;
        end
        `CHK("read keys", i > 0);
        `TB_SUMMARY("KEY_EXPANSION_192_TB");
    end
endmodule
