#include <iostream>
using namespace std;

void exchange(double &a, double &b) {
    double X;
    X = a;
    a = b;
    b = X; 
}

int main() { 
    double A, B, C;
    cin >> A >> B >> C;
    if (A <= B) {
        exchange(A, B);
    }
    if (A <= C) {
        exchange(A, C);
    }
    if (B <= C) {
        exchange(B, C);
    }
    cout << A << " , " << B << " , " << C;

    return 0; 
}    
