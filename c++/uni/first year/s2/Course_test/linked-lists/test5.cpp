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
void devide(element *&List , element *&oddList , element *&evenList)
{
    element *temp = List ,*eventemp =nullptr, *oddtemp = nullptr  ;
    while (temp!= nullptr)
    {
        if (temp->data % 2 == 0)
        {
            if (evenList == nullptr)
            {
                Node_creation(evenList,temp->data);
                eventemp = evenList;
            }
            else
            {
                Node_creation(eventemp->next,temp->data) ;
                eventemp = eventemp->next;
                
            }
            
        }
        else
        {
            if (oddList == nullptr)
            {
                 Node_creation(oddList,temp->data);
                oddtemp = oddList;
            }
            else
            {
                Node_creation(oddtemp->next,temp->data) ;
                oddtemp = oddtemp->next;
            }
        }
        temp = temp ->next ;
    }
    
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
    element *List = nullptr;
    int size , data;
    cout << "Enter The number of elements you wish to enter : " ;
    cin >> size ;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Value of the element number " << i +1 <<": " ;
        cin >> data ;
        append(List , data);

    }
    cout << "Normal List : " << endl <<endl ;
    display(List);
    element *evenList = nullptr , *oddList = nullptr;
    devide(List,oddList,evenList);
    cout << "even List : " << endl <<endl ;
    display(evenList);
    cout << "odd List : " << endl <<endl ;
    display(oddList);
   

}