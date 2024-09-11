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
    for ( i = 0; i < N; i++)
    {
        array[i] = 0;
    }
    
    
    for ( j = 0; j < N ; j++) {
        for ( i = 0; i < M; i++) {
            array [j] = matrix[i][j] + array [j];
        }
    }
    cout << "The array is : " <<endl ;
    for ( i = 0; i < N; i++)
    {
        cout<<array[i] ;
        if (i < N -1 )
        {
            cout << ",";
        }
        
    }
    
}