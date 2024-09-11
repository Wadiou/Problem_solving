#include <iostream>
using namespace std;
int main(){
    int i , N , j ;
    cin >> N ;
    for ( i = 1; i <= N; i++)
    {
        for ( j = 1; j <= N - i; j++)
        {
            cout <<" ";
        }
        for ( j = 1; j < 2*i; j++)
        {
            cout <<"*";
        }
        cout << endl;
    }
    
}