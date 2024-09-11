#include <iostream>
using namespace std;
const int N = 20 ;
const char *file_path = "ex1.txt";
struct contact
{
    char First_name[N] , Last_name[N];
    double number;
};
void append_contact(contact cont) {
    FILE *f = fopen(file_path, "a");
    if (f != nullptr) {
        fprintf(f, "%s %s %lf", cont.First_name, cont.Last_name, cont.number);
        fclose(f); 
    }
}




void display_contact()
{
    FILE *f = fopen(file_path,"r");
    contact cont;
    int i = 0;
    while (fscanf(f, "%s %s %lf", cont.First_name, cont.Last_name, &cont.number) == 3) {
        cout << "Contact number : " << ++i << endl;
        cout << "First name : " << cont.First_name << endl;
        cout << "Last name : " << cont.Last_name << endl;
        cout << "cont.number : " << cont.number << endl << endl;
    }
    fclose(f);
}
void search( char name[N])
{
    FILE *f = fopen(file_path,"r");
    contact cont; 
    int counter = 0 , i =1 ;

    while ((counter != i) && fscanf(f, "%s %s %lf", cont.First_name, cont.Last_name, &cont.number) == 3 )
    {
        counter = 0;
        for (i = 0; name[i] != '\0' && cont.Last_name[i] != '\0' ; i++)
        {
            if (name[i] == cont.Last_name[i])
            {
                counter ++;   
            }
        
        }
    }
    
    
    if (counter == i)
    {
        cout << "Contact : "  <<endl;
        cout << "First name : " << cont.First_name <<endl;
        cout << "Last name : " << cont.Last_name <<endl;
        cout << "Number : " << cont.number<<endl<<endl;
    }
    else
    {
        cout << "Unfound ! "<<endl;
    }
    fclose(f);
    
}
void choices()
{
    cout <<"----------- My contacts -------------\n";
    cout <<"| Give your choice     :            |\n";
    cout <<"| 1. Add a contact                  |\n";
    cout <<"| 2. Show all contacts              |\n";
    cout <<"| 3. Find a contact                 |\n";
    cout <<"| 4. Exit the program               |\n";
    cout <<"------------------------------------\n";
    int choice;
    cin >> choice ;
    switch (choice)
    {
    case 1:
        {
            contact cont ;
            cout <<"Enter the First Name : ";
            cin >> cont.First_name ;
            cout <<"Enter the Last Name : ";
            cin >> cont.Last_name ;
            cout <<"Enter the Number : ";
            cin >> cont.number;
            append_contact(cont);
            choices();
        }
        break;
    case 2:
        {
            display_contact();
            choices();
        }   
    break;
    case 3:
        {
            char LN[N];
            cout <<"Enter the Last Name : ";
            cin >> LN ;
            search(LN);
            choices();
        }
    case 4:
    break;
    default:
        cout << "Undefined !" << endl;
        choices();
        break;
    }




}
int main()
{
    choices();
}