#include <iostream>
using namespace std;
int main(){
    int num , s , i ,j ;
    cin >> num;
    for ( i = 1; i <= num; i++)
    {
        s = 0;
        for ( j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                s = s + j;
            }
            
        }
        if (i == s)
        {
            cout << i << " is a perfect number "<<endl;
        }
        
        
        
    }
    

}