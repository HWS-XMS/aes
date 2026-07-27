import AES_PKG::*;
// AES encryption datapath, fully pipelined: one registered stage per round.
// Latency = Nr cycles, throughput = one block/cycle. in_valid is tracked through
// the pipeline and asserted on out_valid when the matching ciphertext is ready.
module AES_ENCRYPT #(
    parameter  KEYSIZE      = 16,
    localparam BLOCKSIZE    = 16,
    localparam Nb           = 4,
    localparam Nk           = KEYSIZE / Nb,
    localparam Nr           = (Nk == 4) ? 10 : (Nk == 6) ? 12 : 14
)(
    input  logic                        clk,
    input  logic                        rst,
    input  logic                        in_valid,
    input  byte_t       [BLOCKSIZE-1:0] plaintext,
    input  byte_t       [KEYSIZE-1:0]   key,
    output logic                        out_valid,
    output byte_t       [BLOCKSIZE-1:0] ciphertext
);

    // Round keys (combinational key schedule; round keys are static per key).
    roundkey_t [Nr:0] round_keys;
    KEY_EXPANSION #(.KEYSIZE(KEYSIZE)) kexp (
        .key        (key),
        .round_keys (round_keys)
    );

    // Input bytes -> state
    state_t pt_state;
    AES_BYTES_TO_STATE plaintext_converter (
        .bytes_in  (plaintext),
        .state_out (pt_state)
    );

    // Pipeline stages: stage[0] = initial AddRoundKey (combinational),
    // stage[1..Nr] = registered round outputs (one register per round).
    state_t stage [0:Nr];

    ADDROUNDKEY initial_add_round_key (
        .state_in   (pt_state),
        .round_key  (round_keys[0]),
        .state_out  (stage[0])
    );

    genvar i;
    generate
        for (i = 1; i < Nr; i++) begin : gen_rounds
            ROUND round_i (
                .clk        (clk),
                .rst        (rst),
                .round_key  (round_keys[i]),
                .state_in   (stage[i-1]),
                .state_out  (stage[i])
            );
        end
    endgenerate

    LASTROUND last_round (
        .clk        (clk),
        .rst        (rst),
        .round_key  (round_keys[Nr]),
        .state_in   (stage[Nr-1]),
        .state_out  (stage[Nr])
    );

    // Ciphertext state -> bytes
    AES_STATE_TO_BYTES ciphertext_converter (
        .state_in  (stage[Nr]),
        .bytes_out (ciphertext)
    );

    // Valid tracking: Nr registered stages => latency Nr cycles.
    logic [Nr-1:0] valid_pipe;
    always_ff @(posedge clk) begin
        if (rst) begin
            valid_pipe <= '0;
        end else begin
            valid_pipe <= {valid_pipe[Nr-2:0], in_valid};
        end
    end
    assign out_valid = valid_pipe[Nr-1];

endmodule
