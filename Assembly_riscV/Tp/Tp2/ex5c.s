 .data
input: .asciiz "Enter a character: "
char: .string ""

.text
.globl main
main:
la a1, input
li a0, 4
ecall

la t0, char
li a0, 5
ecall
add t1 , a1 , x0


addi t1 , t1 ,32
sb t1 , 0(t0)

li a0, 4
add a1 , x0 , t0
    
ecall

li a0, 10
ecall
