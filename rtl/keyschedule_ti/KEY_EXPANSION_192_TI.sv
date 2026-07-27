import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// KEY_EXPANSION_192_TI - DOM-masked AES-192 key schedule, N shares.
// Mirror of KEY_EXPANSION_128_TI with Nk=6, Nr=12 (8 SubWords, one per rcon
// column i % 6 == 0).  See KEY_EXPANSION_128_TI for the sharing/settling notes.
// ============================================================================
module KEY_EXPANSION_192_TI #(
    parameter  int N    = 2,
    localparam int Nk   = 6,
    localparam int Nr   = 12,
    localparam int NCOL = (Nr+1)*4,          // 52 columns
    localparam int NSUB = 8,                 // rcon columns 6,12,...,48
    localparam int RW   = N*(N-1)/2,
    localparam int RPS  = 4*RW*8,
    localparam int RTOT = NSUB*4*RPS
)(
    input  logic                        clk,
    input  logic                        rst,
    input  logic [N*192-1:0]            key,          // N shares of the 192-bit key
    input  logic [RTOT-1:0]             rnd,
    output logic [N*(Nr+1)*128-1:0]     round_keys
);
    function automatic byte_t rcon_byte(input int j);
        case (j)
            0: rcon_byte = 8'h01; 1: rcon_byte = 8'h02; 2: rcon_byte = 8'h04;
            3: rcon_byte = 8'h08; 4: rcon_byte = 8'h10; 5: rcon_byte = 8'h20;
            6: rcon_byte = 8'h40; 7: rcon_byte = 8'h80; default: rcon_byte = 8'h00;
        endcase
    endfunction

    logic [N*32-1:0] col [0:NCOL-1];
    genvar c, s, b, i, bb, ss, bx;

    // Initial columns 0..5 from the key shares (column c, row b = key byte 23-(c*4+b)).
    generate
        for (c = 0; c < Nk; c++) begin
            for (s = 0; s < N; s++) begin
                for (b = 0; b < 4; b++) begin
                    assign col[c][s*32 + b*8 +: 8] = key[s*192 + (23-(c*4+b))*8 +: 8];
                end
            end
        end
    endgenerate

    generate
        for (i = Nk; i < NCOL; i++) begin : g_col
            if (i % Nk == 0) begin : g_rcon
                logic [N*32-1:0] rotated, subbed;
                for (ss = 0; ss < N; ss++) begin
                    for (bb = 0; bb < 4; bb++) begin
                        assign rotated[ss*32 + bb*8 +: 8] = col[i-1][ss*32 + ((bb+1)%4)*8 +: 8];
                    end
                end
                for (bx = 0; bx < 4; bx++) begin : g_sub
                    logic [N*8-1:0] xin, yout;
                    for (ss = 0; ss < N; ss++) begin : g_gather
                        assign xin[ss*8 +: 8] = rotated[ss*32 + bx*8 +: 8];
                        assign subbed[ss*32 + bx*8 +: 8] = yout[ss*8 +: 8];
                    end
                    SBOX_TI #(N) sb (
                        .clk(clk), .rst(rst), .x(xin),
                        .rnd(rnd[((i/Nk-1)*4 + bx)*RPS +: RPS]), .y(yout)
                    );
                end
                for (ss = 0; ss < N; ss++) begin
                    for (bb = 0; bb < 4; bb++) begin : g_xor
                        if (ss == 0 && bb == 0) begin
                            assign col[i][bb*8 +: 8] = col[i-Nk][bb*8 +: 8] ^ subbed[bb*8 +: 8] ^ rcon_byte(i/Nk - 1);
                        end else begin
                            assign col[i][ss*32 + bb*8 +: 8] = col[i-Nk][ss*32 + bb*8 +: 8] ^ subbed[ss*32 + bb*8 +: 8];
                        end
                    end
                end
            end else begin : g_simple
                assign col[i] = col[i-1] ^ col[i-Nk];
            end
        end
    endgenerate

    generate
        for (i = 0; i <= Nr; i++) begin
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
