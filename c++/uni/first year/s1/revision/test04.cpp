#include <iostream>
using namespace std;
int main()
{
    int N ;
    double  Sn , Sn_1 = 1 , Sn_2 = 0.5 ;
    cin >> N ;
    for (size_t i = 2; i <= N; i++)
    {
        Sn = 3*Sn_1 -5*Sn_2 ;
        cout << "for n =  " << i << endl ; 
        cout << "Sn = " << Sn << endl ;
        cout << "Sn-1 = " << Sn_1 << endl ;
        cout << "Sn-2 = " << Sn_2 << endl << endl;
        Sn_2 = Sn_1 ;
        Sn_1 = Sn ;
        
    }
       
}