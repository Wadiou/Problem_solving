#include <iostream>
using namespace std;
int main()
{
    const char *filePath = "test2.bin";
    cout << filePath;
    FILE *f = fopen(filePath,"w");
    double A =9;
    fwrite(&A , sizeof(double),1,f);
    int B[5]={7,5,6,9,3};
    fwrite(&B,sizeof(int),5,f);
    fclose(f);
    f = fopen(filePath,"r");
    double C ;
    fread(&C,sizeof(double),1,f);
    cout << C << endl;
    int D[5];
    fread(&D,sizeof(int),5,f);
    for (int i = 0; i < 5; i++)
    {
        cout <<D[i] << endl;
    }
    
    fclose(f);
}