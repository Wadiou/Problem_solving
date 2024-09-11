#include <iostream>
using namespace std;
int main(){
    const int N = 8;
    int Mat[N][N] , i , j , i1 , j1;
    cin >> i1 >> j1 ;

    for  (i = 0; i < N ; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if (i1 - j1 == i - j)
            {
                Mat[i][j] = 1 ;
            }
            else if ( i1 + j1 == i + j)
            {
                Mat[i][j] = 1 ;
            }
            else

            Mat[i][j] = 0 ;
        }
        
    }
    

    

    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            cout <<"["<<Mat[i][j]<<"]" ;
             
        }
        cout << endl ;
        
    }
    
    
    
}