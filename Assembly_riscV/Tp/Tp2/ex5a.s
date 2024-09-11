.data

hello: .asciiz "hello world"

.text
.globl main

main:

addi a0 , x0 , 4
la t0 , hello
add a1 , x0 ,t0
ecall




addi a0, x0, 10
ecall
