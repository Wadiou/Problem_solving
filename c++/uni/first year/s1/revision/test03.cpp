#include <iostream>
using namespace std;
int main (){
    int number1 , number2 , max , gcd ;
    
    cin >> number1 >> number2 ;

    if ((number1 - number2) >= 0)
    {
        max = number1 ;
    }
    else max = number2 ;

    for (size_t i = 1; i <= (max / 2) ; i++)
    {
        if ((number1 % i == 0) && (number2 % i == 0) )
        {
            gcd = i ;
        }
        
    }
    cout << " The lcm is "<< (number1 * number2 )/gcd ;
    
    
    
}