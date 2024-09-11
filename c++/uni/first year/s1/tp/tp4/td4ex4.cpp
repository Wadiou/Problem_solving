#include <iostream>
using namespace std;
int main()
{
    int A , B , C , D ,E ;
    cout << "Enter two strictly positive integers you want to calculate their GCD : " << endl;
    cin >> A >> B ;
    if (A <= B) 
    {
        D = B ;
        E = A ;
    }
    else 
    {
        D = A ;
        E = B ;
    }
    if ((D > 0) && (E > 0))
    {
        while (D % E != 0)
        {
            C = D ;
            D = E ;
            E = C % E ;
        }
        cout << "The Gcd of " << A <<" and " << B << " is " << E <<endl ;
        
    } else cout << "Can't be calculated ! "<<endl ;
    return 0;
}