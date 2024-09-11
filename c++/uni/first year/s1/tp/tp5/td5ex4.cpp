#include <iostream>
using namespace std;

int main() {
    const int N = 3;
    int Mat[N][N];
    int choice, temp;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Enter value for Mat[" << i << "][" << j << "]: ";
            cin >> Mat[i][j];
        }
    }

    cout << "Choose an operation:\n";
    cout << "1. Count positive elements above the first diagonal\n";
    cout << "2. Count negative elements below the second diagonal\n";
    cout << "3. Invert with respect to the first diagonal\n";
    cout << "4. Invert with respect to the second diagonal\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            int c1 = 0;
            for (int i = 0; i < N; i++) {
                for (int j = i + 1; j < N; j++) {
                    if (Mat[i][j] > 0) c1++;
                }
            }
            cout << "There are " << c1 << " positive elements above the first diagonal" << endl;
            break;
        }
        case 2: {
            int c2 = 0;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N - i - 1; j++) {
                    if (Mat[i][j] < 0) c2++;
                }
            }
            cout << "There are " << c2 << " negative elements below the second diagonal" << endl;
            break;
        }
        case 3: {
            for (int i = 0; i < N; i++) {
                for (int j = i + 1; j < N; j++) {
                    temp = Mat[i][j];
                    Mat[i][j] = Mat[j][i];
                    Mat[j][i] = temp;
                }
            }
            cout << "Matrix inverted with respect to the first diagonal:" << endl;
            break;
        }
        case 4: {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N - i; j++) {
                    temp = Mat[i][j];
                    Mat[i][j] = Mat[j][i];
                    Mat[j][i] = temp;
                }
            }
            cout << "Matrix inverted with respect to the second diagonal:" << endl;
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            return 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
