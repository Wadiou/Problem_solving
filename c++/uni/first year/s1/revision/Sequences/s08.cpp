#include <iostream>
using namespace std;
int main()
{
    int i , j , N;
    double x , term1  , sum=1 , Power = 0 ,limit ;
    cout << "Enter the value of N : " ;
    cin >> N ;
    cout << "Enter the value of X : " ;
    cin >> x ;
    for ( i = 1; i <= N; i++)
    {
        term1 = 1 ;
        limit = Power ;
        Power = 2 ;
        if (i >= 2)
        {
            for ( j = 1; j < limit; j++)
            {
                Power *= 2 ; 
            }
        }
        
        
        for ( j = 1; j <= Power; j++)
        {
            term1 *= x ; 
        }
        
        sum += term1 ;
    }
    cout << "The sum is " << sum ;
    system ("pause");
    return 0; 
    

}