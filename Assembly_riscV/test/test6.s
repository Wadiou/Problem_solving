.data
array: .word 1,-5,8,4,7
size: .word 5
.text
main:
la t3 , size 
lw s3 , 0(t3)
li t0 , 0 # i = 0
li s0 , 0 # sum = 0
la s1, array 
for:
slli t1 , t0 , 2 # offset
add s2 , t1 , s1 
bge t0 , s3 , exit
lw s4 , 0(s2)
add s0 , s0 , s4
li a0 , 1
addi a1 , s0 , 0
ecall
addi t0 , t0 ,1
j for
exit:
li a0 , 10
ecall
