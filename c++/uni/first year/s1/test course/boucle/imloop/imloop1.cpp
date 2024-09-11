#include <iostream>
using namespace std;

int main() {
    int start, end, numM, j = 0;

    cout << "Enter the range of natural numbers for the multiplication table." << endl;
    
    cout << "Enter the starting point: ";
    cin >> start;

    int i = start;

    cout << "Enter the ending point: ";
    cin >> end;

    cout << "Now enter the number of multiplications you want to see for each number: ";
    cin >> numM;

    while (i <= end) {
        cout << "The first " << numM << " multiplications of " << i << " are: " << endl;
        cout << "********************************************" << endl;
        
        j = 0;
        while (j <= numM) {
            cout << i << " x " << j << " = " << i * j << endl;
            j += 1;
        }
        
        i += 1;
    }

    return 0;
}
