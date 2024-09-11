#include <iostream>
using namespace std;

int main() {
    int i;

    struct cont
    {
        char phone[10],fname[21], lname[21];
    };
     

    const int N = 5;
    cont contact[N];

    for (i = 0; i < N; i++) {
        gets(contact[i].fname);
        gets(contact[i].lname);
        gets(contact[i].phone);
    }

    for (i = 0; i < N; i++) {
        if (contact[i].fname[0] == 'k') {
            cout << contact[i].lname << endl;
            cout << contact[i].phone << endl;
        }
    }

    system("pause");
    return 0;
}