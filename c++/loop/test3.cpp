#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0, j = n; i < n; i++, j--)
    {
        cout << "i = " << i << " , j = " << j << endl;
    }
}