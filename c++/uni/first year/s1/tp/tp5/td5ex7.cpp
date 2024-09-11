#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    struct Date
    {
        int Year , Month , Day ;
    };
    struct stud
    {
        string Username , First_name , Last_name , Password ;
        int Group ;   
        Date date ;
    };

    const int N=3 ;
    stud Student[N] ;

    for (int i = 0; i < N; i++) 
    {

        Student[i].Username = "";

        Student[i].First_name = "";

        Student[i].Last_name = "";

        Student[i].Password = "" ;

        Student[i].Group = -1;

        Student[i].date.Year = -1;

        Student[i].date.Month = -1 ;

        Student[i].date.Day = -1;

    }
    for (int i = 0; i < N - 1; i++) 
    {

        cout << "Enter the Username for student number " << i + 1 << ": ";
        cin >> Student[i].Username;

        cout << "Enter the First Name for student number " << i + 1 << ": ";
        cin >> Student[i].First_name;

        cout << "Enter the Last Name for student number " << i + 1 << ": ";
        cin >> Student[i].Last_name;

        cout << "Enter the Password for student number " << i + 1 << ": ";
        cin >> Student[i].Password;

        cout << "Enter the Group number for student number " << i + 1 << ": ";
        cin >> Student[i].Group;

        cout << "Enter the Year of Birth for student number " << i + 1 << ": ";
        cin >> Student[i].date.Year;

        cout << "Enter the Month of Birth for student number " << i + 1 << ": ";
        cin >> Student[i].date.Month;

        cout << "Enter the Day of Birth for student number " << i + 1 << ": ";
        cin >> Student[i].date.Day;

    }
    
    int choice;

    cout << "Enter your choice:" << endl;

    cout << "1. Add a new student at the end" << endl;

    cout << "2. Insert a new student at a position" << endl;

    cout << "3. Delete a student at a position" << endl;

    cout << "4. Change the Student's password" << endl;

    cout << "Otherwise , Nothing would change " << endl;

    cin >> choice;

    switch (choice) {
        case 1: 
        {

            int Append = N - 1;

            cout << "Enter the Username for student number " << ": ";
            cin >> Student[Append].Username;

            cout << "Enter the First Name for student number " << ": ";
            cin >> Student[Append].First_name;

            cout << "Enter the Last Name for student number " << ": ";
            cin >> Student[Append].Last_name;

            cout << "Enter the Password for student number " << ": ";
            cin >> Student[Append].Password;

            cout << "Enter the Group number for student number " << ": ";
            cin >> Student[Append].Group;

            cout << "Enter the Year of Birth for student number " << ": ";
            cin >> Student[Append].date.Year;

            cout << "Enter the Month of Birth for student number " << ": ";
            cin >> Student[Append].date.Month;

            cout << "Enter the Day of Birth for student number " << ": ";
            cin >> Student[Append].date.Day;

            }
            break;
        
        case 2: 
        {
            int insert = 1;

            cout << "Enter the position where you want to insert a new student (1 to N): ";

            do
            {
                if (insert < 1 || insert > N)
                {
                    cout << "Respect the Range ! " << endl;
                }
                cin >> insert;
                
            } while (insert < 1 || insert > N);
            
           
            
            for (int i = N - 2; i >= insert - 1; i--) {
                Student[i + 1] = Student[i];
            }

            int newIndex = insert - 1;

            cout << "Enter the Username for student : ";
            cin >> Student[newIndex].Username;

            cout << "Enter the First Name for student : ";
            cin >> Student[newIndex].First_name;

            cout << "Enter the Last Name for student : ";
            cin >> Student[newIndex].Last_name;

            cout << "Enter the Password for student : ";
            cin >> Student[newIndex].Password;

            cout << "Enter the Group number for student : ";
            cin >> Student[newIndex].Group;

            cout << "Enter the Year of Birth for student : ";
            cin >> Student[newIndex].date.Year;

            cout << "Enter the Month of Birth for student : ";
            cin >> Student[newIndex].date.Month;

            cout << "Enter the Day of Birth for student : ";
            cin >> Student[newIndex].date.Day;
            
        }
            break;
        
        case 3: 
        {
            int del = 1 ;

            cout << "Enter the position of the student you want to delete (1 to N): ";

            do
            {
                if (del < 1 || del > N)
                {
                    cout << "Respect the Range ! " << endl;
                }
                cin >> del;
                
            } while (del < 1 || del > N);
            
            for (int i = del - 1; i < N - 1; i++) 
            {
                Student[i] = Student[i + 1];
            }

        }
            break;
        case 4 : 
        {
            string User_input ;

            cout << "Enter The Student's Username to change his/her Password : " ;

            cin >> User_input ;

            int i =0 ,j=0 ;

            while ((User_input != Student[i].Username ) && (i < N -1 ))
            {
                i++;
            }

            if ( Student[i].Username == User_input )
            {
                string Password1 , Password2 , Password3 ;

                cout << "Enter the old password : "  ;

                do
                {
                  if ( j == 1)
                  {
                    cout << "Wrong password ! \nYou have two more chances : "  ;
                  }

                  else if ( j == 2)
                  {
                    cout << "This is your last chance : "  ;
                  }

                  cin >> Password1 ;
                  j ++ ;  
                } while ((Password1 != Student[i].Password) && (j < 3));

                if (Password1 == Student[i].Password)
                {
                    cout << "Enter the new Password : "  ;
                    cin >> Password2 ;

                    cout << "Re-enter the new Password : " ;
                    cin>> Password3;

                    while (Password3 != Password2)
                    {
                        cout << "Wrong Password .Enter the new Password again : " ;
                        cin >> Password2 ;

                        cout << "Re-enter the new Password : "  ;
                        cin>> Password3;
                    }
                    
                    Student[i].Password = Password2 ;

                    cout << "Password changed Successfully ! " << endl ;
                    
                }

                else cout << "Out of chances ! " << endl ;
                
            }

            else cout << "Wrong Username ! " << endl ;
            
        }
            break;

        default :
        cout << "Out of Range ! " ;
            break;
    }

    cout << "The final List is : " << endl << endl ;

    for (int i = 0; i < N  ; i++) // Viewing
    {
        cout << "Student Number " << i + 1 << " : **********" << endl << endl ;

        cout << "Username : " << Student[i].Username << endl;

        cout << "First name : " << Student[i].First_name << endl;

        cout << "Last name : " << Student[i].Last_name << endl;

        cout << "Group number : " << Student[i].Group << endl;

        cout << "Password : " << Student[i].Password << endl;

        cout << "Date of birth : " << Student[i].date.Day <<"/"<< Student[i].date.Month << "/" << Student[i].date.Year << endl << endl ;

    }
    
    system ("pause");
    return 0;
}    
    
