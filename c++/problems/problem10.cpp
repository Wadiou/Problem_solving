#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int N = 40;
    char str[N];
    int choice;

    cout << "Select an option:\n";
    cout << "1. Encrypt a sentence\n";
    cout << "2. Decrypt a sentence\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    switch (choice) {
        case 1:
            cout << "Enter a sentence to encrypt: ";
            gets(str);

            for (int i = 0, len = strlen(str); i < len; i++) {
                if (str[i] >= 'a' && str[i] < 'z') {
                    str[i] = str[i] + 1;
                } else if (str[i] == 'z') {
                    str[i] = 'a';
                } else if (str[i] >= 'A' && str[i] < 'Z') {
                    str[i] = str[i] + 1;
                } else if (str[i] == 'Z') {
                    str[i] = 'A';
                }
            }
            cout << "Encrypted sentence: " << str << endl;
            break;
        
        case 2:
            cout << "Enter a sentence to decrypt: ";
            gets(str);

            for (int i = 0, len = strlen(str); i < len; i++) {
                if (str[i] > 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 1;
                } else if (str[i] == 'a') {
                    str[i] = 'z';
                } else if (str[i] > 'A' && str[i] <= 'Z') {
                    str[i] = str[i] - 1;
                } else if (str[i] == 'A') {
                    str[i] = 'Z';
                }
            }
            cout << "Decrypted sentence: " << str << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
