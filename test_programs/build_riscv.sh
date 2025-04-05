#!/bin/bash

# Check if the input file is provided
if [ -z "$1" ]; then
  echo "Usage: $0 <source_file.s>"
  exit 1
fi

# Input and output file names
SOURCE_FILE=$1
OBJECT_FILE="${SOURCE_FILE%.s}.o"
ELF_FILE="${SOURCE_FILE%.s}.elf"
BIN_FILE="${SOURCE_FILE%.s}.bin"

# Step 1: Compile the assembly file to object file
riscv32-unknown-linux-gnu-gcc -march=rv32i -mabi=ilp32 -nostdlib -c "$SOURCE_FILE" -o "$OBJECT_FILE"
if [ $? -ne 0 ]; then
  echo "Error during assembly to object file"
  exit 1
fi

# Step 2: Link the object file to create the ELF file
riscv32-unknown-linux-gnu-gcc -nostdlib -o "$ELF_FILE" "$OBJECT_FILE"
if [ $? -ne 0 ]; then
  echo "Error during object file to ELF file linking"
  exit 1
fi

# Step 3: Convert ELF to binary format
riscv32-unknown-linux-gnu-objcopy -O binary "$ELF_FILE" "$BIN_FILE"
if [ $? -ne 0 ]; then
  echo "Error during ELF to binary conversion"
  exit 1
fi

echo "Build successful: Binary file created as $BIN_FILE"

