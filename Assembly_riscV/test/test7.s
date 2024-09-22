.text
.globl main
main:
li a0 ,5
li s0 , 1
jal s2,factorial
li a7 ,1
mv a1 , a0
ecall
li a0 , 10
ecall
factorial:
bgt a0 , s0 , else
li a0 ,1
ret
else:
addi a0 ,a0 , -1
jal factorial
addi s1 , a0 ,1
mul a0 ,s1 ,a0
jr s2
exit:
