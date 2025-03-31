// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


void Vmain___024root__trace_chg_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_top_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmain___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmain___024root__trace_chg_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->main__DOT__EXStall));
        bufp->chgBit(oldp+1,(vlSelf->main__DOT__DCFlush_EXFlush));
        bufp->chgIData(oldp+2,(vlSelf->main__DOT__DCFlushAddr_EXFlushAddr),32);
        bufp->chgIData(oldp+3,(vlSelf->main__DOT__IFInstruction_DCInstruction),32);
        bufp->chgIData(oldp+4,(vlSelf->main__DOT__IFPC_DCPC),32);
        bufp->chgCData(oldp+5,(vlSelf->main__DOT__DCopcodeOut_EXopcode),7);
        bufp->chgCData(oldp+6,(vlSelf->main__DOT__DCrdOut_EXrd),5);
        bufp->chgCData(oldp+7,(vlSelf->main__DOT__DCfunc3Out_EXfunc3),3);
        bufp->chgCData(oldp+8,(vlSelf->main__DOT__DCfunc7Out_EXfunc7),7);
        bufp->chgIData(oldp+9,(vlSelf->main__DOT__DCimmediateOut_EXimmediate),32);
        bufp->chgIData(oldp+10,(vlSelf->main__DOT__DCPCOut_EXPC),32);
        bufp->chgBit(oldp+11,(vlSelf->main__DOT__EXreadOut_MMread));
        bufp->chgBit(oldp+12,(vlSelf->main__DOT__EXwriteOut_MMwrite));
        bufp->chgIData(oldp+13,(vlSelf->main__DOT__EXvalueOut_MMdata),32);
        bufp->chgIData(oldp+14,(vlSelf->main__DOT__EXaddressOut_MMaddress),32);
        bufp->chgCData(oldp+15,(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode),3);
        bufp->chgCData(oldp+16,(vlSelf->main__DOT__EXrdOut_MMrd),5);
        bufp->chgBit(oldp+17,(vlSelf->main__DOT__EXnoMEMOut_MMnoMEM));
        bufp->chgCData(oldp+18,(vlSelf->main__DOT__MMrdOut_RFrd),5);
        bufp->chgIData(oldp+19,(vlSelf->main__DOT__MMdataOut_RFdataIn),32);
        bufp->chgBit(oldp+20,(vlSelf->main__DOT__MMWEOut_RFWE));
        bufp->chgCData(oldp+21,(vlSelf->main__DOT__DCrs1Out_RFrs1),5);
        bufp->chgCData(oldp+22,(vlSelf->main__DOT__DCrs2Out_RFrs2),5);
        bufp->chgIData(oldp+23,(vlSelf->main__DOT__RFr1Out_EXreg1Value),32);
        bufp->chgIData(oldp+24,(vlSelf->main__DOT__RFr2Out_EXreg2Value),32);
        bufp->chgIData(oldp+25,(vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire),32);
        bufp->chgIData(oldp+26,(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1),32);
        bufp->chgIData(oldp+27,(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2),32);
        bufp->chgCData(oldp+28,(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation),2);
        bufp->chgIData(oldp+29,(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUOut),32);
        bufp->chgIData(oldp+30,(vlSelf->main__DOT__IF_Stage_instance__DOT__PC),32);
        bufp->chgIData(oldp+31,(((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                  [(0xffffffU & ((IData)(3U) 
                                                 + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                                  << 0x18U) | ((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                                [(0xffffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                                                << 0x10U) 
                                               | ((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                                   [
                                                   (0xffffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                                                   << 8U) 
                                                  | vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                                  [
                                                  (0xffffffU 
                                                   & vlSelf->main__DOT__IF_Stage_instance__DOT__PC)])))),32);
        bufp->chgIData(oldp+32,((0xffffffU & vlSelf->main__DOT__IF_Stage_instance__DOT__PC)),24);
        bufp->chgIData(oldp+33,(vlSelf->main__DOT__MM_Stage_instance__DOT__dataOutWire),32);
        bufp->chgIData(oldp+34,((0xffffffU & vlSelf->main__DOT__EXaddressOut_MMaddress)),24);
        bufp->chgIData(oldp+35,(vlSelf->main__DOT__regFile_instance__DOT__file[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->main__DOT__regFile_instance__DOT__file[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->main__DOT__regFile_instance__DOT__file[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->main__DOT__regFile_instance__DOT__file[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->main__DOT__regFile_instance__DOT__file[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->main__DOT__regFile_instance__DOT__file[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->main__DOT__regFile_instance__DOT__file[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->main__DOT__regFile_instance__DOT__file[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->main__DOT__regFile_instance__DOT__file[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->main__DOT__regFile_instance__DOT__file[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->main__DOT__regFile_instance__DOT__file[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->main__DOT__regFile_instance__DOT__file[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->main__DOT__regFile_instance__DOT__file[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->main__DOT__regFile_instance__DOT__file[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->main__DOT__regFile_instance__DOT__file[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->main__DOT__regFile_instance__DOT__file[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->main__DOT__regFile_instance__DOT__file[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->main__DOT__regFile_instance__DOT__file[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->main__DOT__regFile_instance__DOT__file[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->main__DOT__regFile_instance__DOT__file[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->main__DOT__regFile_instance__DOT__file[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->main__DOT__regFile_instance__DOT__file[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->main__DOT__regFile_instance__DOT__file[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->main__DOT__regFile_instance__DOT__file[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->main__DOT__regFile_instance__DOT__file[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->main__DOT__regFile_instance__DOT__file[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->main__DOT__regFile_instance__DOT__file[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->main__DOT__regFile_instance__DOT__file[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->main__DOT__regFile_instance__DOT__file[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->main__DOT__regFile_instance__DOT__file[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->main__DOT__regFile_instance__DOT__file[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->main__DOT__regFile_instance__DOT__file[31]),32);
    }
    bufp->chgBit(oldp+67,(vlSelf->clk));
}

void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_cleanup\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
