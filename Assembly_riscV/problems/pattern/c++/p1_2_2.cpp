#include <iostream>
using namespace std;
int main() {
    char character = 'A';
    int N = 4;
    int counter = 0;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i % 2 == 1) {
                int output = i + j - 1;
                cout << output;
            } else {
                if (j == 1) {
                    ++counter;
                }
                cout << character;
                ++character;
            }
        }

        cout << endl;

        if (i % 2 == 0) {
            if (counter % 2 == 0) {
                character -= 32; // Convert to uppercase
            } else {
                character += 32; // Convert to lowercase
            }
        }
    }

    return 0;
}
