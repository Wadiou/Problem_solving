.data
array: .word 1,5,2,8,6,4
size: .word 6
.text
main:
la s0 , array
la s1 , size

lw t0 , 0(s0)
lw t1 , 0(s1)
li t3 , 2
li t2 , 1 # i=1
fori:
    bgt t2 , t1 , exit
        rem t4 ,t0 , t3
        bne t4 , x0 , else
            add s2 , s2 , t0
        else:
        slli s3 , t2 , 2
        add s4 , s0 , s3
        lw t0 , 0(s4)
        addi t2 , t2 , 1
        j fori  
exit:
li a0 , 1
mv a1 , s2 
ecall
li a0 , 10
ecall
