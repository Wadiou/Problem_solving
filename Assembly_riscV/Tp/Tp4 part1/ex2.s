.data
Tab: .word 4,8,7,6,3,-2
space: .asciiz "\n"
.text
li s0,5
la s1,Tab
lw s3 ,0(s1)
mv s4 ,s3 # min
mv s5 ,s3 # max
loop:
addi t0 ,t0 ,1
bgt t0 ,s0 , exit
slli t1 ,t0 ,2
add s2 ,s1 ,t1
lw t2 ,0(s2)

bgt s5,t2 ,else
mv s5 , t2
else:
blt s4 , t2 ,loop
mv s4 , t2
j loop
exit:
li a0 , 1
add a1 ,x0 ,s4
ecall
li a0 ,4
la a1 ,space
ecall
li a0 , 1
add a1 ,x0 ,s5
ecall
li a0 ,4
la a1 ,space
ecall
li a0 , 10
ecall
 