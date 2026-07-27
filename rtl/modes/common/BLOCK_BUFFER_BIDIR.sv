// Bidirectional Block Buffer
// Converts between streaming byte interface and block interface
// Can operate in either direction based on REVERSE parameter
module BLOCK_BUFFER #(
    parameter BLOCK_SIZE = 128,  // Block size in bits
    parameter DATA_WIDTH = 8,    // Stream data width in bits
    parameter REVERSE = 0        // 0=stream to block, 1=block to stream
)(
    input  logic                    clk,
    input  logic                    rst,
    
    // Stream interface
    input  logic                    s_valid,
    output logic                    s_ready,
    input  logic [DATA_WIDTH-1:0]   s_data,
    input  logic                    s_last,
    input  logic [$clog2(BLOCK_SIZE/8):0] s_bytes, // Valid bytes (REVERSE=1 only)
    
    // Block interface
    output logic                    m_valid,
    input  logic                    m_ready,
    output logic [BLOCK_SIZE-1:0]   m_data,
    output logic [$clog2(BLOCK_SIZE/8):0] m_bytes,  // Valid bytes in block
    output logic                    m_last
);
    
    localparam BYTES_PER_BLOCK = BLOCK_SIZE / DATA_WIDTH;
    localparam BYTE_IDX_WIDTH = $clog2(BYTES_PER_BLOCK);
    
    generate
        if (REVERSE == 0) begin : gen_stream_to_block
            // Original BLOCK_BUFFER functionality
            logic [BLOCK_SIZE-1:0] buffer;
            logic [BYTE_IDX_WIDTH:0] byte_count;
            
            typedef enum logic [1:0] {
                IDLE,
                ACCUMULATE,
                SEND_BLOCK
            } state_t;
            
            state_t state, next_state;
            
            always_ff @(posedge clk) begin
                if (rst) begin
                    state <= IDLE;
                    buffer <= '0;
                    byte_count <= '0;
                end else begin
                    state <= next_state;
                    
                    if (state == IDLE && s_valid) begin
                        buffer <= '0;
                        byte_count <= '0;
                    end
                    
                    if (state == ACCUMULATE && s_valid && s_ready) begin
                        buffer[byte_count * DATA_WIDTH +: DATA_WIDTH] <= s_data;
                        byte_count <= byte_count + 1'b1;
                    end
                    
                    if (state == SEND_BLOCK && m_valid && m_ready) begin
                        buffer <= '0;
                        byte_count <= '0;
                    end
                end
            end
            
            always_comb begin
                next_state = state;
                case (state)
                    IDLE: begin
                        if (s_valid) begin
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
                        if (m_valid && m_ready) begin
                            next_state = s_valid ? ACCUMULATE : IDLE;
                        end
                    end
                    
                    default: next_state = IDLE;
                endcase
            end
            
            assign s_ready = (state == ACCUMULATE);
            assign m_valid = (state == SEND_BLOCK);
            assign m_data = buffer;
            assign m_bytes = (state == SEND_BLOCK) ? byte_count : '0;
            assign m_last = (state == SEND_BLOCK) && 
                           (byte_count < BYTES_PER_BLOCK || s_last);
                           
        end else begin : gen_block_to_stream
            // Block to stream conversion
            logic [BLOCK_SIZE-1:0] buffer;
            logic [BYTE_IDX_WIDTH:0] byte_count;
            logic [BYTE_IDX_WIDTH:0] total_bytes;
            logic block_last;
            
            typedef enum logic [1:0] {
                IDLE,
                LOAD_BLOCK,
                SEND_STREAM
            } state_t;
            
            state_t state, next_state;
            
            always_ff @(posedge clk) begin
                if (rst) begin
                    state <= IDLE;
                    buffer <= '0;
                    byte_count <= '0;
                    total_bytes <= '0;
                    block_last <= 1'b0;
                end else begin
                    state <= next_state;
                    
                    if (state == LOAD_BLOCK && s_valid && s_ready) begin
                        buffer <= s_data;
                        total_bytes <= (s_bytes == 0) ? BYTES_PER_BLOCK : s_bytes;
                        byte_count <= '0;
                        block_last <= s_last;
                    end
                    
                    if (state == SEND_STREAM && m_valid && m_ready) begin
                        byte_count <= byte_count + 1'b1;
                    end
                end
            end
            
            always_comb begin
                next_state = state;
                case (state)
                    IDLE: begin
                        if (s_valid) begin
                            next_state = LOAD_BLOCK;
                        end
                    end
                    
                    LOAD_BLOCK: begin
                        if (s_valid && s_ready) begin
                            next_state = SEND_STREAM;
                        end
                    end
                    
                    SEND_STREAM: begin
                        if (byte_count == total_bytes - 1 && m_valid && m_ready) begin
                            next_state = s_valid ? LOAD_BLOCK : IDLE;
                        end
                    end
                    
                    default: next_state = IDLE;
                endcase
            end
            
            assign s_ready = (state == IDLE) || (state == LOAD_BLOCK);
            assign m_valid = (state == SEND_STREAM) && (byte_count < total_bytes);
            assign m_data = buffer[byte_count * DATA_WIDTH +: DATA_WIDTH];
            assign m_bytes = 1;  // Always 1 byte at a time in stream mode
            assign m_last = (state == SEND_STREAM) && 
                           (byte_count == total_bytes - 1) && block_last;
        end
    endgenerate
    
endmodule : BLOCK_BUFFER