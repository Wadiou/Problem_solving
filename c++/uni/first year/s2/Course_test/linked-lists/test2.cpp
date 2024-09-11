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

element * reverse(element * List)
{
    element * Head = nullptr , *tmp = List, *tmp1;
    int Size=1 , counter = 1;
    while (tmp->next != nullptr)
    {
        tmp=tmp->next;
        Size++;    
    }
    Head = tmp;
    tmp1 = Head;
    while (counter <= Size)
    {
        tmp = List;
        for (int i = 0; i < Size -counter; i++)
        {
            tmp = tmp->next;
        }
        tmp1->next = tmp;
        tmp1 = tmp1->next;
        counter ++ ;
    }
    tmp1->next = nullptr;
    return Head;
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
    element *reversed = reverse(List);
    cout << "Reversed List : " << endl <<endl ;
    display(reversed);

}