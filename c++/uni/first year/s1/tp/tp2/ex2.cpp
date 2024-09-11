#include <iostream>
#include <iomanip> // turns a bool value from 0,1 to false true
#include <cmath>
#include <string>// gives a string type

using namespace std;

int main() {
    int A, B;
    double C;

    cout << "Enter the value of A: ";
    cin >> A;
    cout << "Enter the value of B: ";
    cin >> B;
    cout << "Enter the value of C: ";
    cin >> C;

    double M = A % B + pow(B, B); /*the power of B is optional "B^n" n is optional as they didnt restrict it */ 
    char D = '0';
    int F = M + C;
    string G = "expert";
    const double R = 5.4;
    double L = sin(C);
    bool H = false;
    bool I = B > 5;
    bool J = H || I;
    char K = D;
    const double pi = 3.14;
    double S = pi * pow(R, R);

    cout <<boolalpha;
    cout << "Values of variables:" << endl;
    cout << "M: " << M << endl;
    cout << "D: " << D << endl;
    if ((A != 0) && (M < 11000)) 
    {
        long double E = (B / A )* exp(M);
        cout << "E: " << E << endl; 
    }
    else{ cout << "we can't calculate E , either M is too big or A is equal to 0 "<< endl;}
    cout << "F: " << F << endl;
    cout << "G: " << G << endl;
    cout << "R: " << R << endl;
    cout << "L: " << L << endl;
    cout << "H: " << H << endl;
    cout << "I: " << I << endl;
    cout << "J: " << J << endl;
    cout << "K: " << K << endl;
    cout << "S: " << S << endl;

    if (A > 0) {
        float N = log(A);
        cout << "N is equal to : " << N << endl;
    } else {
        cout << "We can't calculate N" << endl;
    }

    system("pause");
    return 0;
}
