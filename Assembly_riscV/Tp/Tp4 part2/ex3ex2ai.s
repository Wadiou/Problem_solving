.text
main:
li a0 , 5
ecall
mv s2 , a1
li a0 , 5
ecall
mv s3 , a1
li a4 , 1
li a4 , 1
jal power2
li a0 , 1
mv a1 , a4
ecall
li a0 ,10
ecall

power1:
addi sp ,sp ,-8
sw s2 , 0(sp)
sw s3 , 4(sp)
loop:
bge t0 , s3 , exit1
mul a4 , a4 , s2
addi t0, t0 , 1
j loop
exit1:
lw s2 , 0(sp)
lw s3 , 4(sp)
addi sp ,sp ,8
ret
