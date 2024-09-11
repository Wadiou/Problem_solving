#include <iostream>
using namespace std;
int main()
{
    int A , N, i=0;
    cin>>A>>N;
    cout<<" multiplication of "<<A<<" are :"<<endl;
    do
    {
        cout<<A<<" x "<<i<<" = "<<A*i<<endl;
        i += 1;
    } while (A*i <= N);
    
    
    

    return 0;
}