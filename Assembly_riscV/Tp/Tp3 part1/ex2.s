.data
input1 : .string "Enter the First number ! \n"
input2 : .string "Enter the Second number ! \n"

.text
main:

li a0 , 4
la a1 , input1

ecall

li a0 , 5 
ecall
add s0 , x0 , a1 # input 1

li a0 , 4
la a1 , input2

ecall

li a0 , 5 
ecall
add s1 , x0 , a1 # input 2

blt s0 , s1 , S1

li a0 , 1
add a1 , s0 , x0
ecall
j exit

S1:
li a0 , 1
add a1 , s1 , x0
ecall

exit :
 li a0 , 10
 ecall

