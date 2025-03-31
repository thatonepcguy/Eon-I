#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/VDC_Stage.h"

#define MAX_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    VDC_Stage *dut = new VDC_Stage;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace,5);
    m_trace->open("waveform.vcd");
    dut->instruction = 0b11111111111100111000001110010011;
    while (sim_time<MAX_TIME) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}