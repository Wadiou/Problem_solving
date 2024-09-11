#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int d  , i, j ,n;
    cout << "What is the endpoint of prime numbers you want to see ";
    cin >> n ;
    cout << "The prime numbers are : ";
    for ( i = 1; i <= n; i++)
    {
        d = 0;
        for ( j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                d += 1;
            }
            
        }
        if (d == 2)
        {
            cout << i << " ,";
        }
        
        
        
    }
    
    
}