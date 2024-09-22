.text
main:
    li a2, 5
    jal funct1
results:
    li a0, 1
    add a1, x0, a3
    ecall
    li a0, 10
    ecall
funct1:
    li t0, 1
loop:
    bgt t0, a2, exit
        add a3, a3, t0
        addi t0, t0, 1
        j loop
exit:
    jalr x0 , ra , 0