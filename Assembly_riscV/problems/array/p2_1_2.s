.data
array: .word 1,5,2,8,6,4
size: .word 6
.text
main:
la s0 , array
la s1 , size

lw t0 , 0(s0)
li t6 , 1
li t2 , 0 # i = 0
fori:
    bgt t2 , t6 , exit
    li t1 , 0 # j = 0 
    lw t5 , 0(s1)
    addi t5 , t5 , -1
    sub t5 , t5 , t2
    forj:
        bge t1 , t5 , inci
        addi t3 , t1 , 1
        slli t4 , t1 , 2 # a [j]
        slli t3 , t3 , 2 # a[j+1]
        add t3 , s0 , t3
        add t4 ,s0 ,t4
        lw s3 , 0(t4)# a [j]
        lw s2 , 0(t3)# a[j+1]
        blt s3 , s2 , incj
        sw s3 ,0(t3)
        sw s2 ,0(t4)
        incj:
        addi t1 ,t1 , 1
        j forj
    inci:
    addi t2 , t2 , 1
    j fori




    
exit:
li a0 , 1
mv a1 , s3 
ecall
li a0 , 10
ecall
