.data
a: .word -16000

.text
.globl main
main:
addi t1 , x0 , 2048
li t1 , 20484
sb t1 ,0(t0)
lb t1 , 0(t0)


ecall