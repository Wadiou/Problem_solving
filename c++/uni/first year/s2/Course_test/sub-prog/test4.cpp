#include <iostream>
using namespace std;
const int N = 5;

void display(int arr[N]) {
    for (int i = 0; i < N; i++) {
        cout << arr[i];
        if (i < N - 1) {
            cout << ",";
        }
    }
    cout << endl;
}

int main() {
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    display(arr); // Pass the 1D array and its size to the function.
    return 0;
}
