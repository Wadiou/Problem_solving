#include <iostream>
using namespace std;
int main()
{
    const int count = 10; 
    int Tab[count] = {5,4,15,7,9,1,18,2,8,9}, max = Tab[0] , min = Tab[0];
    double average = 0 ;
    for (size_t i = 0; i < count; i++)
    {
        average = average + Tab[i];
    }

    for (size_t i = 1; i < count; i++)
    {
        if (max < Tab[i])
        {
            max = Tab[i];
        }
        if (min > Tab[i])
        {
            min = Tab[i];
        }
        
    }
    cout <<"The average is " << average/count << endl ;
    cout <<"The min is " << min << endl ;
    cout <<"the max is " << max <<endl;
    
    

}