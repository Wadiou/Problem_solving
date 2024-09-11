#include <iostream>
using namespace std;
int main()
{
    int N ;
    double X , Power = 1 , Factorial = 1 , sign = 1 ;
    cin >> N >> X ;
    double Sum = X ;
    if (N % 2 == 1)
    {
        for (size_t i = 3; i <= N; i+=2)
        {
            Power = Power*X*X;
            Factorial = Factorial*i*(i-1);
            Sum += sign * Power / Factorial;
            sign = -sign ;
        }
    }
    
    cout << Sum << endl ;
    
}