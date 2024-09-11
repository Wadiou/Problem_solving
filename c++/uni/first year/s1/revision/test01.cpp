#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int j = 0 , i = 0 , number;
    string response ;
    
    do
    {
        cin >> number ;
         if (number > 0)
         {
            i += 1;
         }
         else 
         {
            if (number != 0)
            {
                j += 1 ;
            }
            
         }
         cout << "Would you continue ? if not write no " ;
         cin >> response ;
        
    } while ( response != "no" );
    cout << "the number of Positive numbers are : " << i << " and The number of negatives are : " << j << endl;

    system ("pause");
    return 0;
    
    
}