#include <iostream>
#include <stdexcept>  // For standard exceptions
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero");  // Throw runtime_error for division by zero
    }
    return a / b;
}

int main() {
    int a = 10, b = 0;

    try {
        int result = divide(a, b);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Runtime error: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Caught an exception: " << e.what() << endl;
    } catch (...) {
        // Catch all exceptions that weren't caught by previous blocks
        cout << "Caught an unknown exception." << endl;
    }

    return 0;
}
