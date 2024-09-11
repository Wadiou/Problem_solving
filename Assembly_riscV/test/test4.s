.data
size: .word 4
arr: .word 0,0,0,0
.text
.globl main
main:

la t0 , arr
li t1 , 0
slli  t2 , t1 , 2
add t5 , t2 , t0
la t6 , size


for:
bge t1 ,   