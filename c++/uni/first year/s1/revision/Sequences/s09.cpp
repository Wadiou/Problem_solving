#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i , j , k , N;
    long double sum=2 , Power = 0 ,limit ;
    cout << "Enter the value of N : " ;
    cin >> N ;
    for ( i = 3; i <= N; i++)
    {
        
        /*Power = pow((i-1),(i)) ;*/
        Power = 1 ;
        for (int  j = 1; j <= i; j++)
        {
            Power *= (i-1) ;                
            cout << "The power is : "<< Power <<" For , i = "<< i << " , j = " <<j <<endl <<endl;
        }
                    
        for ( j = i-2; j >= 2; j -= 1)
        {

            /*Power = pow(j , Power)*/
            limit = Power ;
            Power = j ;
            for ( k = 1; k < limit; k++)
            {
                Power *= j ;
                cout << "The power is : "<< Power <<" For , i = "<< i << " , j = " <<j << ", k = "<< k <<endl <<endl;
            }
                
        }
        
        sum += Power ;
    }
    cout << "The sum is " << sum ;
    system ("pause");
    return 0; 
    

}