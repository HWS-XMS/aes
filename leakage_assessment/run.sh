#!/usr/bin/env bash
# ============================================================================
# Build + run the FULL-CORE AES leakage study and print the TVLA verdict.
#   ./run.sh [NTRACES]     (default 5000)
#
# For each DUT (unmasked core, masked N=2, masked N=3) it captures a fixed- and a
# random-plaintext trace set over a whole encryption (idle -> encrypt -> idle),
# then runs tvla.py, which writes a figure with a simulated power trace plus the
# per-cycle first/second-order t-traces (HD + HW).
# Expected: unmasked leaks at 1st order; N=2 kills 1st (2nd leaks); N=3 kills both.
# ============================================================================
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
NT=${1:-5000}
BUILD=$HERE/build
cd "$HERE"

[ -f "$HERE/verilator-sca/lib/CMakeLists.txt" ] || {
    echo "ERROR: verilator-sca submodule not initialized."
    echo "  run: git submodule update --init leakage_assessment/verilator-sca"
    exit 1
}

echo "== configure + build =="
cmake -S "$HERE" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release >/dev/null
cmake --build "$BUILD" -j"$(nproc)"

# the unmasked key schedule reads RCON.mem via $readmemh from the run dir
cp -f "$HERE/../rtl/keyschedule/RCON.mem" "$BUILD/"

# run a sim binary for both groups from a dir holding its config
run_pair() {
    local exe=$1 cfg=$2 tag=$3
    cp -f "$HERE/config/$cfg" "$BUILD/"
    ( cd "$BUILD" && ./"$exe" +ntraces="$NT" +out=trace_${tag}_fk.h5 )
    ( cd "$BUILD" && ./"$exe" +ntraces="$NT" +rk +out=trace_${tag}_rk.h5 )
}

echo "== capture traces (${NT} per group) =="
run_pair sim_enc        config_enc.yaml     unmasked
run_pair sim_enc_masked_n2  config_enc_masked.yaml  masked_n2
run_pair sim_enc_masked_n3  config_enc_masked.yaml  masked_n3

echo
echo "############### TVLA: UNMASKED AES-128 core (expect 1st-order LEAK) ###############"
python3 "$HERE/tvla.py" --fk "$BUILD/trace_unmasked_fk.h5" --rk "$BUILD/trace_unmasked_rk.h5" \
    --group enc --series aes --active 10 10 --save "$BUILD/tvla_unmasked.png"
echo
echo "############### TVLA: MASKED N=2 core (expect 1st ok, 2nd LEAK) #################"
python3 "$HERE/tvla.py" --fk "$BUILD/trace_masked_n2_fk.h5" --rk "$BUILD/trace_masked_n2_rk.h5" \
    --group enc_masked --series aes --active 10 40 --save "$BUILD/tvla_masked_n2.png"
echo
echo "############### TVLA: MASKED N=3 core (expect 1st + 2nd ok) #####################"
python3 "$HERE/tvla.py" --fk "$BUILD/trace_masked_n3_fk.h5" --rk "$BUILD/trace_masked_n3_rk.h5" \
    --group enc_masked --series aes --active 10 40 --save "$BUILD/tvla_masked_n3.png"
