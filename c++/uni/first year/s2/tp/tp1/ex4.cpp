#include <iostream>
using namespace std;
#define N 100
void read_vec(double A [N] , int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of cell number " << i+1 << " : ";
        cin >> A[i] ;   
    }   
}
void sum_vec(double C[N], double A[N],double B[N], int size)
{
    for (int i = 0; i < size; i++)
    {
        C[i] = A [i] + B[i]  ;   
    }
}
double dot_product(double A[N],double B[N], int size)
{
    double dot = 0;
    for (int i = 0; i < size; i++)
    {
        dot += A [i] * B[i] ;
    }

    return dot ;

}
void display_vec(double A[N], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout <<"\t"<< A[i]  ;                    
    }
}
int main()
{
    double A[N], B[N],C[N] ;int size ;
    cout << "Enter the size of the vectors knowing that the maximum size is 100 cells : " ;
    do
    {
        cin >> size ;
    } while ((size <=0) || (size > 100));
    cout << "Enter the first vector " <<endl;
    read_vec(A , size);
    cout << "Enter the second vector " <<endl;
    read_vec(B , size);
    sum_vec(C ,A ,B,size);
    cout << "First vector : ";
    display_vec(A,size);
    cout << endl << "Second vector : ";
    display_vec(B,size);
    cout << endl << "The sum of the two vectors : ";
    display_vec(C,size);
    cout << endl << "The dot product of the two vectors is : " << dot_product(A,B,size) << endl;

    system ("pause");
    return 4;

    
}
