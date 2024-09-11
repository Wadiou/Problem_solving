.text
main:
addi a0 , x0 , 5
ecall
add t0 , x0 , a1
mul t0 , t0 ,t0
slli t1 , t0 ,1
add s0 , t1 , t0

addi a0, x0, 10
ecall
