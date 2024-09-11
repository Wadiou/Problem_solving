.text
main:
li a0 , 5
ecall
mv s2 , a1
li a0 , 5
ecall
mv s3 , a1
li a4 , 1
jal power2
li a0 , 1
mv a1 , a4
ecall
li a0 ,10
ecall
power2:
addi sp , sp , -8
sw s3 , 0(sp)
sw s2 ,4(sp)
ble s3 , x0 , else
mul a4 , a4 , s2
addi s3 , s3 , -1
j power2
else:
lw s3 , 0(sp)
lw s2 ,4(sp)
addi sp , sp , 8
ret
