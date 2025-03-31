.org 0x0
.globl _start
.text 
_start:
    li x1, 0xF
loop:
    addi x1, x1, -1
    bnez x1, loop

end:
    li x2, 0xF