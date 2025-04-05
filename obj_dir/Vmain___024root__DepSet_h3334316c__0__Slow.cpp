// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"

#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___eval_static(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_initial(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial\n"); );
    // Body
    Vmain___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->main__DOT__IF_Stage_instance__DOT__PC = 0U;
    vlSelf->main__DOT__IFInstruction_DCInstruction = 0x13U;
    VL_READMEM_N(true, 8, 16777216, 0, std::string{"prg.txt"}
                 ,  &(vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vmain___024root___eval_final(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmain___024root___eval_triggers__stl(Vmain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmain___024root___eval_stl(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_settle(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmain___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("main.sv", 6, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmain___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->main__DOT__MM_Stage_instance__DOT__dataOutWire = 0U;
    if ((4U & (IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode) 
                      >> 1U)))) {
            vlSelf->main__DOT__MM_Stage_instance__DOT__dataOutWire 
                = ((1U & (IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode))
                    ? ((vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                        [(1U | (0xfffffeU & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                        << 8U) | vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                       [(0xfffffeU & vlSelf->main__DOT__EXaddressOut_MMaddress)])
                    : vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                   [(0xffffffU & vlSelf->main__DOT__EXaddressOut_MMaddress)]);
        }
    } else if ((2U & (IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode))) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode)))) {
            vlSelf->main__DOT__MM_Stage_instance__DOT__dataOutWire 
                = ((vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                    [(3U | (0xfffffcU & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                    << 0x18U) | ((vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                                  [(2U | (0xfffffcU 
                                          & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                                  << 0x10U) | ((vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                                                [(1U 
                                                  | (0xfffffcU 
                                                     & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                                                << 8U) 
                                               | vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                                               [(0xfffffcU 
                                                 & vlSelf->main__DOT__EXaddressOut_MMaddress)])));
        }
    } else {
        vlSelf->main__DOT__MM_Stage_instance__DOT__dataOutWire 
            = ((1U & (IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode))
                ? (((- (IData)((1U & (vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                                      [(1U | (0xfffffeU 
                                              & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                                      >> 7U)))) << 0x10U) 
                   | ((vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                       [(1U | (0xfffffeU & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                       << 8U) | vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                      [(0xfffffeU & vlSelf->main__DOT__EXaddressOut_MMaddress)]))
                : (((- (IData)((1U & (vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                                      [(0xffffffU & vlSelf->main__DOT__EXaddressOut_MMaddress)] 
                                      >> 7U)))) << 8U) 
                   | vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram
                   [(0xffffffU & vlSelf->main__DOT__EXaddressOut_MMaddress)]));
    }
    vlSelf->main__DOT__EXStall = 0U;
    if ((((((IData)(vlSelf->main__DOT__DCrs1Out_RFrs1) 
            == (IData)(vlSelf->main__DOT__EXrdOut_MMrd)) 
           | ((IData)(vlSelf->main__DOT__DCrs2Out_RFrs2) 
              == (IData)(vlSelf->main__DOT__EXrdOut_MMrd))) 
          & (0U != (IData)(vlSelf->main__DOT__EXrdOut_MMrd))) 
         | ((((IData)(vlSelf->main__DOT__DCrs1Out_RFrs1) 
              == (IData)(vlSelf->main__DOT__MMrdOut_RFrd)) 
             | ((IData)(vlSelf->main__DOT__DCrs2Out_RFrs2) 
                == (IData)(vlSelf->main__DOT__MMrdOut_RFrd))) 
            & (0U != (IData)(vlSelf->main__DOT__MMrdOut_RFrd))))) {
        vlSelf->main__DOT__EXStall = 1U;
    }
    vlSelf->main__DOT__RFr1Out_EXreg1Value = ((0U == (IData)(vlSelf->main__DOT__DCrs1Out_RFrs1))
                                               ? 0U
                                               : vlSelf->main__DOT__regFile_instance__DOT__file
                                              [vlSelf->main__DOT__DCrs1Out_RFrs1]);
    vlSelf->main__DOT__RFr2Out_EXreg2Value = ((0U == (IData)(vlSelf->main__DOT__DCrs2Out_RFrs2))
                                               ? 0U
                                               : vlSelf->main__DOT__regFile_instance__DOT__file
                                              [vlSelf->main__DOT__DCrs2Out_RFrs2]);
    if ((0x33U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation = 0U;
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
            = vlSelf->main__DOT__RFr1Out_EXreg1Value;
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2 
            = vlSelf->main__DOT__RFr2Out_EXreg2Value;
    } else if (((0x13U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)) 
                & ((5U == (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3)) 
                   | (1U == (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))))) {
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation = 0U;
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
            = vlSelf->main__DOT__RFr1Out_EXreg1Value;
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2 
            = (0x1fU & (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                        >> 6U));
    } else if (((0x13U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)) 
                & (~ ((5U == (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3)) 
                      | (1U == (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3)))))) {
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation = 0U;
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
            = vlSelf->main__DOT__RFr1Out_EXreg1Value;
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2 
            = vlSelf->main__DOT__DCimmediateOut_EXimmediate;
    } else if (((3U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)) 
                | (0x23U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)))) {
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation = 1U;
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
            = vlSelf->main__DOT__RFr1Out_EXreg1Value;
        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2 
            = vlSelf->main__DOT__DCimmediateOut_EXimmediate;
    } else {
        if ((0x37U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
            vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation = 2U;
            vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                = vlSelf->main__DOT__DCimmediateOut_EXimmediate;
        } else if ((0x17U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
            vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation = 2U;
            vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                = vlSelf->main__DOT__DCimmediateOut_EXimmediate;
        } else if ((0x6fU != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
            if ((0x67U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                if ((0x63U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                    vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation = 0U;
                    vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 = 0U;
                }
            }
        }
        if ((0x37U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
            if ((0x17U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2 
                    = vlSelf->main__DOT__DCPCOut_EXPC;
            } else if ((0x6fU != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                if ((0x67U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                    if ((0x63U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                        vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2 = 0U;
                    }
                }
            }
        }
    }
    vlSelf->main__DOT__DCFlush_EXFlush = 0U;
    vlSelf->main__DOT__DCFlushAddr_EXFlushAddr = vlSelf->main__DOT__DCPCOut_EXPC;
    if ((0x33U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
        if ((1U & (~ ((0x13U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)) 
                      & ((5U == (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3)) 
                         | (1U == (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))))))) {
            if ((1U & (~ ((0x13U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)) 
                          & (~ ((5U == (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3)) 
                                | (1U == (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3)))))))) {
                if ((1U & (~ ((3U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)) 
                              | (0x23U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)))))) {
                    if ((0x37U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                        if ((0x17U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                            if ((0x6fU == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                                vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire 
                                    = ((IData)(4U) 
                                       + vlSelf->main__DOT__DCPCOut_EXPC);
                                vlSelf->main__DOT__DCFlush_EXFlush = 1U;
                                vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                    = (vlSelf->main__DOT__DCPCOut_EXPC 
                                       + vlSelf->main__DOT__DCimmediateOut_EXimmediate);
                            } else if ((0x67U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                                vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire 
                                    = ((IData)(4U) 
                                       + vlSelf->main__DOT__DCPCOut_EXPC);
                                vlSelf->main__DOT__DCFlush_EXFlush = 1U;
                                vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                    = (vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                       + vlSelf->main__DOT__DCimmediateOut_EXimmediate);
                            } else {
                                if ((0x63U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                                    vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire = 0U;
                                }
                                if ((0x63U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                                    if ((4U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))) {
                                        if ((2U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))) {
                                                if (
                                                    (vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                     >= vlSelf->main__DOT__RFr2Out_EXreg2Value)) {
                                                    vlSelf->main__DOT__DCFlush_EXFlush 
                                                        = 
                                                        (1U 
                                                         & 1U);
                                                    vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                                        = 
                                                        (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                         + vlSelf->main__DOT__DCPCOut_EXPC);
                                                } else {
                                                    vlSelf->main__DOT__DCFlush_EXFlush 
                                                        = 
                                                        (1U 
                                                         & 0U);
                                                    vlSelf->main__DOT__DCFlushAddr_EXFlushAddr = 0U;
                                                }
                                            } else if (
                                                       (vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                        < vlSelf->main__DOT__RFr2Out_EXreg2Value)) {
                                                vlSelf->main__DOT__DCFlush_EXFlush 
                                                    = 
                                                    (1U 
                                                     & 1U);
                                                vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                                    = 
                                                    (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                     + vlSelf->main__DOT__DCPCOut_EXPC);
                                            } else {
                                                vlSelf->main__DOT__DCFlush_EXFlush 
                                                    = 
                                                    (1U 
                                                     & 0U);
                                                vlSelf->main__DOT__DCFlushAddr_EXFlushAddr = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))) {
                                            vlSelf->main__DOT__DCFlush_EXFlush 
                                                = (1U 
                                                   & ((vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                       >= vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                       ? 1U
                                                       : 0U));
                                            vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                                = (
                                                   VL_GTES_III(32, vlSelf->main__DOT__RFr1Out_EXreg1Value, vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                    ? 
                                                   (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                    + vlSelf->main__DOT__DCPCOut_EXPC)
                                                    : 0U);
                                        } else {
                                            vlSelf->main__DOT__DCFlush_EXFlush 
                                                = (1U 
                                                   & ((vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                       < vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                       ? 1U
                                                       : 0U));
                                            vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                                = (
                                                   VL_LTS_III(32, vlSelf->main__DOT__RFr1Out_EXreg1Value, vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                    ? 
                                                   (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                    + vlSelf->main__DOT__DCPCOut_EXPC)
                                                    : 0U);
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3) 
                                                    >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))) {
                                            if ((vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                 != vlSelf->main__DOT__RFr2Out_EXreg2Value)) {
                                                vlSelf->main__DOT__DCFlush_EXFlush 
                                                    = 
                                                    (1U 
                                                     & 1U);
                                                vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                                    = 
                                                    (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                     + vlSelf->main__DOT__DCPCOut_EXPC);
                                            } else {
                                                vlSelf->main__DOT__DCFlush_EXFlush 
                                                    = 
                                                    (1U 
                                                     & 0U);
                                                vlSelf->main__DOT__DCFlushAddr_EXFlushAddr = 0U;
                                            }
                                        } else if (
                                                   (vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                    == vlSelf->main__DOT__RFr2Out_EXreg2Value)) {
                                            vlSelf->main__DOT__DCFlush_EXFlush 
                                                = (1U 
                                                   & 1U);
                                            vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                                = (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                   + vlSelf->main__DOT__DCPCOut_EXPC);
                                        } else {
                                            vlSelf->main__DOT__DCFlush_EXFlush 
                                                = (1U 
                                                   & 0U);
                                            vlSelf->main__DOT__DCFlushAddr_EXFlushAddr = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->main__DOT__EX_Stage_instance__DOT__ALUOut 
        = ((0U == (IData)(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation))
            ? ((4U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                ? ((2U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                    ? ((1U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                        ? (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                           & vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2)
                        : (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                           | vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2))
                    : ((1U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                        ? ((0U == (IData)(vlSelf->main__DOT__DCfunc7Out_EXfunc7))
                            ? (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                               >> (0x1fU & vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2))
                            : (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                               >> (0x1fU & vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2)))
                        : (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                           ^ vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2)))
                : ((2U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                    ? ((1U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                        ? ((vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                            < vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2)
                            ? 1U : 0U) : (VL_LTS_III(32, vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1, vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                        ? (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                           << (0x1fU & vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2))
                        : ((0U == (IData)(vlSelf->main__DOT__DCfunc7Out_EXfunc7))
                            ? (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                               + vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2)
                            : (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                               - vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2)))))
            : ((1U == (IData)(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation))
                ? (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                   + vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2)
                : ((2U == (IData)(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation))
                    ? (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                       << 0xcU) : (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2 
                                   + (vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 
                                      << 0xcU)))));
}

VL_ATTR_COLD void Vmain___024root___eval_stl(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vmain___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__nba(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__IFInstruction_DCInstruction = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__IFPC_DCPC = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__DCFlush_EXFlush = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__DCFlushAddr_EXFlushAddr = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__DCopcodeOut_EXopcode = VL_RAND_RESET_I(7);
    vlSelf->main__DOT__DCrdOut_EXrd = VL_RAND_RESET_I(5);
    vlSelf->main__DOT__DCfunc3Out_EXfunc3 = VL_RAND_RESET_I(3);
    vlSelf->main__DOT__DCfunc7Out_EXfunc7 = VL_RAND_RESET_I(7);
    vlSelf->main__DOT__DCimmediateOut_EXimmediate = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__DCPCOut_EXPC = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__EXreadOut_MMread = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__EXwriteOut_MMwrite = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__EXvalueOut_MMdata = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__EXaddressOut_MMaddress = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__EXaddressModeOut_MMaddressMode = VL_RAND_RESET_I(3);
    vlSelf->main__DOT__EXrdOut_MMrd = VL_RAND_RESET_I(5);
    vlSelf->main__DOT__EXnoMEMOut_MMnoMEM = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__MMrdOut_RFrd = VL_RAND_RESET_I(5);
    vlSelf->main__DOT__MMdataOut_RFdataIn = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__MMWEOut_RFWE = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__DCrs1Out_RFrs1 = VL_RAND_RESET_I(5);
    vlSelf->main__DOT__DCrs2Out_RFrs2 = VL_RAND_RESET_I(5);
    vlSelf->main__DOT__RFr1Out_EXreg1Value = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__RFr2Out_EXreg2Value = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__EXStall = VL_RAND_RESET_I(1);
    vlSelf->main__DOT__IF_Stage_instance__DOT__PC = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2 = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation = VL_RAND_RESET_I(2);
    vlSelf->main__DOT__EX_Stage_instance__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->main__DOT__MM_Stage_instance__DOT__dataOutWire = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->main__DOT__regFile_instance__DOT__file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
