import AES_PKG::*;
// AES_DECRYPT - fully-unrolled AES decrypt datapath, runtime keysize.  Mirror of
// AES_ENCRYPT: the initial-AddRoundKey(rk_Nr)'d ciphertext is injected into the
// 13-stage inverse chain at stage 5/3/1 for 128/192/256; stage j uses rk[14-j].
// Latency = Nr.
module AES_DECRYPT (
    input  logic             clk,
    input  logic             rst,
    input  logic             in_valid,
    input  byte_t     [15:0] ciphertext,
    input  logic      [ 1:0] keysize,
    input  roundkey_t [14:0] round_keys,
    output logic             out_valid,
    output byte_t     [15:0] plaintext
);
    state_t ct_state;
    AES_BYTES_TO_STATE b2s (
        .bytes_in  (ciphertext),
        .state_out (ct_state  )
    );

    roundkey_t init_key;
    assign init_key = (keysize == KS_128) ? round_keys[10] : (keysize == KS_192) ? round_keys[12] : round_keys[14];

    state_t stage0;
    ADDROUNDKEY ark0 (
        .state_in  (ct_state),
        .round_key (init_key),
        .state_out (stage0  )
    );

    logic [3:0] inject;
    assign inject = (keysize == KS_128) ? 4'd5 : (keysize == KS_192) ? 4'd3 : 4'd1;

    state_t invstage [1:13];
    state_t invin    [1:13];
    genvar j;
    generate
        for (j = 1; j <= 13; j++) begin : g_invround
            if (j == 1) begin
                assign invin[j] = stage0;
            end else begin
                assign invin[j] = (j <= inject) ? stage0 : invstage[j-1];
            end
            INVROUND invr (
                .clk       (clk             ),
                .rst       (rst             ),
                .round_key (round_keys[14-j]),
                .state_in  (invin[j]        ),
                .state_out (invstage[j]     )
            );
        end
    endgenerate

    state_t pt_state;
    INVLASTROUND inv_last (
        .clk       (clk          ),
        .rst       (rst          ),
        .round_key (round_keys[0]),
        .state_in  (invstage[13] ),
        .state_out (pt_state     )
    );

    AES_STATE_TO_BYTES s2b (
        .state_in  (pt_state ),
        .bytes_out (plaintext)
    );

    logic [13:0] vpipe;
    always_ff @(posedge clk) begin
        if (rst) begin
            vpipe <= '0;
        end else begin
            vpipe <= {vpipe[12:0], in_valid};
        end
    end

    assign out_valid = (keysize == KS_128) ? vpipe[9] : (keysize == KS_192) ? vpipe[11] : vpipe[13];
endmodule
