.text
main:
# initialisation
li s0, 1
li s1, 3
li s3, 4
loop:
bge s0, s1, terminate
add s3, s3, s3
addi s0, s0, 1
jal x0, loop
terminate:
addi a0, x0, 1 # print an integer
add a1, x0, s3 # s3 ➔a1
ecall
end:
addi a0, x0, 10 # a0=10
ecall