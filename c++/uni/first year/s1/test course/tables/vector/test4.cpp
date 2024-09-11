#include <iostream>
using namespace std;
int main(){
    int note[5] , x = 0;
    cout <<"Enter the successive values of the array's cells "<<endl;
    for (size_t i = 0; i <= 4 ; i++)
    {
        cin >> note[i];
    }
    
    for (size_t i = 0; i <= 4; i++)
    {
        if (x <= note[i])
        {
            x = note[i];
        }
        
    }
    cout << "The highest value in the array is "<<x<<endl;
    
    

}