#include <iostream>
using namespace std;
int main(){
    double i = 1,pi,s ,e;
    s = 1;
    pi = 0;
    cin >> e;
    while (1/i >= e)
    {
        pi = pi + (1/i)*s;
        s = -s;
        i += 2;
    }
    
    cout << "Pi = "<<pi*4<<endl;
    





    system ("pause");
}