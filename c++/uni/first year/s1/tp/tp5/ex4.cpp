#include <iostream>
using namespace std;

int main() {
    const int N = 4;
    int Mat[N][N], value, counter = 0;
    double average, sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Enter value for Mat[" << i << "][" << j << "]: ";
            cin >> Mat[i][j];
            sum += Mat[i][j]; 
        }
    }

    cout << "***********MENU***********" << endl
         << "1) Sum " << endl
         << "2) Average " << endl
         << "3) Occurrence of a value in the matrix " << endl
         << "4) All" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Sum: " << sum << endl;
        break;
    case 2:
        average = (sum) / (N * N);
        cout << "Average: " << average << endl;
        break;
    case 3:
        cout << "Enter a value to calculate its occurrence: ";
        cin >> value;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (value == Mat[i][j]) {
                    counter++;
                }
            }
        }
        cout << "Occurrence of " << value << ": " << counter << endl;
        break;
    case 4:
        average = (sum) / (N*N);
        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }

    return 0;
}
