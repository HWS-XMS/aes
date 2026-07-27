#!/usr/bin/env python3
# ============================================================================
# Reference-vector generator for the AES test suite.
#
# Verification philosophy (per project requirement): NEVER test the RTL against
# a hand-rolled software AES used as a "golden model".  Instead:
#   * Full-cipher vectors (enc/dec, all key sizes) come from OpenSSL via the
#     python `cryptography` library - an established, authoritative implementation.
#   * Primitive references are NIST FIPS-197 published constants: the S-box table
#     (Fig. 7) and the Appendix B worked-example intermediate states (hard-coded
#     in test/tb_util.svh).
#   * The key-schedule reference uses the standard expansion (S-box + Rcon + XOR,
#     no free parameters) and is *validated* against the FIPS-197 Appendix A anchor
#     before being emitted.
#
# All files are one hex value per line (loadable with $readmemh).  Deterministic
# (fixed seed) so the vectors are reproducible.
# ============================================================================
import os, random
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

HERE = os.path.dirname(os.path.abspath(__file__))
RNG  = random.Random(0xA5C0DE)
N_RANDOM = 20            # random full-cipher KATs per key size (plus FIPS anchor)
N_KEYS   = 6             # random keys per size for key-schedule test (plus anchor)

def write_lines(name, lines):
    with open(os.path.join(HERE, name), "w") as f:
        f.write("\n".join(lines) + "\n")

# --- NIST FIPS-197 AES S-box (Figure 7) -------------------------------------
SBOX = bytes.fromhex(
    "637c777bf26b6fc53001672bfed7ab76" "ca82c97dfa5947f0add4a2af9ca472c0"
    "b7fd9326363ff7cc34a5e5f171d83115" "04c723c31896059a071280e2eb27b275"
    "09832c1a1b6e5aa0523bd6b329e32f84" "53d100ed20fcb15b6acbbe394a4c58cf"
    "d0efaafb434d338545f9027f503c9fa8" "51a3408f929d38f5bcb6da2110fff3d2"
    "cd0c13ec5f974417c4a77e3d645d1973" "60814fdc222a908846eeb814de5e0bdb"
    "e0323a0a4906245cc2d3ac629195e479" "e7c8376d8dd54ea96c56f4ea657aae08"
    "ba78252e1ca6b4c6e8dd741f4bbd8b8a" "703eb5664803f60e613557b986c11d9e"
    "e1f8981169d98e949b1e87e9ce5528df" "8ca1890dbfe6426841992d0fb054bb16"
)
assert len(SBOX) == 256
INV_SBOX = bytearray(256)
for i, s in enumerate(SBOX):
    INV_SBOX[s] = i

# --- OpenSSL single-block ECB (no padding) ----------------------------------
def aes_enc(key, pt):
    e = Cipher(algorithms.AES(key), modes.ECB()).encryptor()
    return e.update(pt) + e.finalize()

FIPS_PT = bytes.fromhex("00112233445566778899aabbccddeeff")
FIPS_KEYS = {
    16: bytes.fromhex("000102030405060708090a0b0c0d0e0f"),
    24: bytes.fromhex("000102030405060708090a0b0c0d0e0f1011121314151617"),
    32: bytes.fromhex("000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f"),
}
FIPS_CT = {
    16: "69c4e0d86a7b0430d8cdb78070b4c55a",
    24: "dda97ca4864cdfe06eaf70a0ec0d7191",
    32: "8ea2b7ca516745bfeafc49904b496089",
}

def gen_ecb_vectors():
    for klen in (16, 24, 32):
        assert aes_enc(FIPS_KEYS[klen], FIPS_PT).hex() == FIPS_CT[klen], "toolchain mismatch"
        b = klen * 8
        pts  = [FIPS_PT.hex()]
        keys = [FIPS_KEYS[klen].hex()]
        cts  = [FIPS_CT[klen]]
        for _ in range(N_RANDOM):
            pt  = bytes(RNG.getrandbits(8) for _ in range(16))
            key = bytes(RNG.getrandbits(8) for _ in range(klen))
            pts.append(pt.hex()); keys.append(key.hex()); cts.append(aes_enc(key, pt).hex())
        write_lines(f"aes{b}_pt.mem",  pts)
        write_lines(f"aes{b}_key.mem", keys)
        write_lines(f"aes{b}_ct.mem",  cts)

# --- Standard key expansion (S-box + Rcon + XOR), validated vs FIPS-197 App.A -
def xtime(a):
    a <<= 1
    return (a ^ 0x11b) & 0xff if a & 0x100 else a & 0xff

def key_expansion(key, nk):
    nr = nk + 6
    w = [key[4*i:4*i+4] for i in range(nk)]
    rcon = 1
    for i in range(nk, 4*(nr+1)):
        t = bytearray(w[i-1])
        if i % nk == 0:
            t = t[1:] + t[:1]
            t = bytearray(SBOX[x] for x in t)
            t[0] ^= rcon
            rcon = xtime(rcon)
        elif nk > 6 and i % nk == 4:
            t = bytearray(SBOX[x] for x in t)
        w.append(bytes(a ^ c for a, c in zip(w[i-nk], t)))
    return w

_w = key_expansion(bytes.fromhex("2b7e151628aed2a6abf7158809cf4f3c"), 4)
assert [x.hex() for x in _w[4:8]] == ["a0fafe17", "88542cb1", "23a33939", "2a6c7605"], \
    "key expansion does not match FIPS-197 App. A"

def gen_keyexp_vectors():
    for klen, nk in ((16, 4), (24, 6), (32, 8)):
        b = klen * 8
        keys = [FIPS_KEYS[klen]] + [bytes(RNG.getrandbits(8) for _ in range(klen))
                                    for _ in range(N_KEYS)]
        keyhex, whex = [], []
        for key in keys:
            keyhex.append(key.hex())
            whex.extend(x.hex() for x in key_expansion(key, nk))
        write_lines(f"keyexp{b}_key.mem", keyhex)
        write_lines(f"keyexp{b}_w.mem",   whex)

if __name__ == "__main__":
    write_lines("sbox.mem",    [f"{x:02x}" for x in SBOX])
    write_lines("invsbox.mem", [f"{x:02x}" for x in INV_SBOX])
    gen_ecb_vectors()
    gen_keyexp_vectors()
    # Explicit counts (Verilator has no X to mark unused array entries).
    write_lines("ecb_nvec.mem",   [f"{1+N_RANDOM:x}"])
    write_lines("keyexp_nkey.mem", [f"{1+N_KEYS:x}"])
    print("reference vectors written to", HERE)
