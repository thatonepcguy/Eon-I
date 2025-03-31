# Eon-I
A Harvard Architecture RV32I CPU

Using Verilator

To verilate run:
  verilator --trace --exe --build -cc main.cpp main.sv

After, to generate the .vcd file run:
  ./obj_dir/Vmain

Then open the .vcd file in gtkwave
