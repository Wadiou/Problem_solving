#include <iostream>
#include <string.h>
using namespace std;

int main(){

    const int size = 30;
    char str1[size] , str2[size];

    gets(str1);
    int len = strlen(str1);
    
    for (int i = len -1 ; i >= 0; i-=1)
    {
        str2[i] = str1 [ len - i -1];
    }
    
    cout << str2 <<endl;
    
    
    return 0;
}
