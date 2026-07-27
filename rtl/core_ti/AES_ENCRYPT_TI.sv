import AES_PKG::*;
import AES_TI_PKG::*;
// AES_ENCRYPT_TI - fully-unrolled DOM-masked encrypt datapath, runtime keysize.
// Thirteen ROUND_TI stages (each 8 cycles); the size taps the share-state after
// 9/11/13 rounds into one LASTROUND_TI.  Round keys are the N-share store; rnd is
// fresh DOM randomness every cycle.  Latency = Nr*SBOX_LAT.
module AES_ENCRYPT_TI #(
    parameter  int N     = 2,
    localparam int RPERR = 16*sbox_rand_words(N)*8,
    localparam int RNDW  = 14*RPERR
)(
    input  logic                clk,
    input  logic                rst,
    input  logic                in_valid,
    input  logic [1:0]          keysize,
    input  logic [N*128-1:0]    state_in,
    input  logic [N*15*128-1:0] round_keys,
    input  logic [RNDW-1:0]     rnd,
    output logic                out_valid,
    output logic [N*128-1:0]    state_out
);
    logic [N*128-1:0] st_in;
    genvar g;
    generate
        for (g = 0; g < N; g++) begin
            AES_BYTES_TO_STATE b2s (
                .bytes_in  (state_in[g*128 +: 128]),
                .state_out (st_in[g*128 +: 128]   )
            );
        end
    endgenerate

    logic [N*128-1:0] stg [0:13];
    ADDROUNDKEY_TI #(N) ark0 (
        .state_in  (st_in                       ),
        .key_in    (round_keys[0*N*128 +: N*128]),
        .state_out (stg[0]                      )
    );

    genvar i;
    generate
        for (i = 1; i <= 13; i++) begin : g_round
            ROUND_TI #(N) round_i (
                .clk       (clk                         ),
                .rst       (rst                         ),
                .state_in  (stg[i-1]                    ),
                .round_key (round_keys[i*N*128 +: N*128]),
                .rnd       (rnd[(i-1)*RPERR +: RPERR]   ),
                .state_out (stg[i]                      )
            );
        end
    endgenerate

    logic [N*128-1:0] tap_state;
    logic [N*128-1:0] last_key;
    assign tap_state = (keysize == KS_128) ? stg[9] : (keysize == KS_192) ? stg[11] : stg[13];
    assign last_key  = (keysize == KS_128) ? round_keys[10*N*128 +: N*128] : (keysize == KS_192) ? round_keys[12*N*128 +: N*128] : round_keys[14*N*128 +: N*128];

    logic [N*128-1:0] ct_state;
    LASTROUND_TI #(N) last_round (
        .clk       (clk                   ),
        .rst       (rst                   ),
        .state_in  (tap_state             ),
        .round_key (last_key              ),
        .rnd       (rnd[13*RPERR +: RPERR]),
        .state_out (ct_state              )
    );

    generate
        for (g = 0; g < N; g++) begin
            AES_STATE_TO_BYTES s2b (
                .state_in  (ct_state[g*128 +: 128] ),
                .bytes_out (state_out[g*128 +: 128])
            );
        end
    endgenerate

    localparam int VW = 14*SBOX_LAT;
    logic [VW-1:0] vpipe;
    always_ff @(posedge clk) begin
        if (rst) begin
            vpipe <= '0;
        end else begin
            vpipe <= {vpipe[VW-2:0], in_valid};
        end
    end

    assign out_valid = (keysize == KS_128) ? vpipe[10*SBOX_LAT-1] : (keysize == KS_192) ? vpipe[12*SBOX_LAT-1] : vpipe[14*SBOX_LAT-1];
endmodule
