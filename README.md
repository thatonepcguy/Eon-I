# Eon-I
A Harvard Architecture RV32I CPU

(Best viewing of the README is done in the downloaded file or by clicking view raw)

Using Verilator

To run a program:
  To verilate run:
    verilator --trace --exe --build -cc main.cpp main.sv
  
  After, to generate the .vcd file run:
    ./obj_dir/Vmain
  
  Then open the .vcd file in gtkwave


If you want to compile a new test program make sure you have riscv32-unknown-linux-gnu-gcc installed
To compile a new test program enter the folder called test_programs and run (make sure to give build_riscv.sh executable permissions: 
  ./build_riscv.sh (name of rv32i asm file).s

Then open the file in xxd using 
  xxd -g 1 -c 1 -e (name of rv32i asm file).bin

Copy the Hexdump from xxd to the prg.txt file in the main folder and it should look something like this:
  00000000: 93  .
  00000001: 00  .
  00000002: f0  .
  00000003: 00  .
  00000004: 93  .
  00000005: 80  .
  00000006: f0  .
  00000007: ff  .
  00000008: e3  .
  00000009: 9e  .
  0000000a: 00  .
  0000000b: fe  .
  0000000c: 13  .
  0000000d: 01  .
  0000000e: f0  .
  0000000f: 00  .

Then Delete all address and assci character translations so you end up with something similar to:
  93
  00
  f0
  00
  93
  80
  f0
  ff
  e3
  9e
  00
  fe
  13
  01
  f0
  00

Then change the MAX_TIME in the main.cpp file to whatever is needed (i just eyball it a few times and see what works)
Then just follow the steps in "To run a program" to run your the program
