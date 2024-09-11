#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int bnum , dnum , degit;

    cout<<"Enter the binary number : "<<endl;
    cin>>bnum;

    degit = bnum % 10;  // First degit
    dnum = degit;
    bnum /= 10;

    degit = bnum % 10;
    dnum = dnum + degit*2;
    bnum /= 10;

    degit = bnum % 10;
    dnum = dnum + degit*pow(2,2);
    bnum /= 10;

    degit = bnum % 10;
    dnum = dnum + degit*pow(2,3);
    bnum /= 10;

    degit = bnum % 10;
    dnum = dnum + degit*pow(2,4);

    cout<<" The equivalent decimal number is : "<<dnum<<endl;

    system("pause");
    return 0;
}
