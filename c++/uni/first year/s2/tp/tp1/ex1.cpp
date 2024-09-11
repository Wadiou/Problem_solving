#include <iostream>
using namespace std;
void hello()
{
    cout << "Welcome !" ;
}
int Sum(int A , int B)
{
    return A + B ;
}
double Abs(double A)
{
    if (A >= 0) 
    return A ;
    else 
    return -A ;
}
int factorial(int N)
{
    int fac = 1 ;
    for (int i = 1; i <= N; i++)
    {
        fac *= i;
    }
    return fac ;

}
int main()
{
    cout << "This program will perform these different subprograms mentioned below :  " << endl << endl << "1)\tDisplay Welcome " << endl <<"2)\tSum of two integers" << endl <<"3)\tAbsolute Value" << endl << "4)\tFactorial"<< endl << endl <<"Type the program you want to run : " ;
    int choice ;
    cin >> choice ; 
    switch (choice)
    {
    case 1:
        hello();
        break;
    case 2:
        {
            int A ,B ;
            cout << "Enter two integers successively : " ;
            cin >> A >> B ;
            cout << Sum(A , B)<< endl  ;
        }
        break;
    case 3:
        {
            cout << "Enter a real number : " ;
            double A ;
            cin >> A ;
            cout << abs (A) << endl;


        }
        break;
    case 4:
        {
            cout << "Enter a whole number : " ;
            int A ;
            cin >> A ;
            cout << factorial (A) << endl;
        }
        break;                    
    default:
        cout << "Out of range !" << endl ; 
        break;
    }
    system ("pause");
    return 0 ;
    
}