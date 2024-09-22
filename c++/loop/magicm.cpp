#include <iostream>
using namespace std;

int main() {
    double x, factorial = 1, sign = 1, power = 1, sin = 0;
    int terms,i;
    cout << "Enter the value of x in radians: ";
    cin >> x;
    cout << "Enter the number of terms: ";
    cin >> terms;

    for (i = 1; i <= terms; i++) {
        if (i % 2 == 1) {
            sin = sin + (x * sign) / factorial;
            power = power + i;
            for (size_t i = 0; i < power; i++)
            {
                x = x*x;
            }
            
            factorial = factorial * (i + 1) * (i + 2);
            sign = -sign;
        }
    }
    cout << "Sin(" << x << ") = " << sin << endl;

    return 0;
}
