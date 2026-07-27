// Block Buffer
// Converts between streaming byte interface and block interface
module BLOCK_BUFFER #(
    parameter BLOCK_SIZE = 128,  // Block size in bits
    parameter DATA_WIDTH = 8     // Stream data width in bits
)(
    input  logic                    clk,
    input  logic                    rst,
    
    // Stream interface (input)
    input  logic                    s_valid,
    output logic                    s_ready,
    input  logic [DATA_WIDTH-1:0]   s_data,
    input  logic                    s_last,
    
    // Block interface (output)
    output logic                    b_valid,
    input  logic                    b_ready,
    output logic [BLOCK_SIZE-1:0]   b_data,
    output logic                    b_last,
    output logic [$clog2(BLOCK_SIZE/8):0] b_bytes  // Number of valid bytes in last block
);
    
    localparam BYTES_PER_BLOCK = BLOCK_SIZE / 8;
    localparam BYTE_IDX_WIDTH = $clog2(BYTES_PER_BLOCK);
    
    // Internal buffer and control
    logic [BLOCK_SIZE-1:0] buffer;
    logic [BYTE_IDX_WIDTH-1:0] byte_count;
    logic last_block;
    
    // FSM states
    typedef enum logic [1:0] {
        IDLE,
        ACCUMULATE,
        SEND_BLOCK
    } state_t;
    
    state_t state, next_state;
    
    // State machine
    always_ff @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (s_valid && s_ready) begin
                    next_state = ACCUMULATE;
                end
            end
            
            ACCUMULATE: begin
                if ((byte_count == BYTES_PER_BLOCK - 1 && s_valid && s_ready) || 
                    (s_last && s_valid && s_ready)) begin
                    next_state = SEND_BLOCK;
                end
            end
            
            SEND_BLOCK: begin
                if (b_valid && b_ready) begin
                    if (last_block) begin
                        next_state = IDLE;
                    end else begin
                        next_state = ACCUMULATE;
                    end
                end
            end
        endcase
    end
    
    // Buffer control
    always_ff @(posedge clk) begin
        if (rst) begin
            buffer <= '0;
            byte_count <= '0;
            last_block <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (s_valid && s_ready) begin
                        buffer[DATA_WIDTH-1:0] <= s_data;
                        byte_count <= 1;
                        last_block <= s_last;
                    end
                end
                
                ACCUMULATE: begin
                    if (s_valid && s_ready) begin
                        buffer[byte_count*DATA_WIDTH +: DATA_WIDTH] <= s_data;
                        
                        if (byte_count == BYTES_PER_BLOCK - 1) begin
                            byte_count <= '0;
                        end else begin
                            byte_count <= byte_count + 1;
                        end
                        
                        if (s_last) begin
                            last_block <= 1'b1;
                        end
                    end
                end
                
                SEND_BLOCK: begin
                    if (b_valid && b_ready && !last_block) begin
                        // Start accumulating next block
                        if (s_valid) begin
                            buffer[DATA_WIDTH-1:0] <= s_data;
                            byte_count <= 1;
                            last_block <= s_last;
                        end else begin
                            byte_count <= '0;
                        end
                    end
                end
            endcase
        end
    end
    
    // Output assignments
    assign s_ready = (state == IDLE) || 
                     (state == ACCUMULATE && byte_count < BYTES_PER_BLOCK - 1) ||
                     (state == SEND_BLOCK && b_ready && !last_block);
    
    assign b_valid = (state == SEND_BLOCK);
    assign b_data = buffer;
    assign b_last = last_block && (state == SEND_BLOCK);
    assign b_bytes = (b_last && byte_count != 0) ? byte_count : BYTES_PER_BLOCK;
    
endmodule : BLOCK_BUFFER