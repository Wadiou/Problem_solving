.data
enter: .asciiz "Enter the value of N \n"
space : .asciiz "\n"
value: .asciiz"The Value of the Sum is : "
.text
.globl main
main:
li t0 , 1

li a0 , 4
la a1 , enter
ecall

li a0 ,5
ecall
add s0 , x0 , a1

loop:
bgt t0 , s0 , exit
addi t1 ,t0 , 1
mul t2 , t1 , t0
add s1 , t2 , s1
addi t0, t0 , 1
li a0 , 1
add a1 , x0 ,s1
ecall

li a0 , 4
la a1 , space
ecall

j loop

exit:

li a0 , 4
la a1 , value
ecall

li a0 , 1
add a1 , x0 ,s1
ecall



