#include <iostream>
using namespace std;
int main()
{
    int num , s = 0 ,i = 1 , j=0;
    cout << " Please enter a strictely positive number to show the square root's integer part of it " << endl;
    cin >> num ;
    if ( num > 0)
    {
        while ( s <= num )
        {
            if (s > num)
                {
                    break;
                }
        
            s = s +i;
            i += 2;
            j += 1;

        }
    }
    

   
    cout << " the integer part of the square root of " << num <<" is " << j-1 << endl;


}