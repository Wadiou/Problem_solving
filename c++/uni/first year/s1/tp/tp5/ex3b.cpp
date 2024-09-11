#include <iostream>
using namespace std;

int main() {
    const int N = 8;
    int vec1[N], vec2[N], vec3[2 * N];
    int nI = 0, pI = 2 * N - 1;

    cout << "Enter " << N << " elements for the first array:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> vec1[i];
    }

    cout << "Enter " << N << " elements for the second array:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> vec2[i];
    }

    for (int i = 0; i < N; i++) {
        if (vec1[i] < 0) {
            vec3[nI] = vec1[i];
            nI ++ ;
        }
        if (vec2[i] < 0) {
            vec3[nI] = vec2[i];
            nI ++ ;
        }
    }

    for (int i = N - 1; i >= 0; i--) {
        if (vec2[i] >= 0) {
            vec3[pI] = vec2[i];
            pI--;
        }
        if (vec1[i] >= 0) {
            vec3[pI] = vec1[i];
            pI --;
        }
    }

    cout << "The values in vec3 are:" << endl;
    for (int i = 0; i < 2 * N; i++) {
        cout << vec3[i] << " ";
    }
    cout << endl;

    return 0;
}
