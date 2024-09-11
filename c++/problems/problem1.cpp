#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int i , n , fac;
    i=1;
    fac=1;
    cout<<"enter the valuse of the number you want to factorize it ! "<<endl;
    cin>>n;
    while (i<=n)
    {
        fac=i*fac;
        i+=1;
    }
    cout<<n<<"! is "<<fac<<endl;
    system ("Pause");
    return 0;    

}