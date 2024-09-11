.data
space : .asciiz "\n"

.text
.globl main
main:
li t0 , 1
li t1 , 2
li t2 , 1
li t3 , 10
loop:
bgt t0 , t3 , exit
rem s1,t0 ,t1

bne s1 , t2 , condition
li a0 , 1
add a1 , x0 , t0
ecall

li a0 , 4
la a1 , space
ecall

condition:
addi t0 , t0 , 1

j loop
exit:
li a0 , 10
ecall
