.text
main:

addi a0 , x0 , 5
ecall
add t0 , x0 ,a1 # input1 x1

addi a0 , x0 , 5
ecall
add t1 , x0 ,a1 # input 2 y1

addi a0 , x0 , 5
ecall
add t2 , x0 ,a1 # input3 x2

addi a0 , x0 , 5
ecall
add t3 , x0 ,a1 # input4 y2

add s0 , t0 , t2
add s1 , t1 , t3 

srai s0 , s0 ,1
srai s1 , s1 , 1

addi a0, x0, 10
ecall









addi a0, x0, 10
ecall

