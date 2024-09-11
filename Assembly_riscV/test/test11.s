.text
main:
    li a0, 5               # Assuming syscall 5 for input
    ecall                  # Read n into a1 (nth term)
    mv a2, a1              # Move nth term into a2
    jal fibonacci          # Calculate nth Fibonacci number
    li a0, 1               # Assuming syscall 1 for output
    mv a1, a2              # Move result into a1
    ecall                  # Output the nth Fibonacci number
    li a0, 10              # Exit syscall
    ecall

fibonacci:
    addi sp, sp, -8        # Allocate space on stack for two words
    sw ra, 4(sp)           # Save return address
    sw a2, 0(sp)           # Save current nth term
    li t0, 2               # Load t0 with 2, the base case for recursion
    blt a2, t0, base_case  # If n < 2, go to base case

    # Recursive case: f(n) = f(n-1) + f(n-2)
    addi a2, a2, -1        # Calculate f(n-1)
    jal fibonacci          # Recursive call
    lw t1, 0(sp)           # Load original nth term
    addi sp, sp, 8         # Restore the stack pointer before second recursive call
    addi t1, t1, -2        # Calculate f(n-2)
    mv a3, a2              # Store f(n-1) result in a3
    mv a2, t1              # Set up argument for f(n-2)
    jal fibonacci          # Recursive call for f(n-2)
    add a2, a3, a2         # f(n) = f(n-1) + f(n-2)
    j end_recursion        # Jump to end of recursion

base_case:
    # If n == 0, return 0; if n == 1, return 1
    seqz a2, a2            # Set a2 to 1 if n is zero else a2 remains unchanged
    lw ra, 4(sp)           # Restore return address
    addi sp, sp, 8         # Deallocate stack space

end_recursion:
    ret                    # Return from the function
