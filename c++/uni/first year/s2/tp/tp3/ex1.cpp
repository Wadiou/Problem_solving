#include <iostream>
using namespace std;
struct element
{
    double data;
    element *next ;
};

element* node_creation(double data)
{
    element *List = new element;
    if (List != nullptr)
    {
        List->data = data ;
        List->next = nullptr;
        return List;
    }
    return nullptr;
}
void DeleteFE(element *&List)
{
    
    element * temp = List ;
    if (List != nullptr)
    {
        List =List->next;
        delete temp;
    }
    
}

void intialization(element *&List,double data)
{
 List = new element;
 List->next = nullptr;
 List->data = data;   
    
}
void insertAB(element*&List,double data)
{
    element * new_element = node_creation(data);
    new_element->next = List;
    List = new_element;
    
}


void insertInOrder(element*& head, double data) {
    element* newNode = node_creation(data);
    if (head == nullptr || head->data >= data) {
        newNode->next = head;
        head = newNode;
    } else {
        element* current = head;
        while (current->next != nullptr && current->next->data < data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}
void DeleteLTV(element **List , double data)
{
    element *tmp1 = *List , *tmp2 =*List;
    if (List == nullptr)
    {
        cout << "There is nothing to delete ! " <<endl <<endl <<endl ;
    }
    else
    {

        while (tmp1 != nullptr)
        {
            if (tmp1->data < data)
            {
                if (tmp1 == *List)
                {
                    *List = (*List)->next;
                    delete tmp1;
                    tmp1 = *List;
                    tmp2 = *List;
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

    

int main()
{
    element *List = nullptr;
    double data;
    int choice ;
    cout << "---------------- Linked List Operations ---------------\n";
    cout << "| Give your choice     :                              |\n";
    cout << "| 1. Initialize the list                              |\n";
    cout << "| 2. Add at the beginning of the list                 |\n";
    cout << "| 3. Delete from the beginning of the list            |\n";
    cout << "| 4. Display the elements of the list                 |\n";
    cout << "| 5. Insert in ascending order                        |\n";
    cout << "| 6. Delete elements with value less than a given     |\n";
    cout << "|    value                                            |\n";
    cout << "-------------------------------------------------------\n";
    
    cin >> choice;
    switch (choice)
    {
    case 1:
        {
            cout << "Enter the value of the data : ";
            cin >> data;
            intialization(List,data);
            
        }
        break;
    case 2:
        {
            cout << "Enter the value of the data : ";
            cin >> data;
            insertAB(List,data);
            
            
        }
        break;
    case 3:
        {
            DeleteFE(List);
            
        }
        break;            
    case 4:
        {
            display(List);

            
        }
        break;
    case 5:
        {
            insertInOrder(List,data);
        }
        break;
    case 6:
        {
            cout << "Enter the value of the data : ";
            cin >> data;
            DeleteLTV(&List,data);
            display(List);

            
        }
        break;
    default:
    {
        cout << "out of range !"<<endl<<endl<<endl;
            
    }
        break;
    }
}