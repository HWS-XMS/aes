#!/usr/bin/env bash
# ============================================================================
# Build + run the AES-128 KEY-SCHEDULE leakage study and print the TVLA verdict.
#   ./run_keyexp.sh [NTRACES]          (default 5000)
#   BUILD=build_ks ./run_keyexp.sh 200 (isolated build dir, e.g. smoke test)
#
# Fixed-vs-random KEY TVLA over the key schedule: unmasked baseline, masked N=2,
# masked N=3.  Each trace clocks a full expansion (idle -> expand -> idle); tvla.py
# writes a figure with a simulated power trace plus per-cycle 1st/2nd-order
# t-traces (HD + HW).
# Expected: unmasked leaks at 1st order; N=2 kills 1st (2nd leaks); N=3 kills both.
# ============================================================================
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
NT=${1:-5000}
BUILD=${BUILD:-$HERE/build}
cd "$HERE"

[ -f "$HERE/verilator-sca/lib/CMakeLists.txt" ] || {
    echo "ERROR: verilator-sca submodule not initialized."
    echo "  run: git submodule update --init leakage_assessment/verilator-sca"
    exit 1
}

echo "== configure + build =="
cmake -S "$HERE" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release >/dev/null
cmake --build "$BUILD" -j"$(($(nproc)/2))" \
    --target sim_keyexp sim_keyexp_masked_n2 sim_keyexp_masked_n3

# the unmasked key schedule reads RCON.mem via $readmemh from the run dir
cp -f "$HERE/../rtl/keyschedule/RCON.mem" "$BUILD/"

# run a sim binary for both groups (fixed / random key) from a dir holding its config
run_pair() {
    local exe=$1 cfg=$2 tag=$3
    cp -f "$HERE/config/$cfg" "$BUILD/"
    ( cd "$BUILD" && ./"$exe" +ntraces="$NT" +out=trace_${tag}_fk.h5 )
    ( cd "$BUILD" && ./"$exe" +ntraces="$NT" +rk +out=trace_${tag}_rk.h5 )
}

echo "== capture traces (${NT} per group) =="
run_pair sim_keyexp        config_keyexp.yaml     keyexp_unmasked
run_pair sim_keyexp_masked_n2  config_keyexp_masked.yaml  keyexp_masked_n2
run_pair sim_keyexp_masked_n3  config_keyexp_masked.yaml  keyexp_masked_n3

echo
echo "########### TVLA: UNMASKED AES-128 key schedule (expect 1st-order LEAK) ###########"
python3 "$HERE/tvla.py" --fk "$BUILD/trace_keyexp_unmasked_fk.h5" --rk "$BUILD/trace_keyexp_unmasked_rk.h5" \
    --group keyexp --series aes --active 10 11 --save "$BUILD/tvla_keyexp_unmasked.png"
echo
echo "########### TVLA: MASKED N=2 key schedule (expect 1st ok, 2nd LEAK) #############"
python3 "$HERE/tvla.py" --fk "$BUILD/trace_keyexp_masked_n2_fk.h5" --rk "$BUILD/trace_keyexp_masked_n2_rk.h5" \
    --group keyexp_masked --series aes --active 10 80 --save "$BUILD/tvla_keyexp_masked_n2.png"
echo
echo "########### TVLA: MASKED N=3 key schedule (expect 1st + 2nd ok) #################"
python3 "$HERE/tvla.py" --fk "$BUILD/trace_keyexp_masked_n3_fk.h5" --rk "$BUILD/trace_keyexp_masked_n3_rk.h5" \
    --group keyexp_masked --series aes --active 10 80 --save "$BUILD/tvla_keyexp_masked_n3.png"
