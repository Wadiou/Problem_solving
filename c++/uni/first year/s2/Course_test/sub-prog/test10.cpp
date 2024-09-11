#include <iostream>
using namespace std;
int fibonacci(int N )
{
    if (N == 1 || N == 2)
    {
        return 1 ;
    }
    else
    {
        return fibonacci (N -1) + fibonacci (N -2) ;
    }
       
    
}
int main(){
    int X ;
    cin >> X; 
    cout << fibonacci (X) ;
}