#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i , sum ;
    sum=0;
    for ( i = 2 ; i <= 100 ; i += 2 )
    {
        sum = sum + i;
        cout<<"The number of the iteration is "<<i/2<<endl<<"The value of i is "<<i<<endl<<"the value of the sum is "<<sum<<endl;
    }
    cout<<"The number of the last iteration is "<<i/2<<endl<<"The value of the last i is "<<i<<endl<<"the value of the sum is "<<sum<<endl;
}