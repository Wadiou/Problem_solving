.data
hi: .asciiz "Hi"
.text
.globl main
main:
la t0 , hi
lb t1 ,1(t0)
li a0 , 4
add a1,x0 ,t0
ecall
mv  t0, t1 
ecall