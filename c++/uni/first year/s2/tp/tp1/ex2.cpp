#include <iostream>
using namespace std;
int GCD(int A , int B )
{
    if (A%B == 0)
    {
        return B ;
    }
    else
    {
        return GCD(B , A % B) ;
    }
    
}
int LCM(int A , int B)
{
    return (A*B)/GCD(A,B) ;
}
int invert(int A , int B)
{
    if (A >= B)
    {
        return A ;
    }
    else return B ;
    
}
int GCD_LCM(int A , int &B)
{
    int C, a , b ;
    a = A ; b = B ;
    while (A % B != 0)
    {
        C = A% B ;
        A = B ;
        B = C ;
        
    }
    return (a*b)/B ;
    
}
int main()
{
    cout << "This program will perform these different subprograms mentioned below :  " << endl << endl << "1)\tCalculates GCD only " << endl <<"2)\tCalculates LCM only" << endl <<"3)\tDisplay GCD & LCM " << endl<< endl ;
    int A ,B ;
    do
    {
        cout << "Enter two stricetly positive integers successively :" ;
        cin >> A >> B ; 
    } while ((A == 0 ) || (B == 0));
    invert(A , B) ;
    cout << "Now enter your choice : " ;
    int choice ;
    cin >> choice ;
    switch (choice)
    {
    case 1:
       cout <<"The GCD is " <<GCD(A , B) << endl;
        break;
    case 2:
        cout <<"The LCM is " <<LCM(A , B)<< endl;
        break;
    case 3:
        cout<<"The LCM is " <<GCD_LCM(A,B)<<" and the GCD is " << B<< endl ; /*this method used For training on multiple outputs and different algorithms*/
        break;
              
    default:
        cout << "Out of range !"<< endl ; 
        break;
    }
    system ("pause");
    return 1;
    
    
    


}
    