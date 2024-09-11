#include <iostream>
using namespace std;
int main()
{
    int number1,number2  , power  ,digit , len = 0 ,i ,j;
    cin >> number1 ;
    number2 = number1 ;
    while( number2 != 0)
    {
        number2 =  number2 / 10 ;
        len ++; 
    }
    for ( i = 0; i < len; i++)
    {
        digit = number1 % 10 ;
        number1 =number1 / 10 ;
        power = 1 ;

        for ( j = 1; j < len -i  ; j++)
        {
            power *= 10 ;
        }
        number2 += power*digit ;

         
    }
    cout << "The reversed number is : " << number2 ;
    



}