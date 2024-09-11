.data
tab: .word 1, 2, 3, 4, 2, 5

.text
main:
    la t0, tab
    addi t1, x0, 0
    addi s0, x0, 6
loop:
    slli t3, t1, 2
    add t3, t0, t3
    lw s1, 0(t3)
    mul s2, s1, s1
    mul s2 ,s2 , s1
    add s3, s3, s2
    sw s1, 0(t3)
    addi t1, t1, 1
    bne t1, s0, loop
exit:
    addi a0, x0, 1
    add a1, x0, s3
    ecall