#include <iostream>
using namespace std;
void sub_palidrome(string str, int size)
{
    int start , end , counter = 1;
    bool palidrome; 
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i ; j--)
        {
            palidrome = true;
            start = i;
            end = j;
            while (start < end)
            {
                if (str[start] != str[end])
                {
                    palidrome = false;
                    break;
                }
                start++;
                end--;
            }
            if (palidrome)
            {
                cout << "Sub-palindrome number " << counter << " : ";
                counter ++ ;
                for (int k = i; k <= j; k++)
                {
                    cout <<str[k];
                }
                cout << endl;
            }
            
        }
        
    }
    
}
int length(string str)
{
    int i = 0;
    for ( ; str[i] != '\0'; i++)
    {
        
    }
    return i;
}
int main()
{
    string str;
    cout << "Enter the string to extract its sub-palindromes: ";
    cin >> str;
    int lengthh= size(str); // second method to calculate length
    cout << lengthh;
    cout << endl << "----------------Palindromes----------------" << endl;
    sub_palidrome(str , length(str));
}