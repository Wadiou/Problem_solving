.text
main:
li a0 , 5
ecall
mv a2 , a1
li a0 , 5
ecall
mv a3 , a1
li a4 , 1
jal power2
li a0 , 1
mv a1 , a4
ecall
li a0 ,10
ecall
power2:
ble a3 , x0 , else
mul a4 , a4 , a2
addi a3 , a3 , -1
j power2
else:
ret
