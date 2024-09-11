
.data
space: .asciiz " "
.text
main:
li t1 , 2
li s3 , 1
li a0 , 5
ecall
mv s2 , a1
li a0 , 1
mv a1 , x0
ecall
li a0 , 4
la a1 , space
ecall
li a0 , 1
mv a1 , s3
ecall
li a0 , 4
la a1 , space
ecall
jal fibonacci
li a0 ,10
ecall

fibonacci:
    addi sp , sp , -4
    sw s2 , 0(sp)    
    ble s2 , t1 , exit
        add s4 , s3 , s0
        li a0 , 1
        mv a1 , s4
        ecall
        li a0 , 4
        la a1 , space
        ecall
        mv s0 , s3 
        mv s3 , s4
        addi s2 , s2 , -1
        j fibonacci
exit:
lw s2 , 0(sp)
addi sp , sp , 4
ret
