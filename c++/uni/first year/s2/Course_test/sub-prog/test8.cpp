#include <iostream>
using namespace std;
const int N = 2;
void printMatrix(double M[N][N]) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            cout << M[i][j]<< "\t" ;
        }
        cout << endl; 
    }
}

void add(double A[N][N] , double B[N][N])
{
    for (size_t i = 0; i < N; i++)
    {
        for (size_t k = 0; k < N; k++)
        {
            A[i][k] += B[i][k];
        }
        
    }
}
void read(double A [N][N]){
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            cin >> A[i][j]  ;
        }
        
    }
}
int main()
{
    double A[N][N] , B[N][N];
    read(A);read(B);
    add(A,B);

    printMatrix(A);
    return 0;
    
}