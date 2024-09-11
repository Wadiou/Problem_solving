#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sr = sqrt(num);
    if ((sr*sr) == num)
    {
        cout<<num<<" is a perfect square"<<endl;
    }else cout<<num<<" isn't perfect square"<<endl;
    
    system ("pause");
    return 0;
}