#include <iostream>
#include <string.h>
using namespace std;
const int N = 100;
void test(char word[N]) // method 1
{
    bool palindrome = true;
    int size = strlen(word);
    char *Pointer1 = word , *Pointer2 = &word[size-1];
    while ((Pointer1 < Pointer2) && (palindrome))
    {
        
        if (*Pointer1 != *Pointer2)
        {
            palindrome = false ;
        }
        ++Pointer1; Pointer2 -- ;
        
    }
    if (palindrome)
    {
        cout << "the word is palindrome"<< endl;
    }
    else
    {
        cout<< "The word isn't palindrome"<< endl;
    }
}
void test1(char word[N]) // method 2
{
    int size = strlen(word) , counter = 0;
    char *Pointer1 = word , *Pointer2 = &word[size-1];
    while ((Pointer1 < Pointer2))
    {
        
        if (*Pointer1 == *Pointer2)
        {
            counter ++;
        }
        ++Pointer1; Pointer2 -- ;
        
    }
    if (size%2 == 0)
    {
        if (counter == ( size /2)) // el,le ..4%2 =0
        {
            cout << "the word is palindrome"<< endl;
        }
        else cout<< "The word isn't palindrome"<< endl;
        
    }
    else
    {
        if (counter == ( (size -1) /2)) // RA,D,AR ..5%2 = 1
        {
            cout << "the word is palindrome" << endl;
        }
        else cout<< "The word isn't palindrome"<< endl;
    }
    
    

}

int main()
{
    char word[N];
    cout << "Enter a word to check if it's palidrome" ;
    gets (word);
    test(word);
    test1(word);

    return 0 ;
}