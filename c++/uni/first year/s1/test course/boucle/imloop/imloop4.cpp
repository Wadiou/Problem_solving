#include <iostream>
using namespace std;
int main() {
    cout<<"This program is going to show you the sequence of this number 1,11,23,37 ...n "<<endl;
    cout<<"Enter the end point "<<endl;
    int n , U , i=0;
    cin >> n;
    U = 1;
    cout << " the sequence is 1";
    for ( i = 0; U < n; i++)
    {
        U = U + i +10;
        if (U > n )
        {
            break;
        }
        
        cout <<"," <<U;
        i += 2;
    }
    
    
    
      
    return 0;
}
