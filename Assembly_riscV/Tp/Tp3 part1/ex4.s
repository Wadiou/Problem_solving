.data
phrase: .asciiz "Write your letter \n"
lower: .asciiz "Lower char \n"
upper: .asciiz "Upper char \n"
out: .asciiz "Out of range ! \n"

.text
main:
li t1 , 65
li t2 , 91
li t3 , 97
li t4 , 123

li a0 , 4
la a1 , phrase
ecall 

li a0, 5
ecall
add s0 , x0 , a1

blt s0 , t1 , exit
bge s0 , t2 , test1

li a0 , 4
la a1 , upper
ecall

test1:

blt s0 , t3 , exit
bge s0 , t4 ,exit

li a0 , 4
la a1 , lower
ecall

exit:

li a0 , 4
la a1 , out
ecall

li a0 , 10
ecall
