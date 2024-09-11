#include <iostream>
using namespace std;
int main() {
    int num ;
    cout << "enter the starting point "<<endl;
    cin >> num ;
    for (size_t i = 1; i <= 10; i++)
    {
        cout <<num <<" x " << i <<" = "<<i*num<<endl;
    }
    
   
    return 0;
}
