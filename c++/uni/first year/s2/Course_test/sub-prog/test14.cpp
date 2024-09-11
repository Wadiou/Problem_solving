#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    int N;
    cin >> N;
    double* tab;
    tab = (double*)malloc(2*sizeof(int)*N); 
    for (int i = 0; i < N; i++)
    {
        cin>> tab[i];
        cout <<'\t'<<*tab+i;
    }
    free(tab);
    int* p = new int(5);
    cout <<endl<< *p;
    
    
}