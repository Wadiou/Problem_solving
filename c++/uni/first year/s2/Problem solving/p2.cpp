#include <iostream>
using namespace std;
int main() 
{
    int n, m, z, w;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    int **MAT = new int*[n];
    for (int i = 0; i < n; i++) 
    {
        MAT[i] = new int[m];
    }

    cout << "Enter the row index of the center of 1: ";
    cin >> z;
    cout << "Enter the column index of the center of 1: ";
    cin >> w;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j == z + w) {
                MAT[i][j] = 1;
            } else if (i - j == z - w) {
                MAT[i][j] = 1;
            }
            else if (i + j == z - 1 + w)
            {
                MAT[i][j] = 1;
            }
            else if (i - j == z - 1 - w)
            {
                MAT[i][j] = 1;
            }
            else if (i + j == z + 1 + w)
            {
                MAT[i][j] = 1;
            }
            else if (i - j == z + 1 - w)
            {
                MAT[i][j] = 1;
            }
            
             else {
                MAT[i][j] = 0;
            }
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << MAT[i][j] << ",";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) 
    {
        delete[] MAT[i];
    }
    delete[] MAT;

    return 0;
}
