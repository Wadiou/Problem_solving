#include <iostream>
#include <math.h>

using namespace std;

int main(){
    unsigned long long int bnum,dnum ,degit,exp ,iteration;
    exp=1;
    dnum=0;
    iteration=0;
    cout<<"give me a binary number"<<endl;
    cin>>bnum;
    if (bnum<=(pow(2,64)-1))
    {while (bnum>0)
    {
        iteration+=1;
        degit = bnum%10;
        dnum = dnum +degit*exp;
        exp *= 2;
        bnum /=10;
        cout<<"iteration number "<<iteration<<endl<<"******************"<<endl<<"the dnum is : "<<dnum<<endl<<"the exp is : "<<exp<<endl<<"the bnum is : "<<bnum<<endl;
    }
    }else cout<<"we can't convert this number give a smaller number or it's negative "<<endl;
    
    
    cout<<"the decimal form of it is "<<dnum<<endl;
    system("pause");
    return 0;
}
