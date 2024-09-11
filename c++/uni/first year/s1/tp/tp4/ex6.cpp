#include <iostream>
#include <math.h>
using namespace std ;
int main(){
    int num , inv = 0 ,dig ;
    cin >> num;
    int num1 = num ,num2 = num, j=0;
    while (num1 > 0) // n7sb 9edach fih mn degit
    {
        num1 = num1/10;
        j += 1;

    }
    int i = (j-1) ;
    while (num2 > 0) // conversion
    {
        dig = num2 % 10 ;
        num2 = num2 / 10 ;

        inv = inv + pow(10 , i)*dig;
        i -= 1;

    }
    
    cout <<"the inverse of "<<num<<" is "<<inv <<endl;
}