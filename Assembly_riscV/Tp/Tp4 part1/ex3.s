.data
tab1: .word 1,-5,4,7,3,-1
tab2: .word 2,7,9,-4,-7,10

.text
main:
la s0,tab1
la s1,tab2
li s2 , 6

loop:
bge t0 , s2 , exit
slli t2 , t0 , 2
add s3 ,s0 ,t2
add s4 , s1 , t2
lw t3 , 0(s3)
lw t4 , 0(s4)
mul t5 , t3 , t4 
add s5 , s5 , t5
addi t0 , t0 ,1
j loop
exit:
li a0 , 1
add a1 , x0 ,s5
ecall
li a0 , 10
ecall