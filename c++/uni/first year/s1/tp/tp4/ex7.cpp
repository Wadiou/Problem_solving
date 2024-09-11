#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long int dnum = 0 , bi = 0 ,dig ,choice ,pow=1;
    cout <<"*********MENU*********"<<endl;
    cout <<"1 - Decimal to Binary "<<endl;
    cout <<"2 - Binary to Decimal "<<endl;
    cout <<"**********************"<<endl;
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "Enter the decimal number " <<endl;
        cin >> dnum;
        while ( dnum != 0)
        {
            dig = dnum % 2;
            dnum= dnum / 2;
            bi = bi + pow * dig;
            pow *= 10;            

        }
        cout <<"The Binary number is : " << bi <<endl;
        break;

    case 2:
        cout << "Enter the Binary number " <<endl;
        cin >> bi;
        while (bi != 0)
        {
            dig = bi % 10;
            bi = bi / 10;
            dnum = dnum + pow * dig;
            pow *= 2;


        }
        cout <<"The Decimal number is : " << dnum <<endl;
        
        break;
    
    }
    
    
    
}
