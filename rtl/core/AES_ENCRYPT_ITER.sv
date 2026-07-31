import AES_PKG::*;
// AES_ENCRYPT_ITER - iterative (rolled) AES encrypt: ONE round datapath reused Nr times
// (MixColumns bypassed on the last round), runtime keysize.  One round's switching per
// cycle -> minimal area, clean high-SNR leakage.  Latency Nr+1; in_valid/out_valid.
module AES_ENCRYPT_ITER (
    input  logic             clk,
    input  logic             rst,
    input  logic             in_valid,
    input  byte_t     [15:0] plaintext,
    input  logic      [ 1:0] keysize,
    input  roundkey_t [14:0] round_keys,
    output logic             out_valid,
    output byte_t     [15:0] ciphertext
);
    logic [3:0] nr;
    always_comb begin
        case (keysize)
            KS_128:  nr = 4'd10;
            KS_192:  nr = 4'd12;
            default: nr = 4'd14;
        endcase
    end

    state_t pt_state;
    AES_BYTES_TO_STATE b2s (
        .bytes_in  (plaintext),
        .state_out (pt_state )
    );

    state_t init_state;
    ADDROUNDKEY ark0 (
        .state_in  (pt_state     ),
        .round_key (round_keys[0]),
        .state_out (init_state   )
    );

    state_t st;
    logic [3:0] cnt;
    logic running;

    state_t sb_out;
    SUBBYTES sb (
        .state_in  (st    ),
        .state_out (sb_out)
    );

    state_t sr_out;
    SHIFTROWS sr (
        .state_in  (sb_out),
        .state_out (sr_out)
    );

    state_t mc_out;
    MIXCOLUMNS mc (
        .state_in  (sr_out),
        .state_out (mc_out)
    );

    logic is_last;
    assign is_last = (cnt == nr);

    state_t mixed;
    assign mixed = is_last ? sr_out : mc_out;

    state_t round_out;
    ADDROUNDKEY ark (
        .state_in  (mixed          ),
        .round_key (round_keys[cnt]),
        .state_out (round_out      )
    );

    always_ff @(posedge clk) begin
        if (rst) begin
            st        <= '0;
            cnt       <= '0;
            running   <= 1'b0;
            out_valid <= 1'b0;
        end else begin
            st        <= st;
            cnt       <= cnt;
            running   <= running;
            out_valid <= 1'b0;
            if (!running) begin
                if (in_valid) begin
                    st      <= init_state;
                    cnt     <= 4'd1;
                    running <= 1'b1;
                end
            end else begin
                st <= round_out;
                if (is_last) begin
                    running   <= 1'b0;
                    out_valid <= 1'b1;
                end else begin
                    cnt <= cnt + 4'd1;
                end
            end
        end
    end

    AES_STATE_TO_BYTES s2b (
        .state_in  (st        ),
        .bytes_out (ciphertext)
    );
endmodule
