.text
main:
    li a2, 5
    jal funct2
results:
    li a0, 1
    add a1, x0, a3
    ecall
    li a0, 10
    ecall
funct2:
    li t0, 1
        beq a2, t0, else
        add a3, a3, a2
        addi a2, a2, -1
        j funct2
else:
    addi a3, a3, 1
    jr ra
