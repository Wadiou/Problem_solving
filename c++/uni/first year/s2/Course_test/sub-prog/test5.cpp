#include <iostream>
using namespace std;
void sort(double A , double B , double C)
{
    if (A >= B)
    {
        if(A>= C)
        {
            cout << "THe order of the number is : " << A ;
            if(B >= C){
                cout <<" , "<<B <<" , "<< C ;
            }
        }
        else {
            cout << "THe order of the number is : " << C <<" , "<<A <<" , "<< B;

        }
    } else{
        if (B >= C)
        {
            cout << "THe order of the number is : " << B ;
            if(A >= C){
                cout <<" , "<<A <<" , "<< C ;
            }

        }
        else {
            cout << "THe order of the number is : " << C <<" , "<<B <<" , "<< A ;
        }
    }
    
}
int main() 
{
    int a , b ,c ;
    cin >> a >> b >> c ;
    sort(a , b ,c);

}