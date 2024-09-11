#include <iostream>
using namespace std;
double  *create(int size)
{
    return  new double[size]; ;
}

void fill(double *Pointer , int size)
{
     for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of cell number : " << i << endl ;
        cin >> Pointer[i];
    }
}
void combine(double*& A, double* B, int& sizeA, int sizeB) {
    double* newA = new double[sizeA + sizeB];
    
    for (int i = 0; i < sizeA; ++i) {
        newA[i] = A[i];
    }
    
    for (int i = 0; i < sizeB; ++i) {
        newA[sizeA + i] = B[i];
    }
    
    delete A;
    A = newA;    
    sizeA += sizeB;
    
}
void display(double * Ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << Ptr[i];
    }
    
}
int main()
{
    int N ,M ;
    cout << "Enter the dimension of B : ";
    cin >> M;
    double *B = create(M);
    fill(B , M);
   
    cout << "Enter the dimension of A : ";
    cin >> N;
    double *A = create(N);
    fill(A , N);

    combine(A,B,N,M);

    display(A , N);

    delete A ;
    delete B ;

}