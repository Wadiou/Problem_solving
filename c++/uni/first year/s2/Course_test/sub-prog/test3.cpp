#include <iostream>
using namespace std;
const int N = 3 ;
void display(int MAT[N][N]){

    int i , j ;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            cout << MAT[i][j] ;
            if (j < N -1)
            {
                cout << "," ;
            }
            
        }
        cout << endl ;
        
    }
    
}
int main(){
    int i , j , MAT1[N][N];
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            cin >> MAT1[i][j] ;
        }    
    }
    display(MAT1);
    
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            cout << MAT1[i][j] ;
            if (j < N -1)
            {
                cout << "," ;
            }
            
        }
        cout << endl ;
        
    }
}