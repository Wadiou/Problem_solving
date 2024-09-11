#include <iostream>
using namespace std;
void max_min(double &MAX , double &MIN)
{
    int C;
     if (MAX <= MIN)
    {
        C = MIN ;
        MIN = MAX ;
        MAX = C ;
    }
    
}
double MAX_MIN(double &MAX , double MIN)
{
    if (MAX >= MIN)
    {
       return MIN ;
    }
    else 
    {
        double C ;
        C = MAX;
        MAX = MIN;
        return C ;
    }
}
int main()
{
    double NUM1 ,NUM2 ;
    cout << "Enter two numbers successively : " ;
    cin >> NUM1 >> NUM2 ;
    cout << "the MIN is " << MAX_MIN(NUM1 ,NUM2) <<" and the MAX is " << NUM1 << endl; // same remark mentioned in ex2 
}