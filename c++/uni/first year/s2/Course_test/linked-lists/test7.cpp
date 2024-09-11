#include <iostream>
using namespace std;
struct element
{
    double data;
    element *next , *previous ;
};

element* node_creation(double data)
{
    element *List = new element;
    if (List != nullptr)
    {
        List->data = data ;
        List->next = nullptr;
        List->previous = nullptr;
        return List;
    }
    return nullptr;
}

void insertAE(element *&List ,double data)
{
    element *temp = List;
    if (List == nullptr )
    {
        List =node_creation(data);
    }
    else
    {
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        element * new_element = node_creation(data);
        new_element->previous = temp;
        temp->next = new_element;
    }
    
}
void insertAB(element*&List,double data)
{

    if (List == nullptr)
    {
        List=node_creation(data);
    }
    else
    {
        element * new_element = node_creation(data);
        new_element->next = List;
        List->previous = new_element;
        List = new_element;
    }
}
void insertAM(element *&List , double data , int position)
{
    element *temp =List , *new_element=node_creation(data);
    int counter = 1;
    while ((counter < position - 1)&& temp->next != nullptr)
    {
        temp = temp->next;
        counter ++;
    }
    if (temp->next != nullptr)
    {
        new_element->next = temp->next;
        new_element->previous= temp;
        temp->next = new_element;
        temp->next->previous = new_element;
    }
    else
    {
        cout << "out of range ! "<<endl<<endl<<endl;
    }
    
}
void DeleteFE(element *&List)
{
    if (List == nullptr)
    {
        cout <<"There's nothing to delete ! "<<endl<<endl<<endl;
    }
    else
    {
        element * temp = List ;
        if (List->next != nullptr)
        {
            List = List->next;
            List->previous = nullptr;
        }
        delete(temp);
    }
}
void DeleteLE(element *List)
{
    if (List == nullptr)
    {
        cout <<"There's nothing to delete ! "<<endl<<endl<<endl;
    }
    else
    {
        element * temp = List ,*temp1 = temp->next ;
        if (temp1 != nullptr)
        {
            while (temp1->next != nullptr)
            {
                temp= temp1;
                temp1 = temp1->next;
            }
            delete temp1;
            temp->next = nullptr;

        }
        else delete(temp);
        
    }
}
void DeleteME(element *List , int position)
{
    element *temp =List , *temp1 = nullptr;
    int counter = 1;
    while ((counter < position - 1)&& temp->next != nullptr)
    {
        temp = temp->next;
        counter ++;
    }
    temp1 = temp->next;
    if (temp->next != nullptr)
    {
        temp->next = temp1->next;
        temp1->next->previous = temp;
        delete temp1;
    }
    else
    {
        cout << "out of range ! "<<endl<<endl<<endl;
    }
}
void display(element *List)
{
    cout <<endl<<endl<<endl<<"-----------The List-----------"<<endl<<endl;
    element * temporary =List ;int i = 1;
    while (temporary != nullptr)
    {
        cout <<"Value " <<i <<" : "<<  temporary->data << endl;
        temporary = temporary->next;
        i++;
    }
    cout <<endl<<endl;
}
void choices(element *&List )
{
    int choice , position;
    cout << "----------- Doubly Linked List Operations -------------\n";
    cout << "| Give your choice     :                              |\n";
    cout << "| 1. Insert at the beginning of the list              |\n";
    cout << "| 2. Insert at the end of the list                    |\n";
    cout << "| 3. Insert in the middle of the list                 |\n";
    cout << "| 4. Delete the first element of the list             |\n";
    cout << "| 5. Delete the last element of the list              |\n";
    cout << "| 6. Delete an element with a given value             |\n";
    cout << "| 7. Display the List                                 |\n";
    cout << "| 8. Exit the program                                 |\n";
    cout << "-------------------------------------------------------\n";
    cout << "Enter your choice: ";
    cin >> choice;
    double data;
    switch (choice)
    {
    case 1:
        {
            cout << "Enter the value of the data : ";
            cin >> data;
            insertAB(List,data);
            choices(List);
        }
        break;
    case 2:
        {
            cout << "Enter the value of the data : ";
            cin >> data;
            insertAE(List,data);
            choices(List);
        }
        break;
    case 3:
        {
            cout << "Enter the value of the data : ";
            cin >> data;
            cout << "Enter the value of the position : ";
            cin >> position;
            insertAM(List,data,position);
            choices(List);
        }
        break;            
    case 4:
        {
            DeleteFE(List);
            choices(List);
        }
        break;
    case 5:
        {
            DeleteLE(List);
            choices(List);
        }
        break;
    case 6:
        {
            cout << "Enter the value of the position : ";
            cin >> position;
            DeleteME(List,position);
            choices(List);
        }
        break;
    case 7:
        {
            display(List);
            choices(List);
        }
        break;
    case 8:
        
        break;      
    default:
        {
            cout << "out of range !"<<endl<<endl<<endl;
            choices(List);
        }
        break;
    }
}
int main()
{
    element * List = nullptr;
    choices(List);
    cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"------Thanks for trying the program !" ;
}