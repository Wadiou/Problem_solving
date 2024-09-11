
.data
space: .asciiz " "
.text
main:
li t1 , 2
li s1 , 1
li a0 , 5
ecall
mv a2 , a1
li a0 , 1
mv a1 , x0
ecall
li a0 , 4
la a1 , space
ecall
li a0 , 1
mv a1 , s1
ecall
li a0 , 4
la a1 , space
ecall
jal fibonacci
li a0 ,10
ecall

fibonacci:

    ble a2 , t1 , exit
        add s2 , s1 , s0
        li a0 , 1
        mv a1 , s2
        ecall
        li a0 , 4
        la a1 , space
        ecall
        mv s0 , s1 
        mv s1 , s2
        addi a2 , a2 , -1
        j fibonacci
exit:
ret
