.text
main:
li t0, -1
li t1, 1
sltu t2, t1, t0 # t2 = 0
addi a0, x0, 1 # a0 = 1 displaying an integer
add a1, x0, t2  # a1 = t2 = 0
ecall # 1 on the screen
slt t3, t1, t0 # t3 = 1
addi a0, x0, 1 # a0 = 1 displaying an integer
add a1, x0, t3   # a1 = t3 = 1
ecall 