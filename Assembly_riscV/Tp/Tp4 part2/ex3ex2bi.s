.data
space: .asciiz "\n"
.text
main:
li a0 , 5
ecall
mv s2 , a1
jal fibonacci
li a0 ,10
ecall

fibonacci:
addi sp , sp , -4
sw s2 , 0(sp)
li t1 , 2
li s1 , 1
li a0 , 1
mv a1 , x0
ecall
li a0 , 4
la a1 , space
ecall
li a0 , 1
mv  a1 , s1
ecall
li a0 , 4
la a1 , space
ecall
loop:
    bge t1 , s2 , exit
        add s2 , s1 , s0
        li a0 , 1
        mv a1 , s2
        ecall
        li a0 , 4
        la a1 , space
        ecall
        mv s0 , s1 
        mv s1 , s2
        addi t1 , t1 , 1
        j loop
exit:
lw s2 , 0(sp)
addi sp , sp , 4
ret
