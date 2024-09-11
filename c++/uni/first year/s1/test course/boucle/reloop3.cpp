#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(){
    string str ;
    int i = 1 ;
    do
    {
        switch (i)
        {
        case 1:
            cout << "Please enter the password "<< endl ;
            break;
        case 2:
            cout << "Try again entering the password "<< endl ;
            break;
        case 3:
            cout << "One last chance ! "<< endl ;
            break;        
        }
        cin >> str;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        i += 1;
    } while ((str != "ALGO") && ( i <= 3 ));
    if (str == "ALGO")
    {
        switch (i-1)
        {
        case 1:
            cout << " You have successfully entered the password from the first time ! "<< endl;
            break;
        case 2:
            cout << " You have successfully entered the password from the second time ! "<< endl;
            break;  
        case 3:
            cout << " You have successfully entered the password from the third time ! "<< endl;
            break;
        }
    }
    else cout << "You're not welcome ! "<< endl;
    


    system ("pause");
    return 0;

    
    
    
}