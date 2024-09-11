#include <iostream>
using namespace std;
int main()
{
    const int N = 4 ;
    int Mat[N][N] , i, j , M[N], max , row;

    for ( i = 0; i < N; i++)
    {
        M[i] = 0 ;
        for ( j = 0; j < N; j++)
        {
            cout <<"Enter the value of the cell ["<< i + 1 <<","<< j + 1 <<"] : " ;
            cin >> Mat[i][j] ;
            M[i] += Mat[i][j] ;
        }
                
    }
    max = M[0];
    for ( i = 0; i < N; i++)
    {
        if (M[i] >= max)
        {
            max = M[i] ;
            row = i + 1 ;
        }
        
    }
    cout <<"The lagest sum in the rows " << max << " for the row number : " << row ;
    
    
}