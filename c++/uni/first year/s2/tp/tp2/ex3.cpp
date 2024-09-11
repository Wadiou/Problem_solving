#include <iostream>
using namespace std;
double TAB[3];
double * tasks(double Number1 , double Number2, double Number3) // method1
{
    double *Pointer = TAB;

    Pointer[0] = Number1 + Number2 + Number3;
    Pointer[1] = Number1 * Number2 * Number3;
    Pointer[2]= Pointer[0] /3 ;
    return Pointer ;

}
double * tasks1(double Number1 , double Number2, double Number3) // method 2
{
    static double Array[3];
    double *Pointer = Array;

    Pointer[0] = Number1 + Number2 + Number3;
    Pointer[1] = Number1 * Number2 * Number3;
    Pointer[2]= Pointer[0] /3 ;
    return Pointer ;

}

int main()
{
    double Number1 ,Number2 ,Number3;
    cin>> Number1 >> Number2 >> Number3;

    double *Pointer = tasks1( Number1 ,Number2 ,Number3); // or task1 they are both the same
    for (size_t i = 0; i < 3; i++)
    {
        cout << Pointer[i] << endl ;
    }
    
}