#include <iostream>
using namespace std;
int main()
{
    const int N = 4 ;
    int Mat[N][N] , i, j , temp;

    for ( i = 0; i < N; i++)
    {

        for ( j = 0; j < N; j++)
        {
            cout <<"Enter the value of the cell ["<< i + 1 <<","<< j + 1 <<"] : " ;
            cin >> Mat[i][j] ;
           
        }
                
    }
    for ( i = 0; i < N; i++)
    {

        for ( j = 0; j < N; j++)
        {
            
                temp = Mat[i][j] ;
                Mat[i][j] = Mat[N -j -1][N- i - 1];
                Mat[N -j -1][N- i - 1] = temp ;
              
        }
                
    }
    
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            cout <<"["<<Mat[i][j] <<"]" ;
        }
        cout << endl ;
        
    }
    
}