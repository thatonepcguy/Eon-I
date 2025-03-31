#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/Vmain.h"

#define MAX_TIME 50
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    Vmain *dut = new Vmain;
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(m_trace,99);
    m_trace->open("waveform.vcd");
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