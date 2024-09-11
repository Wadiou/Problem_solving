#include <iostream>
using namespace std;
struct element
{
    int data;
    element *next;
};
void Node_creation(element *&Head , int data)
{
    Head = new (element);
    if (Head != nullptr)
    {
        Head->data = data ;;
        Head->next = nullptr;    
    }
}
void append(element *&List, int data) {
    element *temporary = List, *new_element = nullptr;
    if (List == nullptr) {
        Node_creation(List, data);
    } else {
        while (temporary->next != nullptr) {
            temporary = temporary->next;
        }
        Node_creation(new_element, data);
        temporary->next = new_element;
    }
    
}
element *concatination(element *List1 , element*List2)
{
    element* tmp = List1;
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = List2;
    return List1;
    
}
element *clone(element *List)
{
    element *newList=nullptr , *temp =List , *newtemp=nullptr;

    while (temp!=nullptr)
    {
        if (newList == nullptr)
        {
            Node_creation(newList,temp->data);
            newtemp = newList;
        }
        else
        {
            Node_creation(newtemp->next, temp->data);
            newtemp = newtemp->next;
        }
        temp = temp->next;
        
    }
    return newList;
    
}
void display(element *List)
{
    element * temporary =List ;int i = 1;
    while (temporary != nullptr)
    {
        cout <<"Value " <<i <<" : "<<  temporary->data << endl;
        temporary = temporary->next;
        i++;
    }
    
}
int main()
{
    element *List1 = nullptr , *List2 = nullptr , *cloned1=nullptr;
    int size , data;
    cout << "Enter The number of elements you wish to enter for the fisrt List : " ;
    cin >> size ;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Value of the element number " << i +1 <<": " ;
        cin >> data ;
        append(List1 , data);

    }
    cloned1 = clone(List1);
    cout << "List1 : " << endl <<endl ;
    display(List1);
    cout << "Enter The number of elements you wish to enter for the second List : " ;
    cin >> size ;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Value of the element number " << i +1 <<": " ;
        cin >> data ;
        append(List2 , data);

    }
    cout << "List2 : " << endl <<endl ;
    display(List2);
    element* Concatinated = concatination(cloned1,List2);
    cout << "Concatinated List : " << endl <<endl ;
    display(Concatinated);
    cout << "List1 : " << endl <<endl ;
    display(List1);

}