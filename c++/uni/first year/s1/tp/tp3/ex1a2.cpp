#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, e, A, B;
    
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "Enter the fourth number: ";
    cin >> d;
    cout << "Enter the fifth number: ";
    cin >> e;

    if (a <= b) {
        A = a;
    } else {
        A = b;
    }

    if (c <= d) {
        B = c;
    } else {
        B = d;
    }

    if (A <= B) {
        if (A <= e) {
            cout << A << " is the least among these numbers ";
        } else {
            cout << e << " is the least among these numbers ";
        }
    } else {
        if (B <= e) {
            cout << B << " is the least among these numbers ";
        } else {
            cout << e << " is the least among these numbers ";
        }
    }

    system("pause");
    return 0;
}
