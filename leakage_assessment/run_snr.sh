#!/usr/bin/env bash
# Build + capture SNR traces for the UNROLLED vs ROLLED unmasked encrypt datapaths
# (fixed key, random plaintext, full-datapath probe) and report SNR_rolled/SNR_unrolled.
#   ./run_snr.sh [NTRACES]          (default 1500)
#   BUILD=build_snr ./run_snr.sh 5000
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
NT=${1:-1500}
BUILD=${BUILD:-$HERE/build_snr}
cd "$HERE"

echo "== configure + build =="
cmake -S "$HERE" -B "$BUILD" -DCMAKE_BUILD_TYPE=Release >/dev/null
cmake --build "$BUILD" -j"$(($(nproc)/2))" --target sim_enc_snr sim_enc_iter_snr

cp -f "$HERE/../rtl/keyschedule/RCON.mem" "$BUILD/" 2>/dev/null || true
cp -f "$HERE/config/config_enc_snr.yaml" "$HERE/config/config_enc_iter_snr.yaml" "$BUILD/"

echo "== capture (${NT} traces each) =="
( cd "$BUILD" && ./sim_enc_snr      +ntraces="$NT" +out=trace_enc_snr.h5 )
( cd "$BUILD" && ./sim_enc_iter_snr +ntraces="$NT" +out=trace_enc_iter_snr.h5 )

echo
python3 "$HERE/snr.py" --unrolled "$BUILD/trace_enc_snr.h5" --rolled "$BUILD/trace_enc_iter_snr.h5"
