#include <iostream>
using namespace std;
void reverse(int &A , int &B)
{
    if (A <= B)
    {
        int C ;
        C = A ;
        A = B ;
        B = C ;
    }
    
}
int GCD(int A ,int B)
{
    if (A % B == 0 )
    {
        return B ;
    }
    else
    {
        return GCD(B , A % B) ;
    }
    
}
int main()
{
    int X ,Y ;
    cin >> X >> Y ;
    reverse (X ,Y);
    cout << "The GCD is " << GCD ( X , Y) ;
}