#include <iostream>
using namespace std;

int main() {
    char character = 'A';
    int N = 4;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < N - i; ++j) {
            cout << " ";
        }

        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << character;
            character++;
        }

        cout << endl;
    }

    for (int w = N - 1; w > 0; --w) {
        for (int z = 0; z < N - w; ++z) {
            cout << " ";
        }

        for (int x = 0; x < 2 * w - 1; ++x) {
            cout << character;
            character++;
        }

        cout << endl;
    }

    return 0;
}
