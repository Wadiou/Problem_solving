#include <iostream>
using namespace std;

struct subjects
{
    double Analysis, Algebra, IOS, ADS, Web, Terminology, CA;
};

struct student
{
    int SID, GID;
    string First_name, Last_name;
    subjects scores;
};

const int N = 5;
student stud[N];

int main()
{
    for (size_t i = 0; i < N-1; i++)
    {
        cout << "Enter information for student " << i + 1 << ":" << endl;

        cout << "Enter Student Registration Number : ";
        cin >> stud[i].SID;

        cout << "Enter Group Number : ";
        cin >> stud[i].GID;

        cout << "Enter the First Name: ";
        cin >> stud[i].First_name;

        cout << "Enter the Last Name: ";
        cin >> stud[i].Last_name;

        cout << "Enter Analysis score: ";
        cin >> stud[i].scores.Analysis;

        cout << "Enter Algebra score: ";
        cin >> stud[i].scores.Algebra;

        cout << "Enter IOS score: ";
        cin >> stud[i].scores.IOS;

        cout << "Enter ADS score: ";
        cin >> stud[i].scores.ADS;

        cout << "Enter Web score: ";
        cin >> stud[i].scores.Web;

        cout << "Enter Terminology score: ";
        cin >> stud[i].scores.Terminology;

        cout << "Enter CA score: ";
        cin >> stud[i].scores.CA;

        cout << endl;
    }

    cout << "Enter the position number of Student you want to calculate his/her Average \n";

    int position;
    double average;

    cin >> position;

    average = stud[position-1].scores.ADS + stud[position-1].scores.Analysis + stud[position-1].scores.Algebra + stud[position-1].scores.Terminology + stud[position-1].scores.IOS +stud[position-1].scores.Web +stud[position-1].scores.CA;
    cout << "The Average of this Student is " << average/7 <<endl;

    int choice;
    cout << "Enter your choice:" << endl;
    cout << "1. Add a new student at the end" << endl;
    cout << "2. Insert a new student at a position" << endl;
    cout << "3. Delete a student at a position" << endl;
    cout << "Otherwise , Nothing would change " << endl;
    cin >> choice;

    switch (choice) {
        case 1: {
            int Append = N - 1;
            cout << "Enter Student Registration Number : ";
            cin >> stud[Append].SID;
            cout << "Enter Group Number : ";
            cin >> stud[Append].GID;
            cout << "Enter the First Name: ";
            cin >> stud[Append].First_name;
            cout << "Enter the Last Name: ";
            cin >> stud[Append].Last_name;
            cout << "Enter Analysis score: ";
            cin >> stud[Append].scores.Analysis;
            cout << "Enter Algebra score: ";
            cin >> stud[Append].scores.Algebra;
            cout << "Enter IOS score: ";
            cin >> stud[Append].scores.IOS;
            cout << "Enter ADS score: ";
            cin >> stud[Append].scores.ADS;
            cout << "Enter Web score: ";
            cin >> stud[Append].scores.Web;
            cout << "Enter Terminology score: ";
            cin >> stud[Append].scores.Terminology;
            cout << "Enter CA score: ";
            cin >> stud[Append].scores.CA;
            break;
        }
        case 2: {
            int insert;
            cout << "Enter the position where you want to insert a new student (1 to N): ";
            cin >> insert;
            if (insert < 1 || insert > N) {
                cout << "Invalid position!" << endl;
            } else {
                for (int i = N - 2; i >= insert - 1; i--) {
                    stud[i + 1] = stud[i];
                }
                int newIndex = insert - 1;
                cout << "Enter Student Registration Number : ";
                cin >> stud[newIndex].SID;
                cout << "Enter Group Number : ";
                cin >> stud[newIndex].GID;
                cout << "Enter the First Name: ";
                cin >> stud[newIndex].First_name;
                cout << "Enter the Last Name: ";
                cin >> stud[newIndex].Last_name;
                cout << "Enter Analysis score: ";
                cin >> stud[newIndex].scores.Analysis;
                cout << "Enter Algebra score: ";
                cin >> stud[newIndex].scores.Algebra;
                cout << "Enter IOS score: ";
                cin >> stud[newIndex].scores.IOS;
                cout << "Enter ADS score: ";
                cin >> stud[newIndex].scores.ADS;
                cout << "Enter Web score: ";
                cin >> stud[newIndex].scores.Web;
                cout << "Enter Terminology score: ";
                cin >> stud[newIndex].scores.Terminology;
                cout << "Enter CA score: ";
                cin >> stud[newIndex].scores.CA;
            }
            break;
        }
        case 3: {
            int del;
            cout << "Enter the position of the student you want to delete (1 to N): ";
            cin >> del;
            if (del < 1 || del > N) {
                cout << "Invalid position!" << endl;
            } else {
                for (int i = del - 1; i < N - 1; i++) {
                    stud[i] = stud[i + 1];
                }
                stud[N - 1].SID = 0;
                stud[N - 1].GID = 0;
                stud[N - 1].First_name = "";
                stud[N - 1].Last_name = "";
                stud[N - 1].scores.Analysis = 0;
                stud[N - 1].scores.Algebra = 0;
                stud[N - 1].scores.IOS = 0;
                stud[N - 1].scores.ADS = 0;
                stud[N - 1].scores.Web = 0;
                stud[N - 1].scores.Terminology = 0;
                stud[N - 1].scores.CA = 0;
            }
            break;
        default :
            break;
        }
    }
    for (int i = 0; i < N; i++) 
    {
    
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Student Registration Number : " << stud[i].SID << ", Group Number :" << stud[i].GID << endl;
        cout << "Name: " << stud[i].First_name << " " << stud[i].Last_name << endl;
        cout << "Scores: Analysis " << stud[i].scores.Analysis << ", Algebra " << stud[i].scores.Algebra 
             << ", IOS " << stud[i].scores.IOS << ", ADS " << stud[i].scores.ADS << ", Web " << stud[i].scores.Web 
             << ", Terminology " << stud[i].scores.Terminology << ", CA " << stud[i].scores.CA << endl;
    }



}
