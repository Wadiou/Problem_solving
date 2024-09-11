#include <iostream>
using namespace std;
int main() {
    const int N = 100;
    int array[N], i, j, target;
    cin >> target;

        for (i = 0; i < N; i++) {
        cin >> array[i];
    }
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (array[i] + array[j] == target)

                cout << "[" << i << "," << j << "]";
        }
    }
}