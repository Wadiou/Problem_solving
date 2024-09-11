#include <iostream>
using namespace std;
int main(){
    double  copies ;
    cin >> copies ;
    if (copies>= 0 )
    {
        if (copies > 10)
        {
            if (copies > 30)
            {
                cout << "The total price is " << copies  << " DA " << endl ;
            }else cout << "The total price is " << copies * 1.5 << " DA " << endl ;
            
        }else cout << "The total price is " << copies * 2 << " DA " << endl ;
        
        
    }
    
}