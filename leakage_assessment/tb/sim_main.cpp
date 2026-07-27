// Generic Verilator VPI driver for the leakage (SCA) testbenches.
// The concrete top type is injected by CMake via -DSIM_TOP_HEADER / -DSIM_TOP_TYPE
// so one file serves every leakage testbench.  (Pattern from verilator_sca's
// example/tb/sim_main_sca_sbox.cpp.)
#include <memory>
#include <verilated.h>
#include <verilated_vpi.h>
#include SIM_TOP_HEADER

int main(int argc, char** argv) {
    const auto contextp = std::make_unique<VerilatedContext>();
    contextp->commandArgs(argc, argv);

    const auto top = std::make_unique<SIM_TOP_TYPE>(contextp.get());

    while (!contextp->gotFinish()) {
        top->eval_step();
        VerilatedVpi::callValueCbs();
        top->eval_end_step();
        if (!top->eventsPending()) break;
        contextp->time(top->nextTimeSlot());
    }

    top->final();
    return 0;
}
