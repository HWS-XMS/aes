# ============================================================================
# AES test-suite runner.
#
#   make            - build reference vectors + run every testbench
#   make core       - run test/core/*_TB.sv              (iverilog)
#   make keyschedule- run test/keyschedule/*_TB.sv       (iverilog)
#   make core_ti    - run test/core_ti/*_TB.sv           (verilator, masked)
#   make keyschedule_ti - run test/keyschedule_ti/*_TB.sv(verilator, masked)
#   make ref        - (re)generate reference vectors from OpenSSL + NIST data
#   make <NAME>     - run a single testbench by module name (e.g. make SBOX_TI_TB)
#   make clean
#
# Full-cipher TBs check against OpenSSL vectors; primitive TBs against NIST
# FIPS-197 tables/vectors; masked TBs recombine shares and check the same
# references.  No test checks against a hand-rolled model.
#
# The masked (_ti) tests use Verilator: they evaluate GF(2^8) functions millions
# of times per run, which is far too slow for the iverilog interpreter.
# ============================================================================
SHELL     := /bin/bash
IVERILOG  ?= iverilog -g2012 -gassertions
VVP       ?= vvp
VERILATOR ?= verilator --binary --timing --build-jobs 4 --output-split 2000 --output-split-cfuncs 2000 -CFLAGS -O0 -Wno-fatal -I.
RTL       := ../rtl
REF       := ref
BUILD     := build

# --- RTL source sets (package first for iverilog) ---------------------------
CORE_PKG  := $(RTL)/core/AES_PKG.sv
CORE_RTL  := $(CORE_PKG) $(filter-out $(CORE_PKG),$(wildcard $(RTL)/core/*.sv)) \
             $(wildcard $(RTL)/keyschedule/*.sv)

TI_PKG    := $(wildcard $(RTL)/core_ti/AES_TI_PKG.sv)
TI_RTL    := $(CORE_RTL) $(TI_PKG) \
             $(filter-out $(TI_PKG),$(wildcard $(RTL)/core_ti/*.sv)) \
             $(wildcard $(RTL)/keyschedule_ti/*.sv)

.PHONY: all core keyschedule core_ti keyschedule_ti ref prep clean
all: core keyschedule core_ti keyschedule_ti

ref:
	@cd $(REF) && python3 gen_ref.py

# Stage reference data + RCON.mem where the simulator (run from $(BUILD)) finds them.
prep:
	@mkdir -p $(BUILD)
	@cp -f $(RTL)/keyschedule/RCON.mem $(BUILD)/ 2>/dev/null || true
	@shopt -s nullglob; for f in $(REF)/*.mem $(REF)/*.vec; do cp -f $$f $(BUILD)/; done

# ---- iverilog runner (unmasked) : $(1)=dir  $(2)=rtl ----
define RUN_DIR
	@shopt -s nullglob; fail=0; ran=0; \
	for tb in $(1)/*_TB.sv; do \
	  ran=1; name=$$(basename $$tb .sv); \
	  if $(IVERILOG) -I. -o $(BUILD)/$$name.vvp -s $$name $(2) $$tb 2>$(BUILD)/$$name.clog; then \
	    ( cd $(BUILD) && $(VVP) $$name.vvp >$$name.log 2>&1 ); \
	    if grep -q "TEST PASSED" $(BUILD)/$$name.log && ! grep -q "TEST FAILED" $(BUILD)/$$name.log; then \
	      printf "  \033[32mPASS\033[0m  %s\n" "$$name"; \
	    else printf "  \033[31mFAIL\033[0m  %s\n" "$$name"; sed 's/^/        /' $(BUILD)/$$name.log; fail=1; fi; \
	  else printf "  \033[31mCFAIL\033[0m %s\n" "$$name"; sed 's/^/        /' $(BUILD)/$$name.clog; fail=1; fi; \
	done; \
	if [ $$ran -eq 0 ]; then echo "  (no testbenches in $(1))"; fi; \
	exit $$fail
endef

# ---- verilator runner (masked) : $(1)=dir  $(2)=rtl ----
define VRUN_DIR
	@shopt -s nullglob; fail=0; ran=0; \
	for tb in $(1)/*_TB.sv; do \
	  ran=1; name=$$(basename $$tb .sv); \
	  if $(VERILATOR) --Mdir $(BUILD)/v_$$name --top-module $$name $(2) $$tb -o $$name.exe >$(BUILD)/$$name.clog 2>&1; then \
	    ( cd $(BUILD) && v_$$name/$$name.exe >$$name.log 2>&1 ); \
	    if grep -q "TEST PASSED" $(BUILD)/$$name.log && ! grep -q "TEST FAILED" $(BUILD)/$$name.log; then \
	      printf "  \033[32mPASS\033[0m  %s\n" "$$name"; \
	    else printf "  \033[31mFAIL\033[0m  %s\n" "$$name"; sed 's/^/        /' $(BUILD)/$$name.log; fail=1; fi; \
	  else printf "  \033[31mCFAIL\033[0m %s\n" "$$name"; sed 's/^/        /' $(BUILD)/$$name.clog; fail=1; fi; \
	done; \
	if [ $$ran -eq 0 ]; then echo "  (no testbenches in $(1))"; fi; \
	exit $$fail
endef

core: prep
	@echo "== test/core =="
	$(call RUN_DIR,core,$(CORE_RTL))

keyschedule: prep
	@echo "== test/keyschedule =="
	$(call RUN_DIR,keyschedule,$(CORE_RTL))

core_ti: prep
	@echo "== test/core_ti (masked, verilator) =="
	$(call VRUN_DIR,core_ti,$(TI_RTL))

keyschedule_ti: prep
	@echo "== test/keyschedule_ti (masked, verilator) =="
	$(call VRUN_DIR,keyschedule_ti,$(TI_RTL))

# Single test by module name: make SBOX_TI_TB
%_TB: prep
	@tb=$$(find core keyschedule core_ti keyschedule_ti -name "$@.sv" 2>/dev/null | head -1); \
	if [ -z "$$tb" ]; then echo "no such testbench: $@"; exit 1; fi; \
	dir=$$(dirname $$tb); \
	case $$dir in \
	  core|keyschedule) \
	    $(IVERILOG) -I. -o $(BUILD)/$@.vvp -s $@ $(CORE_RTL) $$tb && ( cd $(BUILD) && $(VVP) $@.vvp ) ;; \
	  *) \
	    $(VERILATOR) --Mdir $(BUILD)/v_$@ --top-module $@ $(TI_RTL) $$tb -o $@.exe >$(BUILD)/$@.clog 2>&1 \
	      && ( cd $(BUILD) && v_$@/$@.exe ) || { sed 's/^/    /' $(BUILD)/$@.clog; exit 1; } ;; \
	esac

clean:
	@rm -rf $(BUILD)
