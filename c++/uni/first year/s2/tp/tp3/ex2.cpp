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
void DeleteOCC(element *&List , double data)
{
    element *tmp1 = List , *tmp2 =List;
    if (List == nullptr)
    {
        cout << "There is nothing to delete ! " <<endl <<endl <<endl ;
    }
    else
    {
        while (tmp1 != nullptr)
        {
            if (tmp1->data == data)
            {
                if (tmp1 == List)
                {
                    List = List->next;
                    delete tmp1;
                    tmp1 = List;
                    tmp2 = List;
                }
                else
                {
                    tmp2->next = tmp1->next;
                    delete tmp1;
                    tmp1 = tmp2->next;
                }
            }
            else
            {
                tmp2 = tmp1;
                tmp1 = tmp1->next;
            }   
        }        
    }
}

void Transform(element *&List)
{
    element *tmp = List;
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = List;
    List->previous = tmp ;
}   
int main()
{
    element * List = nullptr;
    int choice , N;
    cout << "----------- Doubly Linked List Operations -------------\n";
    cout << "| 1. Create and initialize the doubly linked list     |\n";
    cout << "| 2. Insert N elements at the top of the list         |\n";
    cout << "| 3. Insert N elements at the end of the list         |\n";
    cout << "| 4. Show list elements                               |\n";
    cout << "| 5. Remove all occurrences of a user-entered integer |\n";
    cout << "| 6. Transform this list to a circular list           |\n";
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
            List=node_creation(data);
        }
        break;
    case 2:
        {
            cout << "Enter N : ";
            cin >> N ;
            for (int i = 0; i < N; i++)
            {
                cout << "Enter the value of the data : ";
                cin >> data;
                insertAB(List,data);
            }
            
        }
        break;
    case 3:
        {
            cout << "Enter N : ";
            cin >> N ;
            for (int i = 0; i < N; i++)
            {
                cout << "Enter the value of the data : ";
                cin >> data;
                insertAE(List,data);
            }
        }
        break;            
    case 4:
        {
            display(List);
        }
        break;
    case 5:
        {
            cout << "Enter the number you wish to delete";
            cin >> data;
            DeleteOCC(List ,data);
            
        }
        break;
    case 6:
        {
            Transform(List);
        }
        break;
          
    default:
        {
            cout << "out of range !"<<endl<<endl<<endl;
        }
        break;
    }
}
