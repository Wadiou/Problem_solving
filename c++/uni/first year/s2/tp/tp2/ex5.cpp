#include <iostream>
using namespace std;
double *create(int size){
    return new double[size] ;

}
void fill(double *Ptr , int max_size)
{
    double *P = Ptr ;
    for (; P < &Ptr[max_size] ; P++)
    {
        cout << "Enter the value of cell number : " << P - Ptr +1 << endl ;
        cin >> *P;
    }
    
}

void average(double *A , double *B , int max_size)
{
    double *P1 = A ;
    double *P2 = B ;
    *P2 = 0 ;
    for (; P1 < &A[max_size] ; P1++)
    {
        *P2 += *P1 ;
        
        if ((P1 - A + 1) % 3 == 0 || (P1 == &A[max_size] -1 ))
        {
            *P2 = *P2 /3 ;
            P2++;
            *P2 = 0 ;
        }
    }
    
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
    
    int size;
    do
    {
        cout << "Enter the size of the array knowing that it is less than or equal 99 :" << endl;
        cin >> size ;
    } while ((size >99) || (size < 0) );

    double *A = create(size) , *B = create(33) ;

    fill(A , size) ;

    average(A , B , size);
    display(B , 33); // to check the result


}