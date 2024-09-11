#include <iostream>
using namespace std;
int main()
{
    int N , i ;
    char C = 'A';
    cin >> N ; 
    for (i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout <<" ";
        }
        if (i%2 == 0)
            {
                cout << i + 1; 
            }
            else
            {
                cout << C;
            }
        
        for (int j = 2*(N-1-i)-1; j>0 ; j--)
        {
            cout <<" ";
        }
        if (i<N-1)
        {
            if (i%2 == 0)
            {
                cout << i + 1; 
            }
            else
            {
                cout << C;
                C+=3;
            }
            cout <<endl;
            
        }
        else
        {
        C -= 3;
        }
    }
    
    cout<<endl;
    for ( i = N-2; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout <<" ";
        }
        if (i%2 == 0)
            {
                cout << i + 1; 
            }
            else
            {
                cout << C;
            }
        
        for (int j = 2*(N-1-i)-1; j>0 ; j--)
        {
            cout <<" ";
        }
        if (i%2 == 0)
            {
                cout << i + 1; 
            }
            else
            {
                cout << C;
                C-=3;
            }
            cout <<endl;
           
    }
    /*
    for (int i = 1; i <= N; i++)
    {
        for (int j = N-1; j>= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < 2*i; k++)
        {
            if (k % 2 == 1)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
            
        }
        cout << endl;
    }
    cout <<endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = N-1; j>= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < 2*i; k++)
        {
            if (k % 2 == 1)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
            
        }
        cout << endl;
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout << " ";
        }
        for (int k = 2*(N-i) - 1; k >= 1; k--)
        {
            if (k % 2 == 1)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
            
        }
        cout << endl;
    }
    */
}