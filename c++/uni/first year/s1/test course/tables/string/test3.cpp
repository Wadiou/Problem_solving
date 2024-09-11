#include <iostream>
#include <string.h>
using namespace std;

int main(){

    const int size = 300;
    char str1[size] ;int count ;
    count = 0;
    gets(str1);
    for (size_t i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == ' ' )
        {
            count += 1;
        }
        
    }
    cout<<"There is "<<count +1 <<" Words in the sentence provided ! "<<endl;
    
    
   
    
    return 0;
}
