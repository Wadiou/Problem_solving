#include <iostream>
using namespace std;
int main(){
    int k, p;
    
    cout << "Enter the number of rows in the matrix: ";
    cin >> k;

    cout << "Enter the number of columns in the matrix: ";
    cin >> p;

    const int N = p, M = k;

    int matrix[M][N], array[N] , i , j ;

    for ( i = 0; i < M; ++i) {
        for ( j = 0; j < N; ++j) {
            cout << "Enter the value at row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
    
    
}