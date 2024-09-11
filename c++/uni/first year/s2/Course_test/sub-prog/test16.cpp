#include <iostream>

int main() {
    int value = 10;             // An integer variable
    int *ptr = &value;          // A pointer to the variable 'value'
    int **ptrToPtr = &ptr;      // A pointer to the pointer 'ptr'

    std::cout << "Value: " << value << std::endl;                         // Print the actual value
    std::cout << "Address of Value: " << &value << std::endl;             // Print the address of 'value'

    std::cout << "Pointer (ptr) stores address: " << ptr << std::endl;    // Address stored in 'ptr'
    std::cout << "Pointer (ptr) points to value: " << *ptr << std::endl;  // Dereferencing 'ptr' to get 'value'

    std::cout << "Pointer to Pointer (ptrToPtr) stores address: " << ptrToPtr << std::endl;    // Address stored in 'ptrToPtr'
    std::cout << "Pointer to Pointer (ptrToPtr) points to address: " << *ptrToPtr << std::endl; // Dereferencing 'ptrToPtr' once gets the address stored in 'ptr'
    std::cout << "Dereferencing Pointer to Pointer (ptrToPtr) twice gets value: " << **ptrToPtr << std::endl; // Dereferencing 'ptrToPtr' twice to get 'value'

    // Changing the value through ptr
    *ptr = 20;
    std::cout << "\nAfter changing value through ptr:" << std::endl;
    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer (ptr) points to value: " << *ptr << std::endl;
    std::cout << "Dereferencing Pointer to Pointer (ptrToPtr) twice gets value: " << **ptrToPtr << std::endl;

    // Changing the value through ptrToPtr
    **ptrToPtr = 30;
    std::cout << "\nAfter changing value through ptrToPtr:" << std::endl;
    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer (ptr) points to value: " << *ptr << std::endl;
    std::cout << "Dereferencing Pointer to Pointer (ptrToPtr) twice gets value: " << **ptrToPtr << std::endl;

    return 0;
}
