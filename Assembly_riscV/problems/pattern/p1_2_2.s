.data

char: .asciiz"A"
newline: .asciiz"\n"
.text
main:
la t3 ,char # t3 = &char
lb t5 , 0(t3)
la t6 , newline
li s4 ,2
li s8 ,1
#input
li s0 , 4


li t0 , 1 # i=1
fori:
    bgt t0 , s0 , Exit # i <= N
    li t1 , 1 # j = 1
    forj:
        rem s3 , t0 ,s4 # s3 = i%2

        bgt t1 , t0 , inci # j <= i
        #output

        beq s3 , x0 , else  
            # i%2 == 1
            addi s5 , t0 , -1 
            add s5 ,s5 , t1 # s5 = i+j-1
            li a0 , 1
            mv a1 , s5
            ecall

            j incj
        else:
        # i%2 == 0
        bne t1 , s8 , else2 # j == 1
            addi s6 , s6 , 1 # counter ++
            else2:
            li a0 , 4
            mv a1 , t3 # display char
            ecall
            addi t5 , t5 , 1 # char ++
            sb t5 , 0(t3)

    incj:
    addi t1 , t1 , 1 # j++
    j forj
inci:
#display \n
li a0 , 4
mv a1 , t6
ecall

rem a5 , s6 , s4 # a5 = counter%2
bne s3 , x0 , inci1 # i%2 ==0
    beq a5 ,x0 , else1 # counter%2 != 0
        addi t5 , t5 ,32 # uppercase
        sb t5 ,0(t3)
        j inci1
    else1:
    addi t5 , t5 , -32 # lowercase
    sb t5 ,0(t3)
inci1: 
addi t0 , t0 ,1 # i++
j fori

Exit:
li a0 , 10
ecall

