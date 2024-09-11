.data
input1 : .string "Enter the First number ! \n"
input2 : .string "Enter the Second number ! \n"
infinity : .string "There's an infinity of solotions \n"
nosolution : .string "there's no solution \n"
solution : .string "The solution equals : " 

.text
main:

li a0 , 4
la a1 , input1

ecall

li a0 , 5 
ecall
add s0 , x0 , a1 # input 1 s0 =a

li a0 , 4
la a1 , input2

ecall

li a0 , 5 
ecall
add s1 , x0 , a1 # input 2 s1 = b

bne s0 , x0 , else1 # a != 0 >> else

bne s1 , x0 , else2 # a=0 and  b != 0 >> else 2

li a0 , 4
la a1 , infinity
ecall

j exit
else2:

li a0 , 4
la a1 , nosolution
ecall

j exit

else1:

li a0 , 4
la a1 , solution
ecall

li t1 , -1
mul s1 , s1 , t1 
div t0 , s1 ,s0

li a0 , 1
add a1 ,x0 , t0
ecall

j exit

exit:

li a0 , 10
ecall
