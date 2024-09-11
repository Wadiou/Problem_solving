#include <iostream>
using namespace std;

int main() {
    int i, j, k, N;
    long double sum = 0.5, Power, limit, term;

    cout << "Enter the value of N 'Highest exponent in the tower': ";
    cin >> N;

    for (i = 2; i <= N; i += 2) {
        Power = 1;

        if (i >= 4) {
            for (j = 1; j <= i; j++) {
                Power *= (i - 2);
            }
        } else {
            Power = 2; 
        }

        for (j = i - 4; j >= 2; j -= 2) {
            limit = Power;
            Power = 1;
            for (k = 1; k <= limit; k++) {
                Power *= j;
            }
        }

        term = 1;
        for (j = 1; j <= Power; j++) {
            term *= 0.5;
        }

        sum += term;
    }

    cout << "The sum is " << sum << endl;

    system ("pause");
    return 0;
}
