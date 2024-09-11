#include <iostream>
using namespace std;
int main(){
    double Notes[7] = {14,10,16,17,9,10,20} , num[7] ;
    num[0]=Notes[6];
    for (size_t i = 0; i < 6; i++)
    {
       num [i+1] = Notes[i] ;
       cout << num[i+1]<<endl;
       
        
    }
    cout <<"*********"<<num[7]<<endl;
    cout << "********************"<<endl;
    for (size_t i = 0; i <= 6; i++)
    {
        Notes[i] = num[i];
        cout << Notes[i]<<endl;
    }
    
    
    
    
    
}