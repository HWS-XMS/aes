import AES_PKG::*;
import AES_MASKED_PKG::*;
// KEY_EXPANSION_128_MASKED - DOM-masked AES-128 key schedule, N shares.  RotWord and
// the column XORs are share-wise linear; Rcon is a constant into one share; SubWord
// is the masked SBOX_MASKED.  With a stable key the round keys settle after the deepest
// SubWord chain; key_ready rises LKS = Nr*SBOX_LAT cycles after key_valid.
module KEY_EXPANSION_128_MASKED #(
    parameter  int N    = 2,
    localparam int Nk   = 4,
    localparam int Nr   = 10,
    localparam int NCOL = (Nr+1)*4,
    localparam int RPS  = sbox_rand_words(N)*8,
    localparam int RTOT = Nr*4*RPS,
    localparam int LKS  = Nr*SBOX_LAT
)(
    input  logic                    clk,
    input  logic                    rst,
    input  logic                    key_valid,
    input  logic [N*128-1:0]        key,
    input  logic [RTOT-1:0]         rnd,
    output logic                    key_ready,
    output logic [N*(Nr+1)*128-1:0] round_keys
);
    function automatic byte_t rcon_byte(input int j);
        case (j)
            0: rcon_byte = 8'h01;
            1: rcon_byte = 8'h02;
            2: rcon_byte = 8'h04;
            3: rcon_byte = 8'h08;
            4: rcon_byte = 8'h10;
            5: rcon_byte = 8'h20;
            6: rcon_byte = 8'h40;
            7: rcon_byte = 8'h80;
            8: rcon_byte = 8'h1b;
            9: rcon_byte = 8'h36;
            default: rcon_byte = 8'h00;
        endcase
    endfunction

    logic [N*32-1:0] col [0:NCOL-1];

    genvar c;
    genvar s;
    genvar b;
    genvar i;
    genvar bb;
    genvar ss;
    genvar bx;

    // initial columns 0..3 from the key shares (column c, row b = key byte 15-(c*4+b))
    generate
        for (c = 0; c < Nk; c++) begin
            for (s = 0; s < N; s++) begin
                for (b = 0; b < 4; b++) begin
                    assign col[c][s*32 + b*8 +: 8] = key[s*128 + (15-(c*4+b))*8 +: 8];
                end
            end
        end
    endgenerate

    // column recurrence: rcon columns do RotWord + SubWord + Rcon, others plain XOR
    generate
        for (i = Nk; i < NCOL; i++) begin
            if (i % Nk == 0) begin
                logic [N*32-1:0] rotated;
                logic [N*32-1:0] subbed;
                for (ss = 0; ss < N; ss++) begin
                    for (bb = 0; bb < 4; bb++) begin
                        assign rotated[ss*32 + bb*8 +: 8] = col[i-1][ss*32 + ((bb+1)%4)*8 +: 8];
                    end
                end
                for (bx = 0; bx < 4; bx++) begin
                    logic [N*8-1:0] xin;
                    logic [N*8-1:0] yout;
                    for (ss = 0; ss < N; ss++) begin
                        assign xin[ss*8 +: 8] = rotated[ss*32 + bx*8 +: 8];
                        assign subbed[ss*32 + bx*8 +: 8] = yout[ss*8 +: 8];
                    end
                    SBOX_MASKED #(N) sb (
                        .clk (clk                              ),
                        .rst (rst                              ),
                        .x   (xin                              ),
                        .rnd (rnd[((i/Nk-1)*4 + bx)*RPS +: RPS]),
                        .y   (yout                             )
                    );
                end
                for (ss = 0; ss < N; ss++) begin
                    for (bb = 0; bb < 4; bb++) begin
                        if (ss == 0 && bb == 0) begin
                            assign col[i][bb*8 +: 8] = col[i-4][bb*8 +: 8] ^ subbed[bb*8 +: 8] ^ rcon_byte(i/Nk - 1);
                        end else begin
                            assign col[i][ss*32 + bb*8 +: 8] = col[i-4][ss*32 + bb*8 +: 8] ^ subbed[ss*32 + bb*8 +: 8];
                        end
                    end
                end
            end else begin
                assign col[i] = col[i-1] ^ col[i-4];
            end
        end
    endgenerate

    // map columns to shared round keys
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

    // key_ready rises LKS cycles after key_valid (reset-free re-keying)
    logic [LKS-1:0] kv_pipe;
    always_ff @(posedge clk) begin
        if (rst) begin
            kv_pipe   <= '0;
            key_ready <= 1'b0;
        end else begin
            kv_pipe <= {kv_pipe[LKS-2:0], key_valid};
            if (key_valid) begin
                key_ready <= 1'b0;
            end else if (kv_pipe[LKS-1]) begin
                key_ready <= 1'b1;
            end else begin
                key_ready <= key_ready;
            end
        end
    end
endmodule
