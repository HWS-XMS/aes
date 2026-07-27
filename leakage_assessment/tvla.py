#!/usr/bin/env python3
# ============================================================================
# tvla.py - fixed-vs-random TVLA + simulated power trace for the full-core AES
# leakage study.  Reads the HDF5 traces written by the vendored `sca` library
# (dataset layout: "<group>/<series>_<model>/samples", shape [n_traces, n_cycles],
# each sample = summed Hamming activity over all probed signals that cycle).
#
# Output:
#   * text table: first/second-order max|t| per leakage model (threshold 4.5).
#   * figure (--save): a simulated POWER TRACE (mean per-cycle activity, fixed vs
#     random) on top, and the per-cycle 1st/2nd-order t-traces (HD + HW) below,
#     so leakage is located in time within the idle->encrypt->idle window.
#
# Interpretation (|t| = 4.5, TVLA / ISO 17825):
#   unmasked -> huge 1st-order |t| ; masked N=2 (d=1) -> 1st ok, 2nd leaks ;
#   masked N=3 (d=2) -> 1st and 2nd ok.
# ============================================================================
import argparse
import h5py
import numpy as np

THRESHOLD = 4.5
MODELS = ["hamming_distance", "hamming_weight"]


def welch_t(a, b):
    """Per-cycle Welch t-statistic between trace groups a and b."""
    na, nb = a.shape[0], b.shape[0]
    ma, mb = a.mean(0), b.mean(0)
    va, vb = a.var(0, ddof=1), b.var(0, ddof=1)
    denom = np.sqrt(va / na + vb / nb)
    denom[denom == 0] = np.inf
    return (ma - mb) / denom


def load(path, group, series, model):
    ds = f"{group}/{series}_{model}/samples"
    with h5py.File(path, "r") as f:
        return f[ds][:].astype(np.float64)


def order2(x):
    """Univariate second-order preprocessing: mean-center then square."""
    return (x - x.mean(0)) ** 2


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--fk", required=True)
    ap.add_argument("--rk", required=True)
    ap.add_argument("--group", required=True)
    ap.add_argument("--series", default="aes")
    ap.add_argument("--threshold", type=float, default=THRESHOLD)
    ap.add_argument("--active", type=int, nargs=2, default=None,
                    metavar=("PRE", "LEN"),
                    help="idle-before length and active length (cycles) for shading")
    ap.add_argument("--save", default=None)
    args = ap.parse_args()

    data = {}
    for model in MODELS:
        try:
            data[model] = (load(args.fk, args.group, args.series, model),
                           load(args.rk, args.group, args.series, model))
        except (KeyError, OSError) as e:
            print(f"{model:<18}  (not found: {e})")

    print(f"{'model':<18} {'order':>5} {'max|t|':>10} {'@cyc':>6}  verdict")
    print("-" * 52)
    results = {}
    for model in MODELS:
        if model not in data:
            continue
        fk, rk = data[model]
        for order, (a, b) in enumerate([(fk, rk), (order2(fk), order2(rk))], start=1):
            t = welch_t(a, b)
            i = int(np.nanargmax(np.abs(t)))
            mx = float(np.abs(t[i]))
            verdict = "LEAK" if mx > args.threshold else "ok"
            print(f"{model:<18} {order:>5} {mx:>10.2f} {i:>6}  {verdict}")
            results[(model, order)] = (t, mx, i)

    if not (args.save and data):
        return

    import matplotlib
    matplotlib.use("Agg")
    import matplotlib.pyplot as plt

    any_fk = next(iter(data.values()))[0]
    ncyc, ntr = any_fk.shape[1], any_fk.shape[0]
    x = np.arange(ncyc)

    def shade_active(ax):
        if args.active:
            pre, ln = args.active
            ax.axvspan(pre - 0.5, pre + ln - 0.5, color="tab:orange", alpha=0.12, lw=0)
            ax.axvline(pre - 0.5, color="gray", ls=":", lw=1)
            ax.axvline(pre + ln - 0.5, color="gray", ls=":", lw=1)

    fig = plt.figure(figsize=(14, 11))
    gs = fig.add_gridspec(3, 2, height_ratios=[1.3, 1, 1], hspace=0.38, wspace=0.2)

    # --- simulated power trace (top, full width) ---
    axp = fig.add_subplot(gs[0, :])
    if "hamming_distance" in data:
        axp.plot(x, data["hamming_distance"][0].mean(0), color="tab:blue", lw=1.3,
                 label="fixed plaintext")
        axp.plot(x, data["hamming_distance"][1].mean(0), color="tab:green", lw=1.3,
                 label="random plaintext")
    shade_active(axp)
    if args.active:
        pre, ln = args.active
        axp.text(pre + ln / 2.0, axp.get_ylim()[1] * 0.96, "AES active",
                 ha="center", va="top", fontsize=10, color="tab:orange", weight="bold")
    axp.set_title("simulated power trace  —  mean switching activity "
                  "(Σ Hamming-distance) per cycle")
    axp.set_xlabel("cycle")
    axp.set_ylabel("mean Σ HD")
    axp.legend(loc="upper right", fontsize=9)
    axp.margins(x=0)

    # --- t-traces (2x2: HD/HW x order 1/2) ---
    grid = [("hamming_distance", 1), ("hamming_distance", 2),
            ("hamming_weight", 1), ("hamming_weight", 2)]
    axes = [fig.add_subplot(gs[1, 0]), fig.add_subplot(gs[1, 1]),
            fig.add_subplot(gs[2, 0]), fig.add_subplot(gs[2, 1])]
    for ax, (model, order) in zip(axes, grid):
        if (model, order) in results:
            t, mx, _ = results[(model, order)]
            ax.plot(x, t, color="black", lw=0.9)
            ax.axhline(args.threshold, color="red", ls="--", lw=1)
            ax.axhline(-args.threshold, color="red", ls="--", lw=1)
            ax.fill_between(x, t, 0, where=np.abs(t) > args.threshold,
                            color="red", alpha=0.35)
            shade_active(ax)
            ax.set_title(f"{model}  order {order}   (max|t| = {mx:.1f})", fontsize=10)
        ax.set_xlabel("cycle")
        ax.set_ylabel("t")
        ax.margins(x=0)

    fig.suptitle(f"TVLA — {args.group}   (fixed vs random plaintext, "
                 f"{ntr} traces/group, {ncyc} cycles)", fontsize=13)
    fig.savefig(args.save, dpi=140, bbox_inches="tight")
    print(f"\nsaved {args.save}")


if __name__ == "__main__":
    main()
