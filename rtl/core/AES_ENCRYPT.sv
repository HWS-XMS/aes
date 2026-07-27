import AES_PKG::*;
// AES_ENCRYPT - fully-unrolled AES encrypt datapath, runtime keysize.  Thirteen ROUND
// stages; the size taps the chain after 9/11/13 rounds into one final round.  Round
// keys come from the shared store.  Latency = Nr.
module AES_ENCRYPT (
    input  logic             clk,
    input  logic             rst,
    input  logic             in_valid,
    input  byte_t     [15:0] plaintext,
    input  logic      [ 1:0] keysize,
    input  roundkey_t [14:0] round_keys,
    output logic             out_valid,
    output byte_t     [15:0] ciphertext
);
    state_t pt_state;
    AES_BYTES_TO_STATE b2s (
        .bytes_in  (plaintext),
        .state_out (pt_state )
    );

    state_t stage [0:13];
    ADDROUNDKEY ark0 (
        .state_in  (pt_state     ),
        .round_key (round_keys[0]),
        .state_out (stage[0]     )
    );

    genvar i;
    generate
        for (i = 1; i <= 13; i++) begin : g_round
            ROUND round_i (
                .clk       (clk          ),
                .rst       (rst          ),
                .round_key (round_keys[i]),
                .state_in  (stage[i-1]   ),
                .state_out (stage[i]     )
            );
        end
    endgenerate

    state_t    tap_state;
    roundkey_t last_key;
    assign tap_state = (keysize == KS_128) ? stage[9] : (keysize == KS_192) ? stage[11] : stage[13];
    assign last_key  = (keysize == KS_128) ? round_keys[10] : (keysize == KS_192) ? round_keys[12] : round_keys[14];

    state_t ct_state;
    LASTROUND last_round (
        .clk       (clk      ),
        .rst       (rst      ),
        .round_key (last_key ),
        .state_in  (tap_state),
        .state_out (ct_state )
    );

    AES_STATE_TO_BYTES s2b (
        .state_in  (ct_state  ),
        .bytes_out (ciphertext)
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
