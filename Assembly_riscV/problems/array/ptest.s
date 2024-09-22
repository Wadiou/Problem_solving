.data
char: .asciiz "A"
newline: .asciiz "\nHe"
space: .asciiz" "

.text
main:


la s1, newline
lb t0 , 0(s1)
lb t2 , 1(s0)
lb s0 , 2(s0)
lb s1 , 3(s0)
lb a0 , 4(s0)
lb a1 , 5(s0)
lw t1 ,0(s0)

Exit:
li a0 , 10
ecall
