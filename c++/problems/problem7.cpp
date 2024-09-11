#include <iostream>
using namespace std;
int main()
{
    int num ,i ,term2 = 1 ,term3=2 ;

    cout<<"Enter the number of terms of the Fibonacci Serie you want to see ! " << endl;
    cin >> num ;

    switch (num)
    {
    case 0 :
        cout << "Fibonacci Series: " << endl;
        break;
    case 1 :
        cout << "Fibonacci Series: " << endl << " 0 ";
        break;    
    case 2 :
        cout << "Fibonacci Series: " << endl << " 0 , 1 ";
        break;
    case 3 :
        cout << "Fibonacci Series: " << endl << " 0 , 1 , 1 ";
        break;
    case 4 :
        cout << "Fibonacci Series: " << endl << " 0 , 1 , 1 , 2 ";
        break;    
    default:
        cout << "Fibonacci Series: " << endl << " 0 , 1 , 1 , 2 ";
        for ( i = 0 ; i <= (num - 5) ; i += 1 )
        {
            term3 = term2 + term3;
            term2 = term3 - term2;
            cout << ", " << term3 << " " ;
        }
        break;
    }
    
}