#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    double F ,C;
    cout<<"*********MENU*********"<<endl;
    cout<<"1- Fahrenheit to Celsius"<<endl;
    cout<<"2- Celsius to Fahrenheit"<<endl;
    cout<<"select the one you want by typing the number of the order"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
    cout<<"enter the temperature in Fahrenheit "<<endl;
    cin>>F;
    C=(5/9)*(F-32);
    cout<<"The temperature in Celsius is : "<<C<<endl;
        break;
    case 2:
    cout<<"enter the temperature in Celsius "<<endl;
    cin>>C;
    F=(9/5)*C+32;
    cout<<"The temperature in Fahrenheit is : "<<F<<endl;
        break;
    default:
    cout<<"The is no such case check the number again "<<endl;
        break;
    }
    system ("pause");
    return 0;


}