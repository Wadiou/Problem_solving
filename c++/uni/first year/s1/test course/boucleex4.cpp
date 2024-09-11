#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int number,i;
    i=2;
    cin>>number;
    while ((i<=(number/2) && (number%i != 0)))
    {
        i += 1;
    }
    if (( i == ((number/2)+1)))
    {
        cout<<number<<" is a prime number ! "<<endl;

    }
    else cout<<number<<" isn't a prime number ! "<<endl;
   
    return 0;


    
}