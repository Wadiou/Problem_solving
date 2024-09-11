#include <iostream>
using namespace std;
int main(){
    int i , j , sum = 0 , counter = 0 , N ;
    cin >> N ;
    for ( i = 2; i <= N; i++)
    {
        counter = 0 ;
        for ( j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                counter += 1 ;
            }
            
        }
        if (counter == 0)
        {
            sum += i ;
        }
        
        
    }
    cout << sum ;
    
    
}