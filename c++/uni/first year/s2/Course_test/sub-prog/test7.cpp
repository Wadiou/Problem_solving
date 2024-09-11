#include <iostream>
using namespace std;

double factorial(int N)
{
    double f = 1 ;
    for (int i = 1; i <= N; i++)
    {
        f = f * i ; 
    }
    return 1/f ;
}
double power(double X , int N)
{
    double power = 1;
    for ( int i = 1; i <= N; i++)
    {
        power = power * X ;
    }
    return power ;
    
}
int main()
{
    int N ; double X ;
    cin >> X >> N ;
    double sum = 1 ;
    for (int i = 1; i <= N; i++)
    {
        sum = sum + power(X , i)*factorial(i) ; 
    }
    cout << "exp("<<X <<") = " <<sum ;
}
