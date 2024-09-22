.data
tab1: .word 1,-5,4,7,3,-1
tab2: .word 2,7,9,4,-7,10,4
space: .asciiz "\n"
com: .asciiz "The common elements : \n"
.text
main:
la s0,tab1
la s1,tab2
li s2 , 6
li s4 , 7
li a0 ,4
la a1 ,com
ecall
loop1:
bge t0 , s2 , exit1
slli t2 , t0 , 2
add s3 ,s0 ,t2
lw t3 , 0(s3)
li t1 , 0
loop2:
bge t1 ,s4 ,exit2
slli t5 , t1 , 2
add s5 , s1 , t5
lw t4 , 0(s5)
bne t4 , t3 ,exit3
li a0 , 1
mv a1 , t4
ecall
li a0 ,4
la a1 ,space
ecall
j exit2 
exit3:
addi t1 , t1 , 1
j loop2
exit2:
addi t0 , t0 ,1
j loop1
exit1:
li a0 , 10
ecall