#include <iostream>
#include <string.h>
using namespace std;
const int N = 3 ;
struct stu
{
    string name ;
    double average;
};
double sum(stu a[N])
{
    double avg=0 ;
    for (int i = 0; i < N; i++)
    {
        avg += a[i].average;
    }
    return avg ;
}
int main()
{
    stu student[N] ;
    for (int i = 0; i < N; i++)
    {
        cin >> student[i].average ;
    }
    cout << endl << sum(student);
}
