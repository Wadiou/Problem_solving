.data
A: .word 2
B: .word 3
C: .word 1
.text
.globl main
main:
lw t0,A
lw t1 ,B
lw t2 , C
#H
mul t3 , t0 , t1
slli t3 , t3 , 1
add s0 , t3 , t2
#I
sub t3 , t1 , t2 
add t3 , s0 , t3
div s1 , t0 , t3
#K
srai s2 , s1 , 1
#B
div t3 , t1 ,t0
mul t3 , t3 , t0
sub s3 , t1 , t3

addi a0, x0, 10 # a0=10
ecall


