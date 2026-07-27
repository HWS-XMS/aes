import AES_PKG::*;
// KEY_EXPANSION_TB - the size-generic wrapper must route each KEYSIZE to the
// matching fixed-size expansion.  Checks all three sizes against the NIST
// reference schedules.  round_keys are flattened for byte addressing.
module KEY_EXPANSION_TB;
    `include "tb_check.svh"

    localparam int MAXK = 64;

    byte_t [15:0] key128;  roundkey_t [10:0] rk128;
    byte_t [23:0] key192;  roundkey_t [12:0] rk192;
    byte_t [31:0] key256;  roundkey_t [14:0] rk256;

    KEY_EXPANSION #(.KEYSIZE(16)) w128 (.key(key128), .round_keys(rk128));
    KEY_EXPANSION #(.KEYSIZE(24)) w192 (.key(key192), .round_keys(rk192));
    KEY_EXPANSION #(.KEYSIZE(32)) w256 (.key(key256), .round_keys(rk256));

    logic [11*128-1:0] f128;  assign f128 = rk128;
    logic [13*128-1:0] f192;  assign f192 = rk192;
    logic [15*128-1:0] f256;  assign f256 = rk256;

    reg [255:0] key_m [0:MAXK-1];
    reg [31:0]  w_m   [0:MAXK*60-1];
    integer i, r, c, b;

    initial begin
        // AES-128
        $readmemh("keyexp128_key.mem", key_m);
        $readmemh("keyexp128_w.mem",   w_m);
        i = 0;
        while (i < MAXK && (^key_m[i] !== 1'bx)) begin
            key128 = key_m[i]; #1;
            for (r = 0; r <= 10; r = r + 1) begin
                for (c = 0; c < 4; c = c + 1) begin
                    for (b = 0; b < 4; b = b + 1) begin
                        `CHK_EQ("rk128", f128[r*128 + c*32 + b*8 +: 8], w_m[i*44 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i = i + 1;
        end
        // AES-192
        $readmemh("keyexp192_key.mem", key_m);
        $readmemh("keyexp192_w.mem",   w_m);
        i = 0;
        while (i < MAXK && (^key_m[i] !== 1'bx)) begin
            key192 = key_m[i]; #1;
            for (r = 0; r <= 12; r = r + 1) begin
                for (c = 0; c < 4; c = c + 1) begin
                    for (b = 0; b < 4; b = b + 1) begin
                        `CHK_EQ("rk192", f192[r*128 + c*32 + b*8 +: 8], w_m[i*52 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i = i + 1;
        end
        // AES-256
        $readmemh("keyexp256_key.mem", key_m);
        $readmemh("keyexp256_w.mem",   w_m);
        i = 0;
        while (i < MAXK && (^key_m[i] !== 1'bx)) begin
            key256 = key_m[i]; #1;
            for (r = 0; r <= 14; r = r + 1) begin
                for (c = 0; c < 4; c = c + 1) begin
                    for (b = 0; b < 4; b = b + 1) begin
                        `CHK_EQ("rk256", f256[r*128 + c*32 + b*8 +: 8], w_m[i*60 + 4*r+c][31-8*b -: 8]);
                    end
                end
            end
            i = i + 1;
        end
        `TB_SUMMARY("KEY_EXPANSION_TB");
    end
endmodule
