#include <iostream>
using namespace std;

int main() {
    int k, p;
    
    cout << "Enter the number of rows in the matrix: ";
    cin >> k;

    cout << "Enter the number of columns in the matrix: ";
    cin >> p;

    const int N = p, M = k;

    int matrix1[M][N], matrix2[N][M];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Enter the value at row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix2[j][i] = matrix1[i][j];
        }
    }

    cout << "The transposed matrix is: " << endl;
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < M; ++i) {
            cout << matrix2[j][i];

            if (i < M - 1) {
                cout << ",";
            }
        }
        cout << endl;
    }

    return 0;
}
