#include <iostream>
using namespace std;
void inverse()
{
    char a;
    cin.get(a) ;
    if (a != '.')
    {
        inverse() ;
        cout<<a;
    }
    
}
int main()
{
    cout <<"Enter a string you want to reverse it " ;
    inverse();
}