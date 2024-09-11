.data
enter: .asciiz "Enter the value of N \n"
space : .asciiz "\n"

.text
.globl main
main:

li a0 , 4
la a1 , enter
ecall

li a0 ,5
ecall
add s0 , x0 , a1
li t0 , 1 #i

loop1:
bgt t0 , s0 , exit

li t1 , 1#j

loop2:
bgt t1 , t0 , exit1

li a0 , 1
add a1 , x0 , t1
ecall

addi t1 , t1 , 1
j loop2

exit1:

li a0 , 4
la a1 , space
ecall

addi t0 , t0, 1 
j loop1

exit:
li a0 , 10
ecall