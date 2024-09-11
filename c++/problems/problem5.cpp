#include <iostream>
using namespace std;
int main()
{
    int num ,i ,product;
    cout<<"Please enter the number you want to see it's multiplication table ! "<<endl;
    cin>>num;
    cout << "The table of multiplication for " << num << " is : " << endl;
    for ( i = 0; i <= 10 ; i +=1 )
    {
        product = num*i;
        cout<<i<<" x "<<num<<" = "<<product<<endl;
    }
    cout<<"***************************************"<<endl;
    
}