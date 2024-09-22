.data
input: .asciiz "Enter a character: "
char: .space 1

.text
.globl main
main:
la a1, input
li a0, 4
ecall

la t0, char
li a0, 5
ecall
sb a1, 0(t0)

li a0, 4
add a1 , x0 , t0
    
ecall

li a0, 10
ecall
