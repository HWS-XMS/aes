// GHASH Function for GCM Authentication
// Computes authentication tag using Galois field multiplication
module GHASH 
    import AES_PKG::*;
(
    input  logic         clk,
    input  logic         rst,
    
    // Control
    input  logic         start,      // Start new GHASH computation
    input  logic         update,     // Update with new block
    input  logic         finalize,   // Complete computation
    output logic         busy,       // Processing
    output logic         done,       // Result ready
    
    // Data inputs
    input  logic [127:0] h,          // Hash subkey (AES(0) using key)
    input  logic [127:0] block_in,   // Input block (AAD or ciphertext)
    input  logic         last_block, // Indicates last block
    
    // Length inputs (for final block)
    input  logic [63:0]  aad_len,    // Length of AAD in bits
    input  logic [63:0]  ct_len,     // Length of ciphertext in bits
    
    // Output
    output logic [127:0] tag         // Authentication tag
);
    
    // State machine
    typedef enum logic [2:0] {
        GHASH_IDLE,
        GHASH_PROCESS,
        GHASH_MULTIPLY,
        GHASH_FINALIZE,
        GHASH_DONE
    } ghash_state_t;
    
    ghash_state_t state, next_state;
    
    // Internal registers
    logic [127:0] accumulator;       // Running GHASH value
    logic [127:0] mult_input_a;      // Input A to multiplier
    logic [127:0] mult_input_b;      // Input B to multiplier (usually H)
    logic [127:0] mult_result;       // Multiplication result
    logic mult_start;                // Start multiplication
    logic mult_done;                 // Multiplication complete
    
    // Instantiate GF multiplier
    GF_MULT_128 gf_mult (
        .a(mult_input_a),
        .b(mult_input_b),
        .product(mult_result)
    );
    
    // For this combinational multiplier, multiplication is instant
    assign mult_done = mult_start;
    
    // State machine
    always_ff @(posedge clk) begin
        if (rst) begin
            state <= GHASH_IDLE;
            accumulator <= 128'h0;
            tag <= 128'h0;
        end else begin
            state <= next_state;
            
            case (state)
                GHASH_IDLE: begin
                    if (start) begin
                        accumulator <= 128'h0;
                    end
                end
                
                GHASH_PROCESS: begin
                    if (update) begin
                        // XOR new block with accumulator
                        accumulator <= accumulator ^ block_in;
                    end
                end
                
                GHASH_MULTIPLY: begin
                    if (mult_done) begin
                        // Update accumulator with multiplication result
                        accumulator <= mult_result;
                    end
                end
                
                GHASH_FINALIZE: begin
                    // For final block, include lengths
                    // Length block format: [64-bit AAD length][64-bit CT length]
                    logic [127:0] len_block;
                    len_block = {aad_len, ct_len};
                    accumulator <= accumulator ^ len_block;
                end
                
                GHASH_DONE: begin
                    // Final multiplication and output
                    if (mult_done) begin
                        tag <= mult_result;
                    end
                end
            endcase
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        mult_start = 1'b0;
        mult_input_a = accumulator;
        mult_input_b = h;
        
        case (state)
            GHASH_IDLE: begin
                if (start) begin
                    next_state = GHASH_PROCESS;
                end
            end
            
            GHASH_PROCESS: begin
                if (update) begin
                    next_state = GHASH_MULTIPLY;
                    mult_start = 1'b1;
                end else if (finalize) begin
                    next_state = GHASH_FINALIZE;
                end
            end
            
            GHASH_MULTIPLY: begin
                if (mult_done) begin
                    if (last_block && finalize) begin
                        next_state = GHASH_FINALIZE;
                    end else begin
                        next_state = GHASH_PROCESS;
                    end
                end
            end
            
            GHASH_FINALIZE: begin
                next_state = GHASH_DONE;
                mult_start = 1'b1;
            end
            
            GHASH_DONE: begin
                if (mult_done) begin
                    next_state = GHASH_IDLE;
                end
            end
        endcase
    end
    
    // Status outputs
    assign busy = (state != GHASH_IDLE) && (state != GHASH_DONE);
    assign done = (state == GHASH_DONE) && mult_done;
    
endmodule : GHASH