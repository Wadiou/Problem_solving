.text
main:
li a0 , 5
li a1 , 1
li s1 , 1
jal factorial
mv s1 , a0
li a0 , 1
mv a1 ,s1
ecall
addi a0, x0, 10
ecall
factorial:
addi sp , sp , -8
sw ra , 0(sp)
sw a0 , 4(sp)
bgt a0 , s1 , else
li a0 , 1
ret
else:
addi a0 , a0 , -1
jal factorial
lw t0 , 4(sp)
lw ra , 0(sp)
mul a0 ,t0 , a0
addi sp , sp , 8
ret


