#include <iostream>
using namespace std;
int main()
{
    int N ;
    double X , Sum = 1, Power = 1 , Factorial = 1 ;
    cin >> N >> X ;
    for (int i = 1; i <= N; i++)
    {
        Power *= X ;
        Factorial *= i ;
        Sum += Power/Factorial;
        cout <<"the sum is : "<< Sum << endl << endl << endl;    
        
        
    }
    cout << Sum << endl ;
    
}