.text
.globl main

main:
    li t0, 0      # Initialize t0 to 0

loop:
    addi t0, t0, 1 # Increment t0
    blt t0, 10, loop # If t0 is less than 10, branch back to loop

    jal t1, forward_jump # Jump forward to the label forward_jump

    li a0, 1       # Exit syscall number
    li a1, 0       # Exit status
    ecall          # Make an exit syscall to stop the program

forward_jump:
    # Do something here
    addi t2, t0, 5  # Just an example instruction

    jalr zero, t1, 0 # Return to the instruction after the jal

# You would need to fill in the "Do something here" with actual code.
