#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    cin.ignore();

    const int size = k;
    char str1[size], str2[size];

    gets(str1);
    gets(str2);

    cout << strlen(str1) << " " << strlen(str2) << endl;
    cout << strcmp(str1, str2) << endl;

    strcat(str1, str2);
    cout << str1 << endl;

    return 0;
}
