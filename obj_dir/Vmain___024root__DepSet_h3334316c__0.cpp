// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"

#include "Vmain___024root.h"

void Vmain___024root___eval_act(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__main__DOT__IF_Stage_instance__DOT__PC;
    __Vdly__main__DOT__IF_Stage_instance__DOT__PC = 0;
    CData/*4:0*/ __Vdlyvdim0__main__DOT__regFile_instance__DOT__file__v0;
    __Vdlyvdim0__main__DOT__regFile_instance__DOT__file__v0 = 0;
    IData/*31:0*/ __Vdlyvval__main__DOT__regFile_instance__DOT__file__v0;
    __Vdlyvval__main__DOT__regFile_instance__DOT__file__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__regFile_instance__DOT__file__v0;
    __Vdlyvset__main__DOT__regFile_instance__DOT__file__v0 = 0;
    // Body
    __Vdly__main__DOT__IF_Stage_instance__DOT__PC = vlSelf->main__DOT__IF_Stage_instance__DOT__PC;
    __Vdlyvset__main__DOT__regFile_instance__DOT__file__v0 = 0U;
    if (vlSelf->main__DOT__EXwriteOut_MMwrite) {
        if ((0U == (IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode))) {
            vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram[(0xffffffU 
                                                                               & vlSelf->main__DOT__EXaddressOut_MMaddress)] 
                = (0xffU & vlSelf->main__DOT__EXvalueOut_MMdata);
        } else if ((1U == (IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode))) {
            vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram[(0xfffffeU 
                                                                               & vlSelf->main__DOT__EXaddressOut_MMaddress)] 
                = (0xffU & vlSelf->main__DOT__EXvalueOut_MMdata);
            vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram[(1U 
                                                                               | (0xfffffeU 
                                                                                & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                = (0xffU & (vlSelf->main__DOT__EXvalueOut_MMdata 
                            >> 8U));
        } else if ((2U == (IData)(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode))) {
            vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram[(0xfffffcU 
                                                                               & vlSelf->main__DOT__EXaddressOut_MMaddress)] 
                = (0xffU & vlSelf->main__DOT__EXvalueOut_MMdata);
            vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram[(1U 
                                                                               | (0xfffffcU 
                                                                                & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                = (0xffU & (vlSelf->main__DOT__EXvalueOut_MMdata 
                            >> 8U));
            vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram[(2U 
                                                                               | (0xfffffcU 
                                                                                & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                = (0xffU & (vlSelf->main__DOT__EXvalueOut_MMdata 
                            >> 0x10U));
            vlSelf->main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram[(3U 
                                                                               | (0xfffffcU 
                                                                                & vlSelf->main__DOT__EXaddressOut_MMaddress))] 
                = (vlSelf->main__DOT__EXvalueOut_MMdata 
                   >> 0x18U);
        }
    }
    if (((IData)(vlSelf->main__DOT__MMWEOut_RFWE) & 
         (0U != (IData)(vlSelf->main__DOT__MMrdOut_RFrd)))) {
        __Vdlyvval__main__DOT__regFile_instance__DOT__file__v0 
            = vlSelf->main__DOT__MMdataOut_RFdataIn;
        __Vdlyvset__main__DOT__regFile_instance__DOT__file__v0 = 1U;
        __Vdlyvdim0__main__DOT__regFile_instance__DOT__file__v0 
            = vlSelf->main__DOT__MMrdOut_RFrd;
    }
    vlSelf->main__DOT__DCPCOut_EXPC = vlSelf->main__DOT__IFPC_DCPC;
    if (__Vdlyvset__main__DOT__regFile_instance__DOT__file__v0) {
        vlSelf->main__DOT__regFile_instance__DOT__file[__Vdlyvdim0__main__DOT__regFile_instance__DOT__file__v0] 
            = __Vdlyvval__main__DOT__regFile_instance__DOT__file__v0;
    }
    if (vlSelf->main__DOT__EXStall) {
        if (vlSelf->main__DOT__EXStall) {
            vlSelf->main__DOT__EXaddressOut_MMaddress = 0U;
            vlSelf->main__DOT__EXaddressModeOut_MMaddressMode = 0U;
        }
    } else {
        vlSelf->main__DOT__EXaddressOut_MMaddress = vlSelf->main__DOT__EX_Stage_instance__DOT__ALUOut;
        vlSelf->main__DOT__EXaddressModeOut_MMaddressMode 
            = vlSelf->main__DOT__DCfunc3Out_EXfunc3;
    }
    if (((IData)(vlSelf->main__DOT__EXreadOut_MMread) 
         & (~ (IData)(vlSelf->main__DOT__EXwriteOut_MMwrite)))) {
        vlSelf->main__DOT__MMrdOut_RFrd = vlSelf->main__DOT__EXrdOut_MMrd;
        vlSelf->main__DOT__MMdataOut_RFdataIn = vlSelf->main__DOT__MM_Stage_instance__DOT__dataOutWire;
    } else if (vlSelf->main__DOT__EXwriteOut_MMwrite) {
        vlSelf->main__DOT__MMrdOut_RFrd = 0U;
        vlSelf->main__DOT__MMdataOut_RFdataIn = 0U;
    } else {
        vlSelf->main__DOT__MMrdOut_RFrd = vlSelf->main__DOT__EXrdOut_MMrd;
        vlSelf->main__DOT__MMdataOut_RFdataIn = vlSelf->main__DOT__EXvalueOut_MMdata;
    }
    vlSelf->main__DOT__MMWEOut_RFWE = (((IData)(vlSelf->main__DOT__EXreadOut_MMread) 
                                        & (~ (IData)(vlSelf->main__DOT__EXwriteOut_MMwrite))) 
                                       | ((~ (IData)(vlSelf->main__DOT__EXwriteOut_MMwrite)) 
                                          & (IData)(vlSelf->main__DOT__EXnoMEMOut_MMnoMEM)));
    if (vlSelf->main__DOT__EXStall) {
        if (vlSelf->main__DOT__EXStall) {
            vlSelf->main__DOT__EXrdOut_MMrd = 0U;
            vlSelf->main__DOT__EXnoMEMOut_MMnoMEM = 1U;
            vlSelf->main__DOT__EXreadOut_MMread = 0U;
            vlSelf->main__DOT__EXwriteOut_MMwrite = 0U;
            vlSelf->main__DOT__EXvalueOut_MMdata = 0U;
        }
    } else {
        vlSelf->main__DOT__EXrdOut_MMrd = vlSelf->main__DOT__DCrdOut_EXrd;
        if ((3U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
            vlSelf->main__DOT__EXnoMEMOut_MMnoMEM = 0U;
            vlSelf->main__DOT__EXreadOut_MMread = 1U;
            vlSelf->main__DOT__EXwriteOut_MMwrite = 0U;
        } else if ((0x23U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
            vlSelf->main__DOT__EXnoMEMOut_MMnoMEM = 0U;
            vlSelf->main__DOT__EXreadOut_MMread = 0U;
            vlSelf->main__DOT__EXwriteOut_MMwrite = 1U;
        }
        vlSelf->main__DOT__EXnoMEMOut_MMnoMEM = 1U;
        vlSelf->main__DOT__EXvalueOut_MMdata = (((0x6fU 
                                                  == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)) 
                                                 | (0x67U 
                                                    == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode)))
                                                 ? vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire
                                                 : vlSelf->main__DOT__EX_Stage_instance__DOT__ALUOut);
    }
    if (vlSelf->main__DOT__DCFlush_EXFlush) {
        vlSelf->main__DOT__DCfunc7Out_EXfunc7 = 0U;
        vlSelf->main__DOT__DCrs1Out_RFrs1 = 0U;
        vlSelf->main__DOT__DCrs2Out_RFrs2 = 0U;
        vlSelf->main__DOT__DCimmediateOut_EXimmediate = 0U;
        __Vdly__main__DOT__IF_Stage_instance__DOT__PC 
            = vlSelf->main__DOT__DCFlushAddr_EXFlushAddr;
        vlSelf->main__DOT__DCfunc3Out_EXfunc3 = 0U;
        vlSelf->main__DOT__DCrdOut_EXrd = 0U;
        vlSelf->main__DOT__DCopcodeOut_EXopcode = 0x13U;
        vlSelf->main__DOT__IFInstruction_DCInstruction = 0x13U;
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__EXStall)) 
                      & (~ (IData)(vlSelf->main__DOT__DCFlush_EXFlush))))) {
        if ((0x33U == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction))) {
            vlSelf->main__DOT__DCfunc7Out_EXfunc7 = 
                (vlSelf->main__DOT__IFInstruction_DCInstruction 
                 >> 0x19U);
            vlSelf->main__DOT__DCrs1Out_RFrs1 = (0x1fU 
                                                 & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                    >> 0xfU));
            vlSelf->main__DOT__DCrs2Out_RFrs2 = (0x1fU 
                                                 & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                    >> 0x14U));
            vlSelf->main__DOT__DCimmediateOut_EXimmediate = 0U;
            vlSelf->main__DOT__DCfunc3Out_EXfunc3 = 
                (7U & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                       >> 0xcU));
            vlSelf->main__DOT__DCrdOut_EXrd = (0x1fU 
                                               & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                  >> 7U));
        } else if ((((0x13U == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction)) 
                     | (3U == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction))) 
                    | (0x67U == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction)))) {
            vlSelf->main__DOT__DCfunc7Out_EXfunc7 = 0U;
            vlSelf->main__DOT__DCrs1Out_RFrs1 = (0x1fU 
                                                 & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                    >> 0xfU));
            vlSelf->main__DOT__DCrs2Out_RFrs2 = 0U;
            vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                = (((- (IData)((vlSelf->main__DOT__IFInstruction_DCInstruction 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->main__DOT__IFInstruction_DCInstruction 
                      >> 0x14U));
            vlSelf->main__DOT__DCfunc3Out_EXfunc3 = 
                (7U & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                       >> 0xcU));
            vlSelf->main__DOT__DCrdOut_EXrd = (0x1fU 
                                               & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                  >> 7U));
        } else if ((0x23U == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction))) {
            vlSelf->main__DOT__DCfunc7Out_EXfunc7 = 0U;
            vlSelf->main__DOT__DCrs1Out_RFrs1 = (0x1fU 
                                                 & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                    >> 0xfU));
            vlSelf->main__DOT__DCrs2Out_RFrs2 = (0x1fU 
                                                 & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                    >> 0x14U));
            vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                = (((- (IData)((vlSelf->main__DOT__IFInstruction_DCInstruction 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                  >> 7U))));
            vlSelf->main__DOT__DCfunc3Out_EXfunc3 = 
                (7U & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                       >> 0xcU));
            vlSelf->main__DOT__DCrdOut_EXrd = 0U;
        } else if ((0x63U == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction))) {
            vlSelf->main__DOT__DCfunc7Out_EXfunc7 = 0U;
            vlSelf->main__DOT__DCrs1Out_RFrs1 = (0x1fU 
                                                 & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                    >> 0xfU));
            vlSelf->main__DOT__DCrs2Out_RFrs2 = (0x1fU 
                                                 & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                    >> 0x14U));
            vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                = (((- (IData)((vlSelf->main__DOT__IFInstruction_DCInstruction 
                                >> 0x1fU))) << 0xdU) 
                   | ((0x1000U & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                  >> 0x13U)) | ((0x800U 
                                                 & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                         >> 7U))))));
            vlSelf->main__DOT__DCfunc3Out_EXfunc3 = 
                (7U & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                       >> 0xcU));
            vlSelf->main__DOT__DCrdOut_EXrd = 0U;
        } else if (((0x37U == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction)) 
                    | (0x17U == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction)))) {
            vlSelf->main__DOT__DCfunc7Out_EXfunc7 = 0U;
            vlSelf->main__DOT__DCrs1Out_RFrs1 = 0U;
            vlSelf->main__DOT__DCrs2Out_RFrs2 = 0U;
            vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                = (0xfffff000U & vlSelf->main__DOT__IFInstruction_DCInstruction);
            vlSelf->main__DOT__DCfunc3Out_EXfunc3 = 0U;
            vlSelf->main__DOT__DCrdOut_EXrd = (0x1fU 
                                               & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                  >> 7U));
        } else if ((0x6fU == (0x7fU & vlSelf->main__DOT__IFInstruction_DCInstruction))) {
            vlSelf->main__DOT__DCfunc7Out_EXfunc7 = 0U;
            vlSelf->main__DOT__DCrs1Out_RFrs1 = 0U;
            vlSelf->main__DOT__DCrs2Out_RFrs2 = 0U;
            vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                = (((- (IData)((vlSelf->main__DOT__IFInstruction_DCInstruction 
                                >> 0x1fU))) << 0x15U) 
                   | ((0x100000U & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                    >> 0xbU)) | ((0xff000U 
                                                  & vlSelf->main__DOT__IFInstruction_DCInstruction) 
                                                 | ((0x800U 
                                                     & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                          >> 0x14U))))));
            vlSelf->main__DOT__DCfunc3Out_EXfunc3 = 0U;
            vlSelf->main__DOT__DCrdOut_EXrd = (0x1fU 
                                               & (vlSelf->main__DOT__IFInstruction_DCInstruction 
                                                  >> 7U));
        }
        __Vdly__main__DOT__IF_Stage_instance__DOT__PC 
            = ((IData)(4U) + vlSelf->main__DOT__IF_Stage_instance__DOT__PC);
        vlSelf->main__DOT__DCopcodeOut_EXopcode = (0x7fU 
                                                   & vlSelf->main__DOT__IFInstruction_DCInstruction);
        vlSelf->main__DOT__IFInstruction_DCInstruction 
            = ((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                [(0xffffffU & ((IData)(3U) + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                << 0x18U) | ((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                              [(0xffffffU & ((IData)(2U) 
                                             + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                              << 0x10U) | ((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                            [(0xffffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                                            << 8U) 
                                           | vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                           [(0xffffffU 
                                             & vlSelf->main__DOT__IF_Stage_instance__DOT__PC)])));
    }
    vlSelf->main__DOT__IFPC_DCPC = vlSelf->main__DOT__IF_Stage_instance__DOT__PC;
    vlSelf->main__DOT__RFr1Out_EXreg1Value = ((0U == (IData)(vlSelf->main__DOT__DCrs1Out_RFrs1))
                                               ? 0U
                                               : vlSelf->main__DOT__regFile_instance__DOT__file
                                              [vlSelf->main__DOT__DCrs1Out_RFrs1]);
    vlSelf->main__DOT__RFr2Out_EXreg2Value = ((0U == (IData)(vlSelf->main__DOT__DCrs2Out_RFrs2))
                                               ? 0U
                                               : vlSelf->main__DOT__regFile_instance__DOT__file
                                              [vlSelf->main__DOT__DCrs2Out_RFrs2]);
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
    vlSelf->main__DOT__IF_Stage_instance__DOT__PC = __Vdly__main__DOT__IF_Stage_instance__DOT__PC;
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
                                vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                    = (vlSelf->main__DOT__DCPCOut_EXPC 
                                       + vlSelf->main__DOT__DCimmediateOut_EXimmediate);
                            } else if ((0x67U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                                vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire 
                                    = ((IData)(4U) 
                                       + vlSelf->main__DOT__DCPCOut_EXPC);
                                vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                    = (vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                       + vlSelf->main__DOT__DCimmediateOut_EXimmediate);
                            } else {
                                if ((0x63U != (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                                    vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire = 0U;
                                }
                                if ((0x63U == (IData)(vlSelf->main__DOT__DCopcodeOut_EXopcode))) {
                                    vlSelf->main__DOT__DCFlushAddr_EXFlushAddr 
                                        = ((4U & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                                            ? ((2U 
                                                & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                                                    ? 
                                                   ((vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                     >= vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                     ? 
                                                    (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                     + vlSelf->main__DOT__DCPCOut_EXPC)
                                                     : 0U)
                                                    : 
                                                   ((vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                     < vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                     ? 
                                                    (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                     + vlSelf->main__DOT__DCPCOut_EXPC)
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                                                    ? 
                                                   (VL_GTES_III(32, vlSelf->main__DOT__RFr1Out_EXreg1Value, vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                     ? 
                                                    (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                     + vlSelf->main__DOT__DCPCOut_EXPC)
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->main__DOT__RFr1Out_EXreg1Value, vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                     ? 
                                                    (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                     + vlSelf->main__DOT__DCPCOut_EXPC)
                                                     : 0U)))
                                            : ((2U 
                                                & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                                                ? vlSelf->main__DOT__DCPCOut_EXPC
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->main__DOT__DCfunc3Out_EXfunc3))
                                                    ? 
                                                   ((vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                     != vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                     ? 
                                                    (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                     + vlSelf->main__DOT__DCPCOut_EXPC)
                                                     : 0U)
                                                    : 
                                                   ((vlSelf->main__DOT__RFr1Out_EXreg1Value 
                                                     == vlSelf->main__DOT__RFr2Out_EXreg2Value)
                                                     ? 
                                                    (vlSelf->main__DOT__DCimmediateOut_EXimmediate 
                                                     + vlSelf->main__DOT__DCPCOut_EXPC)
                                                     : 0U))));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->main__DOT__DCFlush_EXFlush = (vlSelf->main__DOT__DCPCOut_EXPC 
                                          != vlSelf->main__DOT__DCFlushAddr_EXFlushAddr);
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
}

void Vmain___024root___eval_nba(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vmain___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmain___024root___eval_triggers__act(Vmain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__nba(Vmain___024root* vlSelf);
#endif  // VL_DEBUG

void Vmain___024root___eval(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmain___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmain___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("main.sv", 6, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmain___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("main.sv", 6, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmain___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
