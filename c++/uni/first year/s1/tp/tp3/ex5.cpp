#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a,b;

    cout<<"Enter two real numbers : "<<endl;
    cin>>a>>b;
    cout << "************MENU************" << endl;
    cout << "1 : ------> Sum -------" << endl;
    cout << "2 : ------> Product -------" << endl;
    cout << "3 : ------> Average -------" << endl;
    cout << "4 : ------> Min -------" << endl;
    cout << "5 : ------> Max -------" << endl;
    cout << "Enter your choice by typing the number from the list above ! " << endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"The sum of the two numbers is : "<<(a+b)<<endl;
        break;
    case 2:
        cout<<"The product of the two numbers is : "<<(a*b)<<endl;
        break; 
    case 3:
        cout<<"The average of the two numbers is : "<<((a+b)/2)<<endl;
        break;       
    case 4:
        if ( a <= b )
        {
            cout<<"The lower value of the two numbers is : "<<a<<endl;
        } else cout<<"The lower value of the two numbers is : "<<b<<endl;
        
        break;
    case 5:
        if ( a >= b )
        {
            cout<<"The higher value of the two numbers is : "<<a<<endl;
        } else cout<<"The higher value of the two numbers is : "<<b<<endl;
        
        break;    
    default:cout<<" try again by choosing a number from the list "<<endl;
        break;
    }


    
    system("pause");
    return 0;
}

