// GF(2^8) constant multipliers (mod 0x11B) built from doubling: xtime and sums.

module MUL_2 (
    input  logic [7:0] data_in,
    output logic [7:0] data_out
);
    assign data_out = data_in[7] ? ((data_in << 1) ^ 8'h1b) : (data_in << 1);
endmodule

module MUL_3 (
    input  logic [7:0] data_in,
    output logic [7:0] data_out
);
    logic [7:0] tmp;
    MUL_2 mul_2_1 (
        .data_in  (data_in),
        .data_out (tmp    )
    );
    assign data_out = tmp ^ data_in;
endmodule

module MUL_4 (
    input  logic [7:0] data_in,
    output logic [7:0] data_out
);
    logic [7:0] tmp;
    MUL_2 mul_2_1 (
        .data_in  (data_in),
        .data_out (tmp    )
    );
    MUL_2 mul_2_2 (
        .data_in  (tmp     ),
        .data_out (data_out)
    );
endmodule

module MUL_8 (
    input  logic [7:0] data_in,
    output logic [7:0] data_out
);
    logic [7:0] tmp1;
    logic [7:0] tmp2;
    MUL_2 mul_2_1 (
        .data_in  (data_in),
        .data_out (tmp1   )
    );
    MUL_2 mul_2_2 (
        .data_in  (tmp1),
        .data_out (tmp2)
    );
    MUL_2 mul_2_3 (
        .data_in  (tmp2    ),
        .data_out (data_out)
    );
endmodule

module MUL_9 (
    input  logic [7:0] data_in,
    output logic [7:0] data_out
);
    logic [7:0] tmp1;
    MUL_8 mul_8_1 (
        .data_in  (data_in),
        .data_out (tmp1   )
    );
    assign data_out = tmp1 ^ data_in;
endmodule

module MUL_11 (
    input  logic [7:0] data_in,
    output logic [7:0] data_out
);
    logic [7:0] tmp_1;
    logic [7:0] tmp_2;
    MUL_8 mul_8_1 (
        .data_in  (data_in),
        .data_out (tmp_1  )
    );
    MUL_2 mul_2_1 (
        .data_in  (data_in),
        .data_out (tmp_2  )
    );
    assign data_out = tmp_1 ^ tmp_2 ^ data_in;
endmodule

module MUL_13 (
    input  logic [7:0] data_in,
    output logic [7:0] data_out
);
    logic [7:0] tmp_1;
    logic [7:0] tmp_2;
    MUL_8 mul_8_1 (
        .data_in  (data_in),
        .data_out (tmp_1  )
    );
    MUL_4 mul_4_1 (
        .data_in  (data_in),
        .data_out (tmp_2  )
    );
    assign data_out = tmp_1 ^ tmp_2 ^ data_in;
endmodule

module MUL_14 (
    input  logic [7:0] data_in,
    output logic [7:0] data_out
);
    logic [7:0] tmp_1;
    logic [7:0] tmp_2;
    logic [7:0] tmp_3;
    MUL_8 mul_8_1 (
        .data_in  (data_in),
        .data_out (tmp_1  )
    );
    MUL_4 mul_4_1 (
        .data_in  (data_in),
        .data_out (tmp_2  )
    );
    MUL_2 mul_2_1 (
        .data_in  (data_in),
        .data_out (tmp_3  )
    );
    assign data_out = tmp_1 ^ tmp_2 ^ tmp_3;
endmodule
