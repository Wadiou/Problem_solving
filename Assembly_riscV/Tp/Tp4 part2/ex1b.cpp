#include <iostream>
using namespace std;
int funct2(int a2) {
    int t0 = 1;
    if (a2 != t0) 
    {
        return a2 + funct2(a2-1);

    } else {
        return 1;
    }
}

int main() {
    int a2 = 5;
    int a3 = funct2(a2);
    cout <<a3;
    return 0;
}
