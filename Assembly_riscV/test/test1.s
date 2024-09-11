.data
a: .word -2
b: .word 2
text: .asciiz "texp"
.text 
main:
#binary
la t1 , a
la t0 , b
la s0 , text
lb t2 , 0(t1)
lh t2 , 0(t1)
lw t2 , 0(t1)
lhu t2 , 0(t1)

lb t3 , 0(t0)
lh t3 , 0(t0)
lw t3 , 0(t0)
lhu t3 , 0(t0)
#ascii
lb t2 , 0(s0)

li a0 , 4
mv a1 , t2
ecall

lb t2 ,1(s0)

li a0 , 4
mv a1 , t2
ecall

lh t2 , 0(s0)

li a0 , 4
mv a1 , t2
ecall

lw t2 , 0(s0)

li a0 , 4
mv a1 , t2
ecall

lhu t2 , 0(s0)

li a0 , 4
mv a1 , t2
ecall

ecall
