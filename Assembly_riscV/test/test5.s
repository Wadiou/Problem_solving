    .text
    .globl main
main:
    addi x1, x0, 0    # PC = 0+4=4 after execution, x1 = 0
    jal x2, label1    # PC = 8+4=12 (address of label1), x2 = 4+4=8 (next instruction address)

    addi x1, x1, 1    # PC = 12+4=16 after execution, x1 = 1
    jal x3, label2    # PC = 16+8=24 (address of label2), x3 = 16+4=20 (next instruction address)

    addi x1, x1, 2    # PC = 24+4=28 after execution, x1 = 3
    jal x4, label3    # PC = 28+12=40 (address of label3), x4 = 28+4=32 (next instruction address)

    addi x1, x1, 3    # PC = 40+4=44 after execution, x1 = 6
    jal x5, finish    # PC = 44+4=48 (address of finish), x5 = 44+4=48 (next instruction address)

label1:
    addi x1, x1, 4    # PC = 12+4=16 after execution, x1 = 4
    jal x6, label2    # PC = 16+8=24 (address of label2), x6 = 16+4=20 (next instruction address)

label2:
    addi x1, x1, 5    # PC = 24+4=28 after execution, x1 = 9
    jal x7, label3    # PC = 28+12=40 (address of label3), x7 = 28+4=32 (next instruction address)

label3:
    addi x1, x1, 6    # PC = 40+4=44 after execution, x1 = 15
    jal x8, finish    # PC = 44+4=48 (address of finish), x8 = 44+4=48 (next instruction address)

finish:
    addi x1, x1, 7    # PC = 48+4=52 after execution, x1 = 22
    ecall             # Terminate the program


.text

main:
li t0, 2    # t0 -> x
li t1, 4    # t1 -> y

beq t0, x0, if2 # if t0 = 0 go to if2

div t2, t1, t0
j exit

if2:

beq t0, t1, else # if t0 = t1 go to else

div t2, t1, t0
jal x0, exit

else:

add t2, x0, t1

exit:

ecall
