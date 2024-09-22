#include <iostream>
using namespace std;

int main() {
    char character = 'A';
    int N = 4;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= (N - i); ++j) {
            cout << " ";
        }

        for (int k = 1; k < 2 * i; ++k) {
            cout << character;
            if (i % 2 == 0)
            {
                if (k % 2 == 0) {
                    character += 32;
                } else {
                    character -= 32;
                }
            }
            else
            {
                if (k % 2 == 0) {
                    character -= 32;
                } else {
                    character += 32;
                }
            }
            
        }

        cout << endl;
        character += 1;
    }

    return 0;
}
