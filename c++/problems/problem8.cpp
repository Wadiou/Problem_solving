#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n ;
    cin >> n ;
    bool found = false;

    for (size_t i = 0; i <= 9; i++)
    {
        for (size_t j = 0; j <= 9; j++)
        {
            for (size_t k = 0; k <= 9; k++)
            {
                int result = pow(i , 3) + pow(j , 3)+ pow(k ,3);
                if (result == n)
                {
                    cout << "The solution for the equation are x = " << i <<", y = "<<j<<", z = "<<k<<endl;
                    found = true ;
                }
                
            }
            
        }
        
    }
    if (!found)
    {
        cout << " There is no solutions !"<<endl;
    }
    

    return 0;
}
