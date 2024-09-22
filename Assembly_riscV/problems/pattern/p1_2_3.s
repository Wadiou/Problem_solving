.data
char: .asciiz "A"
newline: .asciiz "\n"
space: .asciiz" "

.text
main:

la s0, char
la s1, newline
la s2 , space
lb s5 , 0(s0)
li t0 , 1 # i=1
li s3 , 4 # input
fori:
    bgt t0 , s3 , down # i <= N
    sub t2 , s3 , t0 # t2 = N-i
    rem s7 , t0 , s4 # s7 = i%2
    li t1 , 1 # j = 1
    forj:
        bgt t1 , t2 , intk # j <= N-i
        #output
        li a0 , 4
        mv a1 , s2
        ecall

        incj:
        addi t1 , t1 , 1 # j++
        j forj
    intk:
    li t3 , 1 # k = 1 
    slli t2 , t0 , 1 # t2 = 2*i   
    fork:
        bge t3 , t2 , inci # k < 2*i
            li a0 , 4
            mv a1 , s0
            ecall
            addi s5 ,s5 , 1
            sb s5 , 0(s0)
        inck:
        addi t3 , t3 , 1
        j fork

    inci:
    #display \n
    li a0 , 4
    mv a1 , s1
    ecall
    addi t0 , t0 ,1 # i++
    j fori

down:
addi t5 ,s3 ,-1 # w= N-1
forw:
    ble t5 , x0 , exit 
    sub t6 , s3 , t5 # z= N-w
    forz:
        ble t6 , x0 , intx
            #output
            li a0 , 4
            mv a1 , s2
            ecall
            decz:
            addi t6 , t6 , -1 # z--
            j forz
    intx:
    li t3 , 1 # x = 1 
    slli t2 , t5 , 1 # t2 = 2*w
    forx:
        bge t3 , t2 , decw # k < 2*w
            li a0 , 4
            mv a1 , s0
            ecall
            addi s5 ,s5 , 1
            sb s5 , 0(s0)
            incx:
            addi t3 , t3 , 1
            j forx
    decw:
    li a0 , 4
    mv a1 , s1
    ecall
    addi t5 , t5 , -1
    j forw
exit:
li a0 , 10
ecall    