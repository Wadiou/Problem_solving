#include <iostream>
using namespace std;

int funct1(int a2) {
    int a3 = 0;
    for (int t0 = 1; t0 <= a2; ++t0) {
        a3 += t0;
    }
    
}

int main() 
{
    int a2 = 5;
    int a3 = funct1(a2);
    cout << a3 << endl;
    return 0;
}
