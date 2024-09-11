#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    int A = 1, B = 2, C = 3;
    int *P1, *P2;
    
    // Pointer operations
    P1 = &A;           // P1 points to A
    P2 = &C;           // P2 points to C
    *P1 = (*P2)++;     // A = C (post-increment, so C becomes 4)
    P1 = P2;           // P1 now points to C
    P2 = &B;           // P2 points to B
    *P1 -= *P2;        // C = C - B (C = 4 - 2 = 2)
    *P1 = ++(*P2);              // P2 points to next memory location (undefined behavior)
    *P1 *= *P2;        // C = C * (*P2) (undefined behavior due to ++P2)
    A = *P2 ** P1;     // A = (*P2) * C (undefined behavior due to ++P2)

    // More operations
    P1 = &A;           // P1 points to A
    P2 = &B;           // P2 points to B
    *P2 += *P1;        // B = B + A
    C = *P1 - *P2;     // C = A - B
    B = *P1 * *P2;     // B = A * B
    A = *P2 / *P1;     // A = B / A

    // Array operations
    int Tab[6] = {1, 4, 8, -6, 2, 7};
    int *P = Tab;

    // Output values using pointer arithmetic
    cout << *P << endl;       // First element (1)
    cout << ++(*P) << endl;   // Increment first element and print (2)
    cout << *P++ << endl;     // Print first element (2) and move pointer to next element
    cout << *++P << endl;     // Move pointer to next element and print (8)
    cout << (*P)++ << endl;   // Print element (8) and increment it (9)
    cout << *(P++) << endl;   // Print element (9) and move pointer to next element
    cout << (*P)++ << endl;   // Print element (-6) and increment it (-5)
    cout << *(P-2) << endl;   // Print element before the last increment (8)

    // Print modified array
    cout << "Tab after modification: " << endl;
    for (P = Tab; P <= &Tab[5]; ++P) {
        cout << *P << endl;
    }

    return 0;
}
