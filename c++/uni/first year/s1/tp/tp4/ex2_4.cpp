#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double S1 = 0 , S2 = 0 ,P = 1 ,N ,i;
    cout << "Enter a number : ";
    cin >> N ;
    for ( i = 1; i <= N; i++)
    {
        P = P * i ;
        S1 = S1 + i;
        S2 = 1/S1 + S2;
    }
    cout << " 1x2x.... "<< N <<" = "<< P <<endl ;
    cout << " 1+2+.... "<< N <<" = "<< S1 <<endl ;
    cout <<" 1 + 1/(1+2) + .... 1/(1+2+...."<<N <<") = " << S2 <<endl;
    return 0;
}