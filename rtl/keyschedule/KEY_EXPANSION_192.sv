import AES_PKG::*;
// KEY_EXPANSION_192 - pipelined AES-192 key schedule (Nk=6, Nr=12), one stage per
// Nk-column group.  Mirror of KEY_EXPANSION_128.  Reference: NIST FIPS-197 App. A.
module KEY_EXPANSION_192 (
    input  logic             clk,
    input  logic             rst,
    input  logic             key_valid,
    input  byte_t     [23:0] key,
    output logic             key_ready,
    output roundkey_t [12:0] round_keys
);
    localparam int Nk   = 6;
    localparam int Nr   = 12;
    localparam int NCOL = (Nr + 1) * 4;
    localparam int NG   = (NCOL + Nk - 1) / Nk;

    logic [31:0] rcon [0:9];
    initial $readmemh("RCON.mem", rcon);

    column_t col_reg [0:NCOL-1];
    column_t col_nxt [0:NCOL-1];

    genvar c;
    genvar k;
    genvar b;
    genvar r;

    // stage 0: first Nk columns straight from the key
    generate
        for (k = 0; k < Nk; k++) begin
            for (b = 0; b < 4; b++) begin
                assign col_nxt[k][b] = key[23 - (k*4 + b)];
            end
        end
    endgenerate

    // stages 1..NG-1: RotWord -> SubWord -> Rcon -> XOR col[c-Nk], else plain XOR
    generate
        for (c = Nk; c < NCOL; c++) begin
            if (c % Nk == 0) begin
                column_t rotw;
                column_t subw;
                assign rotw[0] = col_reg[c-1][1];
                assign rotw[1] = col_reg[c-1][2];
                assign rotw[2] = col_reg[c-1][3];
                assign rotw[3] = col_reg[c-1][0];
                SBOX s0 (
                    .sbox_in  (rotw[0]),
                    .sbox_out (subw[0])
                );
                SBOX s1 (
                    .sbox_in  (rotw[1]),
                    .sbox_out (subw[1])
                );
                SBOX s2 (
                    .sbox_in  (rotw[2]),
                    .sbox_out (subw[2])
                );
                SBOX s3 (
                    .sbox_in  (rotw[3]),
                    .sbox_out (subw[3])
                );
                assign col_nxt[c][0] = col_reg[c-Nk][0] ^ subw[0] ^ rcon[c/Nk-1][31:24];
                assign col_nxt[c][1] = col_reg[c-Nk][1] ^ subw[1] ^ rcon[c/Nk-1][23:16];
                assign col_nxt[c][2] = col_reg[c-Nk][2] ^ subw[2] ^ rcon[c/Nk-1][15:8];
                assign col_nxt[c][3] = col_reg[c-Nk][3] ^ subw[3] ^ rcon[c/Nk-1][7:0];
            end else begin
                assign col_nxt[c] = col_nxt[c-1] ^ col_reg[c-Nk];
            end
        end
    endgenerate

    logic [NG-1:0] sh;
    always_ff @(posedge clk) begin
        if (rst) begin
            sh        <= '0;
            key_ready <= 1'b0;
        end else begin
            sh <= {sh[NG-2:0], key_valid};
            if (key_valid) begin
                key_ready <= 1'b0;
            end else if (sh[NG-1]) begin
                key_ready <= 1'b1;
            end else begin
                key_ready <= key_ready;
            end
        end
    end

    generate
        for (c = 0; c < NCOL; c++) begin
            localparam int STG = c / Nk;
            always_ff @(posedge clk) begin
                if (rst) begin
                    col_reg[c] <= '0;
                end else if (STG == 0 ? key_valid : sh[STG-1]) begin
                    col_reg[c] <= col_nxt[c];
                end else begin
                    col_reg[c] <= col_reg[c];
                end
            end
        end
    endgenerate

    generate
        for (r = 0; r <= Nr; r++) begin
            for (k = 0; k < 4; k++) begin
                assign round_keys[r][k] = col_reg[r*4 + k];
            end
        end
    endgenerate
endmodule
