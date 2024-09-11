#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int num ,rev ,degit;

    cout<<" Enter a three degit number : "<<endl;
    cin>>num;

    degit = num%10;
    rev = degit*10*10;
    num /= 10;

    degit = num%10;
    rev = rev + degit*10;
    num /= 10;

    degit = num%10;
    rev = rev + degit;

    cout<<"The reverse of the number you have just given is : "<<rev<<endl;
    
    system("pause");
    return 0;
}
