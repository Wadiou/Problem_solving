#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    double sqrt1 , num ;
    cout << "Enter the number you want to check if it's a perfect square ";
    cin >> num ;
    sqrt1 = sqrt(num);
    cout << sqrt1 << endl;
    int sqrtc = static_cast<int>(sqrt1);
    cout << sqrtc << endl;
    if ( sqrt1 == sqrtc )
    {
        cout << " the number you have given is a perfect square ! "<<endl;
    } else cout << " the number you have given is not a perfect square ! "<<endl;
    
}