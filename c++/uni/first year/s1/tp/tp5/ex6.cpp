#include <iostream>
#include <string.h>
using namespace std;

int main() {
    const int N = 40;
    int counter = 0;
    char str1[N] ;

    cout << "Enter a word to check if it's a palindrome "<< endl;
    gets(str1);

    int len = strlen(str1);
    
    for (int i = 0; i < len; i++)
    {
        if (str1[i] == str1[len -i -1])
        {
            counter ++;
        }
        
        
    }
    if (counter == len)
    {
        cout << "The word given is a palindrome ! " << endl;
    }
    else
    {
        cout << "The word given isn't a palindrome ! " << endl;
    }
    



    

    return 0;
}
