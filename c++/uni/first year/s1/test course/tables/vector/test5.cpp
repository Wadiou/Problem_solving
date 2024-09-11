#include <iostream>
using namespace std;
int main(){
    int tab1 [7] , tab2[7];
    for (size_t i = 0; i <= 6 ; i++)
    {
        cin >> tab1[i];
    }
    tab2[0]=tab1[6];
    for (size_t i = 0; i <= 5; i++)
    {
        tab2[i+1] =tab1[i]; 
    }
    cout <<"{"<<tab2[0];
    for (size_t i = 0; i <= 5; i++)
    {
        cout <<","<< tab2[i+1]; 
    }
    cout<<"}"<<endl;
    
    
    

}