import AES_PKG::*;
import AES_MASKED_PKG::*;
// HPC1_MUL - glitch-robust PINI GF(2^8) multiplier, N shares (Cassiers et al.,
// ePrint 2020/185): SNI-refresh operand b, then DOM-multiply a * b'.  Safe for
// dependent operands (e.g. x^2 * x).  Latency 2.  rnd = { refresh, DOM } words.
module HPC1_MUL #(
    parameter  int N   = 2,
    localparam int RRW = ref_rand_words(N),
    localparam int DRW = dom_rand_words(N),
    localparam int RRB = (RRW > 0) ? RRW*8 : 1,
    localparam int DRB = (DRW > 0) ? DRW*8 : 1,
    localparam int HB  = RRB + DRB
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*8-1:0]  a,
    input  logic [N*8-1:0]  b,
    input  logic [HB-1:0]   rnd,
    output logic [N*8-1:0]  c
);
    logic [RRB-1:0] rnd_ref;
    logic [DRB-1:0] rnd_dom;
    assign rnd_ref = rnd[0   +: RRB];
    assign rnd_dom = rnd[RRB +: DRB];

    logic [N*8-1:0] b_ref;
    REFRESH_MASKED #(N) rf (
        .clk (clk    ),
        .rst (rst    ),
        .a   (b      ),
        .rnd (rnd_ref),
        .c   (b_ref  )
    );

    logic [N*8-1:0] a_d;
    logic [DRB-1:0] rnd_dom_d;
    always_ff @(posedge clk) begin
        if (rst) begin
            a_d       <= '0;
            rnd_dom_d <= '0;
        end else begin
            a_d       <= a;
            rnd_dom_d <= rnd_dom;
        end
    end

    DOM_MUL #(N) mul (
        .clk (clk      ),
        .rst (rst      ),
        .a   (a_d      ),
        .b   (b_ref    ),
        .z   (rnd_dom_d),
        .c   (c        )
    );
endmodule
