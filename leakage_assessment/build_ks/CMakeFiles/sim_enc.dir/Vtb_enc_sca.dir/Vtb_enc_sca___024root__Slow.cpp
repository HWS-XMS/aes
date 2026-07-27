// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

// Parameter definitions for Vtb_enc_sca___024root
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__PRE;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__NR;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__POST;
constexpr VlWide<4>/*127:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__FIXED_PT;
constexpr VlWide<4>/*127:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__FIXED_KEY;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__Nk;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__Nr;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__NCOL;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__NG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__0__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__1__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__2__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__3__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__4__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__5__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__6__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__7__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__8__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__9__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__10__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__11__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__12__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__13__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__14__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__15__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__16__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__17__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__18__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__19__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__20__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__21__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__22__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__23__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__24__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__25__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__26__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__27__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__28__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__29__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__30__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__31__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__32__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__33__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__34__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__35__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__36__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__37__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__38__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__39__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__40__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__41__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__42__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk3__BRA__43__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__Nk;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__Nr;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__NCOL;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__NG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__0__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__1__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__2__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__3__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__4__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__5__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__6__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__7__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__8__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__9__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__10__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__11__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__12__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__13__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__14__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__15__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__16__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__17__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__18__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__19__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__20__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__21__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__22__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__23__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__24__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__25__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__26__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__27__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__28__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__29__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__30__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__31__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__32__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__33__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__34__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__35__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__36__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__37__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__38__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__39__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__40__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__41__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__42__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__43__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__44__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__45__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__46__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__47__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__48__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__49__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__50__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk3__BRA__51__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__Nk;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__Nr;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__NCOL;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__NG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__0__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__1__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__2__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__3__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__4__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__5__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__6__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__7__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__8__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__9__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__10__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__11__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__12__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__13__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__14__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__15__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__16__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__17__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__18__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__19__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__20__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__21__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__22__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__23__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__24__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__25__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__26__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__27__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__28__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__29__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__30__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__31__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__32__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__33__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__34__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__35__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__36__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__37__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__38__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__39__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__40__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__41__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__42__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__43__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__44__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__45__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__46__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__47__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__48__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__49__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__50__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__51__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__52__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__53__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__54__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__55__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__56__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__57__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__58__KET____DOT__STG;
constexpr IData/*31:0*/ Vtb_enc_sca___024root::tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk3__BRA__59__KET____DOT__STG;


void Vtb_enc_sca___024root___ctor_var_reset(Vtb_enc_sca___024root* vlSelf);

Vtb_enc_sca___024root::Vtb_enc_sca___024root(Vtb_enc_sca__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_enc_sca___024root___ctor_var_reset(this);
}

void Vtb_enc_sca___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_enc_sca___024root::~Vtb_enc_sca___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
