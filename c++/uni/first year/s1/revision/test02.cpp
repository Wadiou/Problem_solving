#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout << "This program will calculate the sum or product and the numbers provided " <<endl;
    string response ;

    int number , sum = 0 , pro = 1 ;
    do
    {
       cout << "Enter the number";
       cin >> number ;
       sum += number ;
       pro *= number ;

       cout << "do you want to add more numbers ? if not write no ";

       cin >> response ;

    } while ( response != "no");
    cout << sum <<" , "<< pro ;
    
}