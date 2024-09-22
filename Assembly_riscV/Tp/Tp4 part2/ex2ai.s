.text
main:
li a0 , 5
ecall
mv a2 , a1
li a0 , 5
ecall
mv a3 , a1
li a4 , 1
li a4 , 1
jal power2
li a0 , 1
mv a1 , a4
ecall
li a0 ,10
ecall

power1:
loop:
bge t0 , a3 , exit1
mul a4 , a4 , a2
addi t0, t0 , 1
j loop
exit1:
ret
