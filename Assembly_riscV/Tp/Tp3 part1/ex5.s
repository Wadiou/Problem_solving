.data 
input: .asciiz"Enter a score ! \n"
out : .asciiz"Out of range ! \n"
A : .asciiz"A+"
B : .asciiz"B+"
C : .asciiz"C+"
F : .asciiz"F"
.text
.globl main

li a0 , 4
la a1 , input
ecall

li a0 ,5
ecall
add s0 , x0 , a1  # s0 >> score

li t0 , 20
li t1 , 16
li t2 ,11
li t3 , 6

blt s0 , x0 , else1
bgt s0 , t0 , else1

blt s0 , t1 , else2

li a0 , 4
la a1 , A

j exit

ecall

else2:

blt s0 , t2 ,else3

li a0 , 4
la a1 , B

j exit


ecall

else3:

blt s0 , t3 , else4

li a0 , 4
la a1 , C

j exit


ecall

else4:

li a0 , 4
la a1 , F

j exit


ecall

else1:

li a0 , 4
la a1 , out

j exit


ecall

exit :
li a0 , 10
ecall





