#include <cassert>  // include assert macro
#include <iostream>
using namespace std;

void checkAge(int age) {
    assert(age >= 0 && age <= 150);  // Check if age is within a valid range
    cout << "Valid age: " << age << endl;
}

int main() {
    checkAge(25);  // Valid
    checkAge(-5);  // Will cause an assertion failure
    return 0;
}
