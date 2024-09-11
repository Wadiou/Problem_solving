#include <iostream>
using namespace std;
int main(){
    const int N = 8;
    int Array[N] = {0,5,4,6,7,19,-3,-3} , occ = 0 ,i , input , last;
    cin >> input ;
    for ( i = 0; i < N; i++)
    {
        if ((input > 0))
        {
            if ((Array[i] == input) )
            {
                cout <<"The index is " << i <<endl ;
            }
            
           
        }else {
            if ((Array[i] == input) )
            {
                occ ++ ;
                if (occ > 0)
                {
                    last = i ;
                }
                
            }
            
        }
        
    }
    cout << "The last index is for the negative integer " << last +1;
    
}