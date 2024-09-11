#include <iostream>
using namespace std;
void display(int A , int B ,int C ,int D , int E)
{
    cout << A << endl << B << endl << C << endl << D << endl << E <<endl ;
}

int main(){
    int A = 1 ,B = 2 , C = 3 , *P1 = &A ,*P2 = &B;
    *P1 = *P2; // A=2

    *P2 += 1 ; //B =3

    P1 = P2 ;//p1 >> B =3
    P2 = &A ; // P2 >> A=2
    *P2= *P1 -2**P2; // 3 -2*2 = -1

    *P2 -= 1; // -2

    C += *P2 ; //C = 1

    *P2 *= A ;// 4


    display (A , B ,C , *P1 , *P2);





}