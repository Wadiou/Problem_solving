#include <iostream>
using namespace std;
int main(){
    double alaoui[5] = {1,3,6,7,4} , X;
    cin >> X ;
    bool existance = false ;
    for (size_t i = 0; i < 4; i++)
    {
        if (X == alaoui[i])
        {
            existance = true;
        } 
        
    }
    if (existance)
    {
        cout << "This value of "<<X<< " actually exists in our array " <<endl;
    } else     cout << "The value of "<<X<< " actually doesn't exist in our array " <<endl;

    
    
}