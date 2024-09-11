#include <iostream>
using namespace std;
void mod(int N)
{

    if (N != -1)
    {
        if (N % 2 ==0)
        {
             cout << N << endl;
        }
        mod(N-1);

    } 

}
int main()
{
    int A = 15;
    int C = 10;
    double B = 10;
    cout << ++A;
}