#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n, sum , p=1;
    int k,i;
    cin>>k;
    
    for ( i = 1; i <= k; i+=2)
    {
        n=i;
        sum=sum+(1/n)*p;
        p=p*(-1);
    }
    cout<<" pi = "<<4*sum;
    
    return 0;
}
    