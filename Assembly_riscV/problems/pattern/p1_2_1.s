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
li s4 ,2
li t4 , 1
li t0 , 1 # i=1
li s3 , 4 # input
fori:
    bgt t0 , s3 , Exit # i <= N
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
        rem s6 , t3 ,s4 # s3 = k%2
        bge t3 , t2 , inci # k < 2*i
            bne s7 , x0 , else1 # i%2 ==0
                bne s6 , x0 , else2 # k%2 == 0
                    li a0 , 4
                    mv a1 ,s0
                    ecall

                    addi s5 , s5 , 32
                    sb s5 , 0(s0)
                    j inck
                else2:
                    li a0 , 4
                    mv a1 ,s0
                    ecall
                    
                    addi s5 , s5 , -32
                    sb s5 , 0(s0)
                    j inck
            else1:
                bne s6 , x0 , else3 # k%2 == 0
                    li a0 , 4
                    mv a1 ,s0
                    ecall

                    addi s5 , s5 , -32
                    sb s5 , 0(s0)
                    j inck
                else3:
                    li a0 , 4
                    mv a1 ,s0
                    ecall
                    
                    addi s5 , s5 , 32
                    sb s5 , 0(s0)
                    j inck   
        inck:
        addi t3 , t3 , 1
        j fork

    inci:
    #display \n
    li a0 , 4
    mv a1 , s1
    ecall
    addi s5 , s5 , 1
    sb s5 , 0(s0) 
    addi t0 , t0 ,1 # i++
    j fori

Exit:
li a0 , 10
ecall
