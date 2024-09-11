#include <iostream>
using namespace std;
int main()
{
    int i , N;
    double x , term1=1 ,term2 = 1, term3 , sum=1 , factorial1 = 1  , factorial2 = 1;
    cout << "Enter the value of N : " ;
    cin >> N ;
    cout << "Enter the value of X : " ;
    cin >> x ;
    for ( i = 1; i <= N; i++)
    {
        term3 = 1 ;
        factorial1 *= i ; 
        term1 *= x*x ;
        factorial2 *= factorial1 ;
        term2 = term1 / factorial2 ;
        for (int j = 1; j <= factorial1; j++)
        {
            term3 *= term2 ;
        }
        sum += term3 ;
    }
    cout << "The sum is " << sum ;
    system ("pause");
    return 0;
}