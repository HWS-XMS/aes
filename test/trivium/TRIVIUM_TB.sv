// TRIVIUM_TB - three ECRYPT set-1 vectors (0/9/18) checked at UNROLL = 1/32/64, first
// 512 keystream bits per vector.  Also determinism-on-reload and reset-mid-run.
module TRIVIUM_TB;
    `include "tb_check.svh"

    logic clk = 0;
    always #5 clk = ~clk;

    logic         rst = 1, load = 0;
    logic [79:0]  key = '0, iv = '0;
    logic         ov1, ov32, ov64;
    logic         ks1;
    logic [31:0]  ks32;
    logic [63:0]  ks64;

    TRIVIUM #(.UNROLL(1))  d1  (.clk(clk), .rst(rst), .load(load), .key(key), .iv(iv),
                                  .out_valid(ov1),  .keystream(ks1 ));
    TRIVIUM #(.UNROLL(32)) d32 (.clk(clk), .rst(rst), .load(load), .key(key), .iv(iv),
                                  .out_valid(ov32), .keystream(ks32));
    TRIVIUM #(.UNROLL(64)) d64 (.clk(clk), .rst(rst), .load(load), .key(key), .iv(iv),
                                  .out_valid(ov64), .keystream(ks64));

    // ECRYPT set 1: keys and IVs.
    logic [79:0] KEYS [3];
    logic [79:0] IVS  [3];
    initial begin
        KEYS[0] = 80'h8000_0000_0000_0000_0000; IVS[0] = 80'd0;
        KEYS[1] = 80'h0040_0000_0000_0000_0000; IVS[1] = 80'd0;
        KEYS[2] = 80'h0000_2000_0000_0000_0000; IVS[2] = 80'd0;
    end

    // 512-bit reference keystream: 8 x 64-bit words per vector.
    logic [63:0] KAT_FIRST [3][8];
    initial begin
        KAT_FIRST[0][0]=64'h38EB86FF730D7A9C; KAT_FIRST[0][1]=64'hAF8DF13A4420540D;
        KAT_FIRST[0][2]=64'hBB7B651464C87501; KAT_FIRST[0][3]=64'h552041C249F29A64;
        KAT_FIRST[0][4]=64'hD2FBF515610921EB; KAT_FIRST[0][5]=64'hE06C8F92CECF7F80;
        KAT_FIRST[0][6]=64'h98FF20CCCC6A62B9; KAT_FIRST[0][7]=64'h7BE8EF7454FC80F9;
        KAT_FIRST[1][0]=64'h61208D286BC1DC43; KAT_FIRST[1][1]=64'h1171EDA5CAF79D95;
        KAT_FIRST[1][2]=64'h60B18ACEF2648441; KAT_FIRST[1][3]=64'h7B651A47A3F7A803;
        KAT_FIRST[1][4]=64'h53F79AF8656DA430; KAT_FIRST[1][5]=64'h1A5E5A02E04265B1;
        KAT_FIRST[1][6]=64'h82C67F5891220349; KAT_FIRST[1][7]=64'hF8CD1CD06597B77E;
        KAT_FIRST[2][0]=64'hC8F9031DABF8DB03; KAT_FIRST[2][1]=64'hFF120D05512B5F24;
        KAT_FIRST[2][2]=64'hEAEA1BAB43201A5E; KAT_FIRST[2][3]=64'h93BF17F628E5B216;
        KAT_FIRST[2][4]=64'hD58577112F581A67; KAT_FIRST[2][5]=64'hDD5F962484ED4AC5;
        KAT_FIRST[2][6]=64'h9202BA3509A73E11; KAT_FIRST[2][7]=64'h9680B562F86DF0DC;
    end

    task automatic reseed(input logic [79:0] k, input logic [79:0] v);
        @(posedge clk); load <= 1'b1; key <= k; iv <= v;
        @(posedge clk); load <= 1'b0;
        @(posedge clk); // one cycle so out_valid deassert settles before wait loops
    endtask

    task automatic run_kat64(input int vi);
        logic [63:0] cap [8];
        reseed(KEYS[vi], IVS[vi]);
        while (!ov64) @(posedge clk);
        for (int i = 0; i < 8; i++) begin @(posedge clk); cap[i] = ks64; end
        for (int j = 0; j < 8; j++)
            `CHK_EQ($sformatf("U64 v%0d word[%0d]", vi, j), cap[j], KAT_FIRST[vi][j])
    endtask

    task automatic run_kat32(input int vi);
        logic [31:0] cap [16];
        logic [63:0] w;
        reseed(KEYS[vi], IVS[vi]);
        while (!ov32) @(posedge clk);
        for (int i = 0; i < 16; i++) begin @(posedge clk); cap[i] = ks32; end
        for (int j = 0; j < 8; j++) begin
            w = {cap[2*j], cap[2*j+1]};
            `CHK_EQ($sformatf("U32 v%0d word[%0d]", vi, j), w, KAT_FIRST[vi][j])
        end
    endtask

    task automatic run_kat1(input int vi);
        logic [511:0] bits;
        logic [63:0]  w;
        reseed(KEYS[vi], IVS[vi]);
        while (!ov1) @(posedge clk);
        bits = '0;
        for (int i = 0; i < 512; i++) begin @(posedge clk); bits[511 - i] = ks1; end
        for (int j = 0; j < 8; j++) begin
            w = '0;
            for (int b = 0; b < 8; b++)
                for (int k = 0; k < 8; k++)
                    w[(7-b)*8 + k] = bits[511 - (j*64 + b*8 + k)];
            `CHK_EQ($sformatf("U1 v%0d word[%0d]", vi, j), w, KAT_FIRST[vi][j])
        end
    endtask

    task automatic run_determinism();
        logic [63:0] a [8], b [8];
        reseed(KEYS[0], IVS[0]); while (!ov64) @(posedge clk);
        for (int i = 0; i < 8; i++) begin @(posedge clk); a[i] = ks64; end
        reseed(KEYS[0], IVS[0]); while (!ov64) @(posedge clk);
        for (int i = 0; i < 8; i++) begin @(posedge clk); b[i] = ks64; end
        for (int j = 0; j < 8; j++)
            `CHK_EQ($sformatf("determinism word %0d", j), a[j], b[j])
    endtask

    task automatic run_reset_mid();
        reseed(KEYS[0], IVS[0]); while (!ov64) @(posedge clk);
        repeat (4) @(posedge clk);
        rst <= 1'b1; @(posedge clk); rst <= 1'b0; @(posedge clk);
        `CHK("reset-mid clears out_valid", ov64 === 1'b0)
        `CHK_EQ("reset-mid clears keystream", ks64, 64'd0)
    endtask

    initial begin
        repeat (5) @(posedge clk); rst = 1'b0; @(posedge clk);
        for (int v = 0; v < 3; v++) run_kat64(v);
        for (int v = 0; v < 3; v++) run_kat32(v);
        for (int v = 0; v < 3; v++) run_kat1 (v);
        run_determinism();
        run_reset_mid();
        `TB_SUMMARY("TRIVIUM_TB")
    end
endmodule
