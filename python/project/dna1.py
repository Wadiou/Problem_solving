def calculate_num(N):
    result = 1
    current_sum = 0

    for i in range(1, N + 1):
        current_sum += i
        result *= current_sum

    return result

# Get user input for N
N = int(input("Enter the value of N: "))

# Calculate the number
num = calculate_num(N)

# Display the result
print(f"The calculated number is: {num}")
