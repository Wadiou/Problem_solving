#include <iostream>
#include <string.h>
using namespace std;
int main(){
    const int N = 2;
    struct date
    {
        int YEAR , MONTH , DAY;
    };
    struct emp
    {
        string first_name , Last_name ;
        date date1[N] ;
    };
    emp employee[2];
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            cin >> employee[i].date1[j].DAY >> employee[i].date1[j].MONTH >>employee[i].date1[j].YEAR ;
        }
        
    }
    for (size_t i = 0; i < 2; i++)
    {
        cout << "The employee number "<<i +1 << endl << endl ;
        for (size_t j = 0; j < N; j++)
        {
            cout << "The date number "<<j +1 <<" : "<<employee[i].date1[j].DAY<<"/"<<employee[i].date1[j].MONTH <<"/"<<employee[i].date1[j].YEAR<<endl;
            
        }
        
    }
    
    
}