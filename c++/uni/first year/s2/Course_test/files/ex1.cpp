#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    FILE *f = fopen("ex1.txt","w");
    int N ;
    do
    {
        cout << "Enter a positive number : "; 
        cin >> N ;
    } while (N<1);
    char name[100];
    for (int i = 0; i < N; i++)
    {
        cin>>name;
        fprintf(f,"%s\n",name);
    }
    fclose(f);
    f = fopen("ex1.txt","r");
    char name1[100];
    for ( int i = 0; i < N; i++)
    {
        fscanf(f,"%s",name1);
        cout<< name1 << endl;
    }
    fclose(f);
}