import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// KEY_EXPANSION_128_TI - DOM-masked AES-128 key schedule, N shares.
//
// Mirrors the unmasked KEY_EXPANSION_128 but every value is carried as N Boolean
// shares: RotWord and the column XORs are linear (share-wise), Rcon is a public
// constant (XORed into one share), and SubWord uses the DOM-masked SBOX_TI.
// Because SBOX_TI is pipelined, the round keys ripple out over several cycles;
// with a stable key they settle (recombined) after the deepest SubWord chain.
//
// round_keys layout matches AES_ENCRYPT_TI:
//   share s of round key r, column c, row b =
//       round_keys[r*N*128 + s*128 + c*32 + b*8 +: 8]
// Recombining (XOR) the N shares of each round key yields the exact schedule.
// ============================================================================
module KEY_EXPANSION_128_TI #(
    parameter  int N    = 2,
    localparam int Nk   = 4,
    localparam int Nr   = 10,
    localparam int NCOL = (Nr+1)*4,          // 44 columns
    localparam int RW   = N*(N-1)/2,
    localparam int RPS  = 4*RW*8,            // random bits per S-box
    localparam int RTOT = Nr*4*RPS           // Nr SubWords * 4 S-boxes
)(
    input  logic                        clk,
    input  logic                        rst,
    input  logic [N*128-1:0]            key,          // N shares of the key
    input  logic [RTOT-1:0]             rnd,
    output logic [N*(Nr+1)*128-1:0]     round_keys    // N shares of 11 round keys
);
    // AES Rcon (top byte), FIPS-197.
    function automatic byte_t rcon_byte(input int j);
        case (j)
            0: rcon_byte = 8'h01; 1: rcon_byte = 8'h02; 2: rcon_byte = 8'h04;
            3: rcon_byte = 8'h08; 4: rcon_byte = 8'h10; 5: rcon_byte = 8'h20;
            6: rcon_byte = 8'h40; 7: rcon_byte = 8'h80; 8: rcon_byte = 8'h1b;
            9: rcon_byte = 8'h36; default: rcon_byte = 8'h00;
        endcase
    endfunction

    // Key-schedule columns, each carried as N shares of a 32-bit word.
    logic [N*32-1:0] col [0:NCOL-1];

    genvar c, s, b, i, bb, ss, bx;

    // Initial columns 0..3 come straight from the key shares (same byte mapping
    // as KEY_EXPANSION_128: column c, row b = key byte 15-(c*4+b)).
    generate
        for (c = 0; c < Nk; c++) begin
            for (s = 0; s < N; s++) begin
                for (b = 0; b < 4; b++) begin
                    assign col[c][s*32 + b*8 +: 8] = key[s*128 + (15-(c*4+b))*8 +: 8];
                end
            end
        end
    endgenerate

    // Column recurrence.
    generate
        for (i = Nk; i < NCOL; i++) begin : g_col
            if (i % Nk == 0) begin : g_rcon
                logic [N*32-1:0] rotated, subbed;

                // RotWord (share-wise): rotated byte b = col[i-1] byte (b+1)%4
                for (ss = 0; ss < N; ss++) begin
                    for (bb = 0; bb < 4; bb++) begin
                        assign rotated[ss*32 + bb*8 +: 8] = col[i-1][ss*32 + ((bb+1)%4)*8 +: 8];
                    end
                end

                // SubWord: one DOM-masked S-box per byte position.
                for (bx = 0; bx < 4; bx++) begin : g_sub
                    logic [N*8-1:0] xin, yout;
                    for (ss = 0; ss < N; ss++) begin : g_gather
                        assign xin[ss*8 +: 8] = rotated[ss*32 + bx*8 +: 8];
                        assign subbed[ss*32 + bx*8 +: 8] = yout[ss*8 +: 8];
                    end
                    SBOX_TI #(N) sb (
                        .clk(clk), .rst(rst),
                        .x  (xin),
                        .rnd(rnd[((i/Nk-1)*4 + bx)*RPS +: RPS]),
                        .y  (yout)
                    );
                end

                // col[i] = col[i-4] ^ SubWord(RotWord(col[i-1])), Rcon into share 0 byte 0
                for (ss = 0; ss < N; ss++) begin
                    for (bb = 0; bb < 4; bb++) begin : g_xor
                        if (ss == 0 && bb == 0) begin
                            assign col[i][bb*8 +: 8] = col[i-4][bb*8 +: 8] ^ subbed[bb*8 +: 8] ^ rcon_byte(i/Nk - 1);
                        end else begin
                            assign col[i][ss*32 + bb*8 +: 8] = col[i-4][ss*32 + bb*8 +: 8] ^ subbed[ss*32 + bb*8 +: 8];
                        end
                    end
                end
            end else begin : g_simple
                assign col[i] = col[i-1] ^ col[i-4];   // share-wise XOR
            end
        end
    endgenerate

    // Map columns to shared round keys.
    generate
        for (i = 0; i <= Nr; i++) begin              // round key index r = i
            for (c = 0; c < 4; c++) begin
                for (s = 0; s < N; s++) begin
                    for (b = 0; b < 4; b++) begin
                        assign round_keys[i*N*128 + s*128 + c*32 + b*8 +: 8] = col[i*4 + c][s*32 + b*8 +: 8];
                    end
                end
            end
        end
    endgenerate
endmodule
