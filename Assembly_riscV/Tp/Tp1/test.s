.text
main:
addi a0, x0, 1 # used to print an integer (defining its type)
addi x4, x0, 2 # initialization of register x4, as x4=2
add a1, x0, x4 # a1=x4, the printed value is attributed to a1
ecall


addi a0, x0, 5 # used to read an integer
ecall
add t0, x0, a3 # t0= a3, the input value of a3 from the keyboard is attributed to t0

# double click on the cited register value in (6) before pointing on this instruction

addi a0, x0, 5 # used to read an integer
ecall
add t1, x0, a4 # t0= a3, the input value of a3 from the keyboard is attributed to t0

addi a0 , x0 , 1
add t2 , t1, t0
add a1 , x0 , t2
ecall

addi a0, x0, 10 # a0=10
ecall