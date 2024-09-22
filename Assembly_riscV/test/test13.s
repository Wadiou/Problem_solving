    .text
    .globl _start
_start:
    # Call Fibonacci function with n (stored in a0)
    li a0, 4       # Example: Compute the 10th Fibonacci number
    call fib        # Result will be in a0

    # Exit the program (using system call)
    li a7, 93       # System call for exit in RISC-V
    ecall           # Make system call to exit

# Recursive Fibonacci function
# Argument:
#   a0 - n (the nth Fibonacci number to compute)
# Returns:
#   a0 - nth Fibonacci number
fib:
    addi sp, sp, -16   # Allocate stack frame (16 bytes)
    sw ra, 12(sp)      # Save return address
    sw a0, 8(sp)       # Save argument n

    li t0, 2           # Load immediate value 2 into t0
    blt a0, t0, base_case  # If n < 2, go to base_case

    # Recursive case: fib(n-1) + fib(n-2)
    addi a0, a0, -1   # n = n - 1
    call fib          # fib(n-1)
    sw a0, 4(sp)      # Store result of fib(n-1) in stack

    lw a0, 8(sp)      # Reload original n
    addi a0, a0, -2   # n = n - 2
    call fib          # fib(n-2)

    lw t1, 4(sp)      # Load result of fib(n-1) from stack
    add a0, a0, t1    # fib(n-1) + fib(n-2)

    j done            # Jump to done

base_case:
    li t2 ,1
    blt a0, t2, fib_0  # If n < 1, it's 0
    li a0, 1          # Else it's 1 for n = 1
    j done

fib_0:
    li a0, 0          # Fibonacci(0) = 0

done:
    lw ra, 12(sp)     # Restore return address
    addi sp, sp, 16   # Deallocate stack frame
    jr ra             # Return from function
