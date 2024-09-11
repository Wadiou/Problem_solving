#include <iostream>
using namespace std;
struct element
{
    int data;
    element *next;
};
void Node_creator(element *&elem, int data)
{
    elem = new (element);
    if (elem != nullptr)
    {
        elem->data = data ;
        elem->next = nullptr ;
    }
    
}

element *list_creater()
{
    element *Head = nullptr , *ptr = Head;

    Node_creator(ptr , 1);
    int data , i = 1 ;
    while (ptr->data != 0)
    {
        cout << "Enter the data for the list number or type 0 to terminate " << i << " : ";
        cin >> data ;
        Node_creator(ptr, data);
        ptr = ptr->next;
        i ++ ;

    }
    ptr = Head;
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }
    ptr = nullptr;
    delete ptr;
    return Head;
}
void display(element *head )
{
    element *ptr =head ;
    int i = 1 ;
    while (ptr != nullptr)
    {
        cout << "The value of the list number " << i <<" : " << ptr->data << endl ;
        i++;
    }
    
}
int main()
{
   element *head =list_creater();
   display(head);
}
