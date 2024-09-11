#include <iostream>
#include <string.h>
using namespace std;

int main(){

    const int size = 300;
    char str1[size] ;
    gets(str1);
    for (size_t i = 0; i < size; i++)
    {
        cout << str1[i];
    }
    
    
   
    
    return 0;
}
