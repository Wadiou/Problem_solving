.text
main:
li a0 , 5
ecall
mv s2 , a1
jal Display
li a0 , 1
mv a1 , s5
ecall
li a0 ,10
ecall
power2:
lw s3 , 0(sp)
li s4 , 1
loop_:
ble s3 , x0 , else
mul s4 , s4 , s2
addi s3 , s3 , -1
j loop_
else:
ret

Display:
addi sp , sp , -8
sw s2 , 0(sp)
sw ra , 4(sp)
loop:
ble s2 , x0 , exit
jal power2
add s5 , s5 , s4
addi s2 ,s2 , -1
j loop
exit:
lw ra , 4(sp)
ret


