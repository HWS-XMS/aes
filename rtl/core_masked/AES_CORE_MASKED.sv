import AES_PKG::*;
import AES_MASKED_PKG::*;
// AES_CORE_MASKED - DOM-masked keyed AES core, N shares, one FSM (IDLE/KEYEXP/ENC/DEC;
// ready, key_loaded, no error flag; strobes sampled in IDLE, priority
// update_key > encrypt > decrypt).  Runtime keysize; masking order N compile-time.
// Round-key shares are latched into rk_reg at key_ready (they toggle every cycle).
module AES_CORE_MASKED #(
    parameter  int N     = 2,
    localparam int RPERR = 16*sbox_rand_words(N)*8,
    localparam int RNDW  = 14*RPERR,
    localparam int KRTOT = 31*4*sbox_rand_words(N)*8
)(
    input  logic             clk,
    input  logic             rst,
    input  logic             update_key,
    input  logic             encrypt,
    input  logic             decrypt,
    input  logic [1:0]       keysize,
    input  logic [N*256-1:0] key,
    input  logic [N*128-1:0] plaintext,
    input  logic [N*128-1:0] ciphertext,
    input  logic [RNDW-1:0]  rnd,
    input  logic [KRTOT-1:0] key_rnd,
    output logic             ready,
    output logic             key_loaded,
    output logic [N*128-1:0] data_out
);
    typedef enum logic [1:0] {
        CS_IDLE,
        CS_KEYEXP,
        CS_ENC,
        CS_DEC
    } state_t;
    state_t state;

    logic [1:0]       keysize_reg;
    logic [N*256-1:0] key_reg;
    logic [N*128-1:0] data_in_reg;

    logic ke_kv;
    logic enc_iv;
    logic dec_iv;
    logic key_ready;
    logic enc_ov;
    logic dec_ov;
    logic [N*11*128-1:0] rk128;
    logic [N*13*128-1:0] rk192;
    logic [N*15*128-1:0] rk256;
    logic [N*15*128-1:0] rk_reg;
    logic [N*128-1:0]    enc_out;
    logic [N*128-1:0]    dec_out;

    KEY_EXPANSION_MASKED #(N) ke (
        .clk            (clk      ),
        .rst            (rst      ),
        .key_valid      (ke_kv    ),
        .key            (key_reg  ),
        .rnd            (key_rnd  ),
        .key_ready      (key_ready),
        .round_keys_128 (rk128    ),
        .round_keys_192 (rk192    ),
        .round_keys_256 (rk256    )
    );

    logic [N*15*128-1:0] rk_mux;
    integer rr;
    always_comb begin
        rk_mux = '0;
        case (keysize_reg)
            KS_128: for (rr = 0; rr <= 10; rr++) begin
                rk_mux[rr*N*128 +: N*128] = rk128[rr*N*128 +: N*128];
            end
            KS_192: for (rr = 0; rr <= 12; rr++) begin
                rk_mux[rr*N*128 +: N*128] = rk192[rr*N*128 +: N*128];
            end
            default: rk_mux = rk256;
        endcase
    end

    AES_ENCRYPT_MASKED #(N) enc (
        .clk        (clk        ),
        .rst        (rst        ),
        .in_valid   (enc_iv     ),
        .keysize    (keysize_reg),
        .state_in   (data_in_reg),
        .round_keys (rk_reg     ),
        .rnd        (rnd        ),
        .out_valid  (enc_ov     ),
        .state_out  (enc_out    )
    );

    AES_DECRYPT_MASKED #(N) dec (
        .clk        (clk        ),
        .rst        (rst        ),
        .in_valid   (dec_iv     ),
        .keysize    (keysize_reg),
        .state_in   (data_in_reg),
        .round_keys (rk_reg     ),
        .rnd        (rnd        ),
        .out_valid  (dec_ov     ),
        .state_out  (dec_out    )
    );

    assign ready = (state == CS_IDLE);

    always_ff @(posedge clk) begin
        if (rst) begin
            state       <= CS_IDLE;
            key_loaded  <= 1'b0;
            ke_kv       <= 1'b0;
            enc_iv      <= 1'b0;
            dec_iv      <= 1'b0;
            keysize_reg <= '0;
            key_reg     <= '0;
            data_in_reg <= '0;
            rk_reg      <= '0;
            data_out    <= '0;
        end else begin
            state      <= state;
            key_loaded <= key_loaded;
            ke_kv      <= 1'b0;
            enc_iv     <= 1'b0;
            dec_iv     <= 1'b0;
            case (state)
                CS_IDLE: begin
                    if (update_key) begin
                        keysize_reg <= keysize;
                        key_reg     <= key;
                        ke_kv       <= 1'b1;
                        state       <= CS_KEYEXP;
                    end else if (encrypt) begin
                        data_in_reg <= plaintext;
                        enc_iv      <= 1'b1;
                        state       <= CS_ENC;
                    end else if (decrypt) begin
                        data_in_reg <= ciphertext;
                        dec_iv      <= 1'b1;
                        state       <= CS_DEC;
                    end
                end
                CS_KEYEXP: if (key_ready && !ke_kv) begin
                    rk_reg     <= rk_mux;
                    key_loaded <= 1'b1;
                    state      <= CS_IDLE;
                end
                CS_ENC: if (enc_ov) begin
                    data_out <= enc_out;
                    state    <= CS_IDLE;
                end
                CS_DEC: if (dec_ov) begin
                    data_out <= dec_out;
                    state    <= CS_IDLE;
                end
                default: state <= CS_IDLE;
            endcase
        end
    end
endmodule
