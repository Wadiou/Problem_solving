.text
main:
li a0 , 5
ecall
mv a2 , a1
li a0 , 5
ecall
mv a3 , a1
li s1 , 1
li a4 , 1
jal power2
li a0 , 1
mv a1 , a4
ecall
li a0 ,10
ecall
power2:
addi sp ,sp , -4
sw ra, 0(sp)
bne a3 , x0 , else
li a3 , 1
ret
else:
addi a3 , a3 , -1
jal power2
addi sp , sp , 4
mul a4 , a4 , a2
lw ra , 0(sp)
ret
