.text
main:
    li s2, 5
    jal funct2
results:
    li a0, 1
    add a1, x0, s3
    ecall
    li a0, 10
    ecall
funct2:
    addi sp ,sp ,-4
    sw s2, 0(sp)
    li t0, 1
        beq s2, t0, else
        add s3, s3, s2
        addi s2, s2, -1
        j funct2
else:
    addi s3, s3, 1
    lw s2 , 0(sp)
    addi sp , sp , 4
    jr ra
