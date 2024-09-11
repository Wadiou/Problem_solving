#include <iostream>
#include <string>

using namespace std;


int main() {
    struct average
{
    double avg1;
    double avg2;
};


struct Student {
    int ID;
    string Name;
    string surname;
    average avg ;
};
    const int n = 5;

    Student stud[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the ID of the student number : " << i << endl;
        cin >> stud[i].ID;
        cout << "Enter the Name of the student number : " << i << endl;
        cin >> stud[i].Name;
        cout << "Enter the Surname of the student number : " << i << endl;
        cin >> stud[i].surname;
        cout << "Enter the first average of the student number : " << i << endl;
        cin >> stud[i].avg.avg1;
        cout << "Enter the second average of the student number : " << i << endl;
        cin >> stud[i].avg.avg2;        
    }

    for (int i = 0; i < n; i++) {
        cout << "Student Number: " << i << endl;
        cout << "ID: " << stud[i].ID << endl;
        cout << "Name: " << stud[i].Name << endl;
        cout << "Surname: " << stud[i].surname << endl;
        cout << "Average1: " << stud[i].avg.avg1 << endl;
        cout << "Average2: " << stud[i].avg.avg2 << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}
