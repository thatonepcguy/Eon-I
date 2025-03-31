#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/VEX_Stage.h"

#define MAX_TIME 100
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    VEX_Stage *dut = new VEX_Stage;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace,5);
    m_trace->open("waveform.vcd");
    dut->PC = 500;
    dut->reg2Value = 13;
    dut->opcode = 0b1100011;
    dut->func3 = 0b0;
    dut->immediate = 500;
    while (sim_time<MAX_TIME) {
        dut->clk ^= 1;
        if (dut->clk == 1) {
            dut->reg1Value += 1;
        }
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}