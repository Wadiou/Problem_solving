#include <iostream>
using namespace std;

int main() {
    const int N = 8;
    int vec1[N], vec2[N];
    int nI = 0, pI = 2 * N - 1;

    cout << "Enter " << N << " elements for the first array:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> vec1[i];
    }

    for (int i = 0; i < N; i++) {
        if (vec1[i] < 0) {
            vec2[nI+=1] = vec1[i];
        }
    }

    for (int i = N-1; i >= 0; i--) {
        if (vec1[i] >= 0) {
            vec2[pI-=1] = vec1[i];
        }
    }

    cout << "The values in vec2 are:" << endl;
    for (int i = 0; i < N; i++) {
        cout << vec2[i] << " ";
    }
    cout << endl;

    return 0;

}
