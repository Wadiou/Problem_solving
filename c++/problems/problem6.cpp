#include <iostream>
using namespace std;
int main()
{
    int num ;
    cout << "Enter number between 1-7 " << endl;
    cin >> num;

    switch (num)
    {
        case 1 :
        cout << "Monday " << endl;
        break;
        case 2 :
        cout << "thirsday " << endl;
        break;
        case 3 :
        cout << "Wednsday " << endl;
        break;
        case 4 :
        cout << "Tuesday " << endl;
        break;
        case 5 :
        cout << "Friday " << endl;
        break;
        case 6 :
        cout << "Saturday " << endl;
        break;
        case 7 :
        cout << "Sunday " << endl;
        break;
        default :
        cout << "Respect the rule ! "<<endl;
        break;
    }

    
}