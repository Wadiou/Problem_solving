.data
c: .asciiz "Hola"
negative: .word -2
positive: .word 2
character: .byte 'z'
.globl _start

.text

_start:
    # srli - Shift Right Logical Immediate
    li a0, -100       # Load a value to shift
    li a1, 2         # Load the shift amount (2 in this case)
    srli a2, a0, 2   # Perform the shift
    # Result of srli will be in a2

    # srai - Shift Right Arithmetic Immediate
    li a0, -100      # Load a value to shift (negative in this case)
    li a1, 2         # Load the shift amount (2 in this case)
    srai a3, a0, 2  
    sltiu t0 , a0 , -1
     # Perform the arithmetic shift
    # Result of srai will be in a3

 
    # Result of sraiu will be in a4

    # lhu - Load Halfword Unsigned
    la a5, c     # Load upper immediate value of the address of data
       # Load lower immediate value of the address of data
    lh   a7,0(a5)
    lhu a6, 0(a5)    # Load halfword from memory to a6
    # Result of lhu will be in a6

    # lbu - Load Byte Unsigned
    lb a6, 2(a5)
    lbu a7, 2(a5)    # Load byte from memory to a7
    # Result of lbu will be in a7

    # lh - Load Halfword
    lh t1, 2(a5)     # Load halfword from memory to t1
    # Result of lh will be in t1

    # lw - Load Word
    lw t2, 4(a5)     # Load word from memory to t2
    # Result of lw will be in t2

    la a5, negative     # Load upper immediate value of the address of data
       # Load lower immediate value of the address of data
    lhu a6, 0(a5)    # Load halfword from memory to a6
    # Result of lhu will be in a6

    # lbu - Load Byte Unsigned
    lbu a7, 2(a5)    # Load byte from memory to a7
    # Result of lbu will be in a7

    # lh - Load Halfword
    lh t1, 2(a5)     # Load halfword from memory to t1
    # Result of lh will be in t1

    # lw - Load Word
    lw t2, 4(a5)     # Load word from memory to t2
    # Result of lw will be in t2

    la a5, positive     # Load upper immediate value of the address of data
       # Load lower immediate value of the address of data
    lhu a6, 0(a5)    # Load halfword from memory to a6
    # Result of lhu will be in a6

    # lbu - Load Byte Unsigned
    lbu a7, 2(a5)    # Load byte from memory to a7
    # Result of lbu will be in a7

    # lh - Load Halfword
    lh t1, 2(a5)     # Load halfword from memory to t1
    # Result of lh will be in t1

    # lw - Load Word
    lw t2, 4(a5)     # Load word from memory to t2
    # Result of lw will be in t2

    # Exit the program
    li a7, 10        # Exit syscall number
    ecall            # Perform syscall


