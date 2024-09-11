#include <iostream>

const int N = 5; 
const int M = 3; 
using namespace std;

int main() {
    int matrix[N][M]; 
    int array[10] = {0}; 
    
    
    cout << "Please enter the elements for a " << N << " by " << M << " matrix:" << endl;
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j]; 
        }
    }
    
    cout << "Matrix entered:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
    cout << matrix[i][j] << " ";
     }
    cout << endl; 
    }
}