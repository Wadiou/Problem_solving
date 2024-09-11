.data
x: .word 2
y: .word 3

.text
.globl main 
main:

la t0 , x
la t1 ,y
lb s0 , 0(t0)
lb s1 , 0(t1)
#z
add s2 , s0 ,s1
addi s2 , s2 ,-1
#l
mul s3 ,s0 , s1 
add  s3 , s3 , s2
#m
slli s4 , s2 ,1
div s4 , s3 , s4
#l
addi s3 , s3 , 1

addi a0 , x0 ,10
ecall