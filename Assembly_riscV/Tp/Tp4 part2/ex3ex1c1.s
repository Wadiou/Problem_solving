.text
main:
    li s2, 5
    jal funct1
results:
    li a0, 1
    add a1, x0, s3
    ecall
    li a0, 10
    ecall
funct1:
    addi sp , sp , -4
    sw s2 , 0(sp)
    li t0, 1
loop:
    bgt t0, s2, exit
        add s3, s3, t0
        addi t0, t0, 1
        j loop
exit:
    lw s2 , 0(sp)
    addi sp , sp , 4
    jalr x0 , ra , 0