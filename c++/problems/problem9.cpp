#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int Mat[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i) 
            {
                Mat[i][j] = 0;
            }
            else if (i == j || j == 0) 
            {
                Mat[i][j] = 1;
            }
            else
            {
                Mat[i][j] = Mat[i - 1][j] + Mat[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Mat[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}
