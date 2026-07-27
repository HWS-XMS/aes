# ============================================================================
# Leakage-assessment (SCA) harness for the AES cores in ../rtl.
# Uses the HWS-XMS/verilator-sca library via the git submodule (verilator-sca/),
# and builds three Verilator sims of the FULL AES-128 encryption:
#   sim_enc         - unmasked core (baseline, d=0)
#   sim_enc_masked_n2   - DOM-masked core, N=2 (d=1)
#   sim_enc_masked_n3   - DOM-masked core, N=3 (d=2)
#   cmake -S . -B build && cmake --build build -j   (or ./run.sh)
# ============================================================================
cmake_minimum_required(VERSION 3.16)
project(aes_leakage CXX)

find_package(verilator REQUIRED)
add_subdirectory(verilator-sca/lib)   # provides the `sca` target

set(RTL ${CMAKE_CURRENT_SOURCE_DIR}/../rtl)
# Packages must be compiled before their users (Verilator processes files in order).
set(RTL_PKG ${RTL}/core/AES_PKG.sv ${RTL}/core_masked/AES_MASKED_PKG.sv)
file(GLOB RTL_REST
    ${RTL}/core/*.sv
    ${RTL}/core_masked/*.sv
    ${RTL}/keyschedule/*.sv
    ${RTL}/keyschedule_masked/*.sv)
list(REMOVE_ITEM RTL_REST ${RTL_PKG})
set(RTL_SRC ${RTL_PKG} ${RTL_REST})

set(VARGS --vpi --timing --public-flat-rw --output-split 2000 --output-split-cfuncs 2000
    -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM -Wno-UNOPTFLAT -Wno-WIDTHEXPAND
    -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-BLKANDNBLK -Wno-MULTIDRIVEN -Wno-WIDTHCONCAT)

# --- unmasked full AES-128 encryption core (baseline) ---
add_executable(sim_enc tb/sim_main.cpp)
target_compile_definitions(sim_enc PRIVATE
    SIM_TOP_HEADER="Vtb_enc_sca.h" SIM_TOP_TYPE=Vtb_enc_sca)
verilate(sim_enc SOURCES ${RTL_SRC} tb/tb_enc_sca.sv
    TOP_MODULE tb_enc_sca PREFIX Vtb_enc_sca VERILATOR_ARGS ${VARGS})
target_link_libraries(sim_enc PRIVATE sca)

# --- masked full AES-128 encryption core, N shares (one target per N) ---
foreach(NS 2 3)
    set(tgt sim_enc_masked_n${NS})
    add_executable(${tgt} tb/sim_main.cpp)
    target_compile_definitions(${tgt} PRIVATE
        SIM_TOP_HEADER="V${tgt}.h" SIM_TOP_TYPE=V${tgt})
    verilate(${tgt} SOURCES ${RTL_SRC} tb/tb_enc_masked_sca.sv
        TOP_MODULE tb_enc_masked_sca PREFIX V${tgt}
        VERILATOR_ARGS ${VARGS} +define+NSHARES=${NS})
    target_link_libraries(${tgt} PRIVATE sca)
endforeach()

# --- unmasked AES-128 key schedule (baseline) ---
add_executable(sim_keyexp tb/sim_main.cpp)
target_compile_definitions(sim_keyexp PRIVATE
    SIM_TOP_HEADER="Vtb_keyexp_sca.h" SIM_TOP_TYPE=Vtb_keyexp_sca)
verilate(sim_keyexp SOURCES ${RTL_SRC} tb/tb_keyexp_sca.sv
    TOP_MODULE tb_keyexp_sca PREFIX Vtb_keyexp_sca VERILATOR_ARGS ${VARGS})
target_link_libraries(sim_keyexp PRIVATE sca)

# --- masked AES-128 key schedule, N shares (one target per N) ---
foreach(NS 2 3)
    set(tgt sim_keyexp_masked_n${NS})
    add_executable(${tgt} tb/sim_main.cpp)
    target_compile_definitions(${tgt} PRIVATE
        SIM_TOP_HEADER="V${tgt}.h" SIM_TOP_TYPE=V${tgt})
    verilate(${tgt} SOURCES ${RTL_SRC} tb/tb_keyexp_masked_sca.sv
        TOP_MODULE tb_keyexp_masked_sca PREFIX V${tgt}
        VERILATOR_ARGS ${VARGS} +define+NSHARES=${NS})
    target_link_libraries(${tgt} PRIVATE sca)
endforeach()
