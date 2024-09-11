#include <iostream>
using namespace std;
int main(){
    int tab1 [7] , tab2[7];
    for (size_t i = 0; i <= 6 ; i++)
    {
        cin >> tab1[i];
    }
    for (size_t i = 0; i <= 6; i++)
    {
        tab2[i] = tab1[6-i];
    }
    cout <<"{"<<tab2[0];
    for (size_t i = 0; i <= 5; i++)
    {
        cout <<","<< tab2[i+1]; 
    }
    cout<<"}"<<endl;
    
}