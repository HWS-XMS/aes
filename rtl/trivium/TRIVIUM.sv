// TRIVIUM - eSTREAM stream cipher (De Cannière & Preneel), parametric UNROLL in [1, 64]
// bits per clock cycle.  Port bit-order matches the ECRYPT test-vector hex strings
// (key/iv bytes bit-reversed on load; output packed LSB-first per byte, byte 0 in MSB).
// Verified against ECRYPT set 1 vectors 0/9/18 - see TRIVIUM_TB.
module TRIVIUM #(
    parameter int UNROLL = 64
) (
    input  logic              clk,
    input  logic              rst,
    input  logic              load,
    input  logic  [79:0]      key,
    input  logic  [79:0]      iv,
    output logic              out_valid,
    output logic [UNROLL-1:0] keystream
);
    initial if (UNROLL < 1 || UNROLL > 64)
        $fatal(1, "TRIVIUM UNROLL must be in [1, 64]; got %0d", UNROLL);

    localparam int WARM_CYCLES = (1152 + UNROLL - 1) / UNROLL;

    function automatic logic [288:0] step(input logic [287:0] s);
        logic t1, t2, t3, z;
        logic [287:0] ns;
        begin
            t1 = s[65]  ^ s[92];
            t2 = s[161] ^ s[176];
            t3 = s[242] ^ s[287];
            z  = t1 ^ t2 ^ t3;
            t1 = t1 ^ (s[90]  & s[91])  ^ s[170];
            t2 = t2 ^ (s[174] & s[175]) ^ s[263];
            t3 = t3 ^ (s[285] & s[286]) ^ s[68];
            ns[287:178] = s[286:177]; ns[177] = t2;
            ns[176:94]  = s[175:93];  ns[93]  = t1;
            ns[92:1]    = s[91:0];    ns[0]   = t3;
            step = {ns, z};
        end
    endfunction

    typedef struct packed {
        logic [287:0]      s_next;
        logic [UNROLL-1:0] z_out;
    } step_result_t;

    localparam int BYTES = UNROLL / 8;

    function automatic step_result_t step_n(input logic [287:0] s);
        logic [287:0]      ns;
        logic [UNROLL-1:0] z;
        logic [288:0]      sn;
        int                byte_idx, bit_off, pos;
        ns = s;
        z  = '0;
        for (int i = 0; i < UNROLL; i++) begin
            sn       = step(ns);
            ns       = sn[288:1];
            byte_idx = i / 8;
            bit_off  = i % 8;
            pos      = (BYTES > 0) ? (BYTES - 1 - byte_idx) * 8 + bit_off : i;
            z[pos]   = sn[0];
        end
        step_n.s_next = ns;
        step_n.z_out  = z;
    endfunction

    function automatic logic [287:0] init_state(
            input logic [79:0] k, input logic [79:0] v);
        logic [79:0] kr, vr;
        for (int b = 0; b < 80; b++) begin
            kr[b] = k[b ^ 3'b111];
            vr[b] = v[b ^ 3'b111];
        end
        init_state = {3'b111, 112'd0, vr, 12'd0, 1'b0, kr};
    endfunction

    logic [287:0]      state;
    logic [11:0]       warm_ctr;
    step_result_t      sr;

    always_comb sr = step_n(state);
    wire [287:0]      state_next = sr.s_next;
    wire [UNROLL-1:0] z_next     = sr.z_out;

    always_ff @(posedge clk) begin
        if (rst) begin
            state     <= '0;
            warm_ctr  <= '0;
            out_valid <= 1'b0;
            keystream <= '0;
        end else if (load) begin
            state     <= init_state(key, iv);
            warm_ctr  <= '0;
            out_valid <= 1'b0;
            keystream <= '0;
        end else if (!out_valid) begin
            state    <= state_next;
            warm_ctr <= warm_ctr + 12'd1;
            if (warm_ctr + 12'd1 >= WARM_CYCLES[11:0]) out_valid <= 1'b1;
        end else begin
            state     <= state_next;
            keystream <= z_next;
        end
    end
endmodule
