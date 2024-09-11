#include <iostream>
using namespace std;
int main()
{
    int i , k , N;
    double x , term1=1 ,term2  , sum=1 , Power = 1  , factorial = 1;
    cout << "Enter the value of N : " ;
    cin >> N ;
    cout << "Enter the value of X : " ;
    cin >> x ;
    for ( i = 1; i <= N; i++)
    {
        term2 = 1 ;
        factorial *= i ; 
        for ( k = 1; k <= factorial ; k++)        
        {
            Power *= i ;
        }
         
        term1 = 1/x ;
        for (int j = 1; j <= Power; j++)
        {
            term2 *= term1 ; 
        }
        sum += term2 ;
    }
    cout << "The sum is " << sum ; 
    system ("pause");
    return 0;
    

}