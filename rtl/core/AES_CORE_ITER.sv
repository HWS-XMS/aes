import AES_PKG::*;
// AES_CORE_ITER - iterative (rolled) keyed AES core: one round datapath reused per
// encrypt/decrypt for minimal area / clean SCA measurement.  Interface is 1:1 with the
// unrolled AES_CORE (drop-in).  One FSM (IDLE/KEYEXP/ENC/DEC; ready, key_loaded; priority
// update_key > encrypt > decrypt).  Round keys stored from KEY_EXPANSION; runtime keysize.
module AES_CORE_ITER (
    input  logic         clk,
    input  logic         rst,
    input  logic         update_key,
    input  logic         encrypt,
    input  logic         decrypt,
    input  logic  [ 1:0] keysize,
    input  byte_t [31:0] key,
    input  byte_t [15:0] plaintext,
    input  byte_t [15:0] ciphertext,
    output logic         ready,
    output logic         key_loaded,
    output byte_t [15:0] data_out
);
    typedef enum logic [1:0] {
        CS_IDLE,
        CS_KEYEXP,
        CS_ENC,
        CS_DEC
    } state_t;
    state_t state;

    logic  [ 1:0] keysize_reg;
    byte_t [31:0] key_reg;
    byte_t [15:0] data_in_reg;

    logic ke_kv;
    logic enc_iv;
    logic dec_iv;
    logic key_ready;
    logic enc_ov;
    logic dec_ov;
    roundkey_t [10:0] round_keys_128;
    roundkey_t [12:0] round_keys_192;
    roundkey_t [14:0] round_keys_256;
    roundkey_t [14:0] round_keys;
    byte_t [15:0] enc_ct;
    byte_t [15:0] dec_pt;

    KEY_EXPANSION ke (
        .clk            (clk           ),
        .rst            (rst           ),
        .key_valid      (ke_kv         ),
        .key            (key_reg       ),
        .key_ready      (key_ready     ),
        .round_keys_128 (round_keys_128),
        .round_keys_192 (round_keys_192),
        .round_keys_256 (round_keys_256)
    );

    integer rr;
    always_comb begin
        round_keys = '0;
        case (keysize_reg)
            KS_128: for (rr = 0; rr <= 10; rr++) begin
                round_keys[rr] = round_keys_128[rr];
            end
            KS_192: for (rr = 0; rr <= 12; rr++) begin
                round_keys[rr] = round_keys_192[rr];
            end
            default: for (rr = 0; rr <= 14; rr++) begin
                round_keys[rr] = round_keys_256[rr];
            end
        endcase
    end

    AES_ENCRYPT_ITER enc (
        .clk        (clk        ),
        .rst        (rst        ),
        .in_valid   (enc_iv     ),
        .plaintext  (data_in_reg),
        .keysize    (keysize_reg),
        .round_keys (round_keys ),
        .out_valid  (enc_ov     ),
        .ciphertext (enc_ct     )
    );

    AES_DECRYPT_ITER dec (
        .clk        (clk        ),
        .rst        (rst        ),
        .in_valid   (dec_iv     ),
        .ciphertext (data_in_reg),
        .keysize    (keysize_reg),
        .round_keys (round_keys ),
        .out_valid  (dec_ov     ),
        .plaintext  (dec_pt     )
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
            data_out    <= '0;
        end else begin
            state       <= state;
            key_loaded  <= key_loaded;
            keysize_reg <= keysize_reg;
            key_reg     <= key_reg;
            data_in_reg <= data_in_reg;
            data_out    <= data_out;
            ke_kv       <= 1'b0;
            enc_iv      <= 1'b0;
            dec_iv      <= 1'b0;
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
                    key_loaded <= 1'b1;
                    state      <= CS_IDLE;
                end
                CS_ENC: if (enc_ov) begin
                    data_out <= enc_ct;
                    state    <= CS_IDLE;
                end
                CS_DEC: if (dec_ov) begin
                    data_out <= dec_pt;
                    state    <= CS_IDLE;
                end
                default: state <= CS_IDLE;
            endcase
        end
    end
endmodule
