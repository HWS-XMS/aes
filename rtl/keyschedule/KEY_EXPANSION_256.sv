import AES_PKG::*;
module KEY_EXPANSION_256 #(
    localparam KEYSIZE      = 32,
    localparam BLOCKSIZE    = 16,
    localparam Nb           = 4,
    localparam Nk           = KEYSIZE / 4,
    localparam Nr           = 14
)(
    input  byte_t       [KEYSIZE-1:0]   key,
    output roundkey_t   [Nr:0]          round_keys
);

    // RCON values for key expansion
    logic [31:0] rcon [0:9];
    initial begin
        $readmemh("RCON.mem", rcon);
    end

    // Expanded key columns (60 columns for AES-256: (Nr+1)*Nb = 15*4 = 60)
    column_t [((Nr+1)*Nb)-1:0] key_columns;
    
    // Initial key columns - direct mapping from input key
    // Key bytes are in order: k0,k1,k2,...,k31
    // Column 0: k0,k1,k2,k3
    // Column 1: k4,k5,k6,k7
    // Column 2: k8,k9,k10,k11
    // Column 3: k12,k13,k14,k15
    // Column 4: k16,k17,k18,k19
    // Column 5: k20,k21,k22,k23
    // Column 6: k24,k25,k26,k27
    // Column 7: k28,k29,k30,k31
    genvar k;
    generate
        for (k = 0; k < Nk; k++) begin : gen_initial_key
            assign key_columns[k][0] = key[31 - (k*4 + 0)];
            assign key_columns[k][1] = key[31 - (k*4 + 1)];
            assign key_columns[k][2] = key[31 - (k*4 + 2)];
            assign key_columns[k][3] = key[31 - (k*4 + 3)];
        end
    endgenerate
    
    // Key expansion - generate remaining columns
    genvar i;
    generate
        for (i = Nk; i < (Nr+1)*Nb; i++) begin : gen_key_expansion
            if (i % Nk == 0) begin : gen_rcon_round
                // For columns that are multiples of Nk, apply the key schedule core
                column_t rotated, subbed, rconned;
                
                // RotWord
                assign rotated[0] = key_columns[i-1][1];
                assign rotated[1] = key_columns[i-1][2];
                assign rotated[2] = key_columns[i-1][3];
                assign rotated[3] = key_columns[i-1][0];
                
                // SubWord
                SBOX sb0 (.sbox_in(rotated[0]), .sbox_out(subbed[0]));
                SBOX sb1 (.sbox_in(rotated[1]), .sbox_out(subbed[1]));
                SBOX sb2 (.sbox_in(rotated[2]), .sbox_out(subbed[2]));
                SBOX sb3 (.sbox_in(rotated[3]), .sbox_out(subbed[3]));
                
                // XOR with RCON
                assign rconned[0] = subbed[0] ^ rcon[i/Nk - 1][31:24];
                assign rconned[1] = subbed[1] ^ rcon[i/Nk - 1][23:16];
                assign rconned[2] = subbed[2] ^ rcon[i/Nk - 1][15:8];
                assign rconned[3] = subbed[3] ^ rcon[i/Nk - 1][7:0];
                
                // XOR with column Nk positions back
                assign key_columns[i][0] = key_columns[i-Nk][0] ^ rconned[0];
                assign key_columns[i][1] = key_columns[i-Nk][1] ^ rconned[1];
                assign key_columns[i][2] = key_columns[i-Nk][2] ^ rconned[2];
                assign key_columns[i][3] = key_columns[i-Nk][3] ^ rconned[3];
            end else if (i % Nk == 4) begin : gen_sub_round
                // For AES-256, when i mod 8 = 4, apply SubWord only
                column_t subbed;
                
                // SubWord
                SBOX sb0 (.sbox_in(key_columns[i-1][0]), .sbox_out(subbed[0]));
                SBOX sb1 (.sbox_in(key_columns[i-1][1]), .sbox_out(subbed[1]));
                SBOX sb2 (.sbox_in(key_columns[i-1][2]), .sbox_out(subbed[2]));
                SBOX sb3 (.sbox_in(key_columns[i-1][3]), .sbox_out(subbed[3]));
                
                // XOR with column Nk positions back
                assign key_columns[i][0] = key_columns[i-Nk][0] ^ subbed[0];
                assign key_columns[i][1] = key_columns[i-Nk][1] ^ subbed[1];
                assign key_columns[i][2] = key_columns[i-Nk][2] ^ subbed[2];
                assign key_columns[i][3] = key_columns[i-Nk][3] ^ subbed[3];
            end else begin : gen_simple_round
                // For other columns, simple XOR
                assign key_columns[i][0] = key_columns[i-1][0] ^ key_columns[i-Nk][0];
                assign key_columns[i][1] = key_columns[i-1][1] ^ key_columns[i-Nk][1];
                assign key_columns[i][2] = key_columns[i-1][2] ^ key_columns[i-Nk][2];
                assign key_columns[i][3] = key_columns[i-1][3] ^ key_columns[i-Nk][3];
            end
        end
    endgenerate
    
    // Map key columns to round keys
    // Each round key consists of 4 consecutive columns
    genvar r;
    generate
        for (r = 0; r <= Nr; r++) begin : gen_round_keys
            assign round_keys[r][0][0] = key_columns[r*4 + 0][0];
            assign round_keys[r][0][1] = key_columns[r*4 + 0][1];
            assign round_keys[r][0][2] = key_columns[r*4 + 0][2];
            assign round_keys[r][0][3] = key_columns[r*4 + 0][3];
            
            assign round_keys[r][1][0] = key_columns[r*4 + 1][0];
            assign round_keys[r][1][1] = key_columns[r*4 + 1][1];
            assign round_keys[r][1][2] = key_columns[r*4 + 1][2];
            assign round_keys[r][1][3] = key_columns[r*4 + 1][3];
            
            assign round_keys[r][2][0] = key_columns[r*4 + 2][0];
            assign round_keys[r][2][1] = key_columns[r*4 + 2][1];
            assign round_keys[r][2][2] = key_columns[r*4 + 2][2];
            assign round_keys[r][2][3] = key_columns[r*4 + 2][3];
            
            assign round_keys[r][3][0] = key_columns[r*4 + 3][0];
            assign round_keys[r][3][1] = key_columns[r*4 + 3][1];
            assign round_keys[r][3][2] = key_columns[r*4 + 3][2];
            assign round_keys[r][3][3] = key_columns[r*4 + 3][3];
        end
    endgenerate

endmodule