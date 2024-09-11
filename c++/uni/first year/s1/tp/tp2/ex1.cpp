#include <iostream>
#include <string> // gives a string type
#include <iomanip> // turns a bool value from 0,1 to false true
using namespace std;

int main() {
    int A, B, C, D, E, F;

    cout << "Enter the value for A: ";
    cin >> A;
    cout << "Enter the value for B: ";
    cin >> B;
    cout << "Enter the value for C: ";
    cin >> C;
    cout << "Enter the value for D: ";
    cin >> D;
    cout << "Enter the value for E: ";
    cin >> E;
    cout << "Enter the value for F: ";
    cin >> F;

    double G = (A * B) / (F);
    int H = (B + C) * (A + E);
    char I = 'A';
    double J = 2 * A / (B - C + F / D) * (E + C);
    int K = A % B / C;
    bool L = ((A > B) || (C > D)) && (A > F);
    bool M = !L && (K > 0.5);
    string N = "False";

    cout<<boolalpha; // use it when using iomanip library
    cout << "The value of G is: " << G << endl;
    cout << "The value of H is: " << H << endl;
    cout << "The value of I is: " << I << endl;
    cout << "The value of J is: " << J << endl;
    cout << "The value of K is: " << K << endl;
    cout << "The value of L is: " << L << endl;
    cout << "The value of M is: " << M << endl;
    cout << "The value of N is: " << N << endl;

    system ("pause");
    return 0;
}

