#include <iostream>
using namespace std;
int main(){
    const int N=4;
    int matrix [N][N] , sum1 = 0 , sum2 = 0, sum3 = 0 ,i ,j;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            cout << "Enter the value of the row number " << i << " and the column number " << j <<endl;
            cin >> matrix [i][j];
        }
        
    }
    
    for (i = 0; i < N ; i++)
    {
        
        for (j = 0; j < N; j++)
        {
            if (i == N-1)
            {
                sum1 = sum1 + matrix [i][j];
            }
            if (i == j )
            {
                sum2 = sum2 + matrix [i][j];
            }
            if (i + j == N - 1 )
            {
                sum3 = sum3 + matrix [i][j];
            }
            
            
        
        }
    
    }
    cout << "The sum of the last row is " << sum1 << endl ;
    cout << "The sum of the first diagonal is " << sum2 << endl ;
    cout << "The sum of the second diagonal is " << sum3 << endl ;

}