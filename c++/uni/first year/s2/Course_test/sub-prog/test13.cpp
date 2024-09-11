#include <iostream>
using namespace std;
#include <string.h>
#define N 5
int search(int str[N] ,int ch)
{
    int *P;
    for ( P = str; P < &str[N] ; P ++)
    {
        if (*P == ch)
        {
            return P - str ;
        }    
    }
    
    return -1;
    
}
int main()
{
    int str[N], ch ;
    for (size_t i = 0; i < N; i++)
    {
        cin >> str[i];
        
        
    }
    
    cin >> ch ;
    cout << search(str , ch);
}