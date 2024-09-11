#include <iostream>
#include <string.h>
using namespace std;

int main(){

    const int size = 300;
    char str1[size] ;
    gets(str1);
    for (size_t i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == ' ' )
        {
            str1[i] = ',';
        }
        
    }
    cout<<str1;
    
    
   
    
    return 0;
}
