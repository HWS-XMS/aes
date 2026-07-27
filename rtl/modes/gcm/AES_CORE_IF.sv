// AES Core Interface Definition
interface AES_CORE_IF;
    logic         start;
    logic         encrypt;
    logic         ready;
    logic         valid;
    logic [127:0] block_in;
    logic [127:0] block_out;
    logic [255:0] key;  // Support up to 256-bit keys
    
    // Master port (used by MODE_GCM)
    modport master (
        output start, encrypt, block_in, key,
        input  ready, valid, block_out
    );
    
    // Slave port (used by AES_CORE)
    modport slave (
        input  start, encrypt, block_in, key,
        output ready, valid, block_out
    );
endinterface