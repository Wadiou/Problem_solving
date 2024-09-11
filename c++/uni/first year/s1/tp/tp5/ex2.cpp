#include <iostream>
using namespace std;
int main()
{
    const int N=4 ;
    int vec1[N] , vec2 [N] , vec3[N] ,dprod = 0;
    for (size_t i = 0; i < N; i++)
    {
        cout <<"Enter the value of the cell number"<< i <<" in the first verctor " << endl;
        cin >> vec1 [i];
        cout <<"Enter the value of the cell number "<< i <<" in the second verctor " << endl;
        cin >> vec2 [i];

    }
    
    for (size_t i = 0; i < N; i++)
    {
        vec3[i] = vec1[i] + vec2[i];
        dprod = vec2[i]*vec1[i] + dprod ;
    }
    cout << "The sum of the two vectors as a third vector is : {";

    for (size_t i = 0; i < N; i++)
    {
        
        cout << vec3[i] ;
        if (i == N -1)
        {
            break;
        }
        cout << ",";
    }
    cout <<"}" << endl;
    cout <<"The dot product of them is : " << dprod <<endl;

    
     
}