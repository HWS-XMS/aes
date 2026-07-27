import AES_PKG::*;
import AES_TI_PKG::*;
// AES_DECRYPT_TI - fully-unrolled DOM-masked decrypt datapath, runtime keysize.
// Every size ends the same way, so size is handled on the INPUT side: the
// initial-AddRoundKey(rk_Nr)'d share-state is injected into the 13-stage inverse
// chain at stage 5/3/1 for 128/192/256.  Stage j takes rk[14-j].  rnd is fresh DOM
// randomness every cycle.  Latency = Nr*SBOX_LAT.
module AES_DECRYPT_TI #(
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
    logic [N*128-1:0] init_key;
    assign init_key = (keysize == KS_128) ? round_keys[10*N*128 +: N*128] : (keysize == KS_192) ? round_keys[12*N*128 +: N*128] : round_keys[14*N*128 +: N*128];

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

    logic [N*128-1:0] stg0;
    ADDROUNDKEY_TI #(N) ark0 (
        .state_in  (st_in   ),
        .key_in    (init_key),
        .state_out (stg0    )
    );

    logic [3:0] inject;
    assign inject = (keysize == KS_128) ? 4'd5 : (keysize == KS_192) ? 4'd3 : 4'd1;

    logic [N*128-1:0] invstage [1:13];
    logic [N*128-1:0] invin    [1:13];
    genvar j;
    generate
        for (j = 1; j <= 13; j++) begin : g_invround
            if (j == 1) begin
                assign invin[j] = stg0;
            end else begin
                assign invin[j] = (j <= inject) ? stg0 : invstage[j-1];
            end
            INVROUND_TI #(N) invr (
                .clk       (clk                              ),
                .rst       (rst                              ),
                .state_in  (invin[j]                         ),
                .round_key (round_keys[(14-j)*N*128 +: N*128]),
                .rnd       (rnd[(j-1)*RPERR +: RPERR]        ),
                .state_out (invstage[j]                      )
            );
        end
    endgenerate

    logic [N*128-1:0] pt_state;
    INVLASTROUND_TI #(N) inv_last (
        .clk       (clk                         ),
        .rst       (rst                         ),
        .state_in  (invstage[13]                ),
        .round_key (round_keys[0*N*128 +: N*128]),
        .rnd       (rnd[13*RPERR +: RPERR]      ),
        .state_out (pt_state                    )
    );

    generate
        for (g = 0; g < N; g++) begin
            AES_STATE_TO_BYTES s2b (
                .state_in  (pt_state[g*128 +: 128] ),
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
