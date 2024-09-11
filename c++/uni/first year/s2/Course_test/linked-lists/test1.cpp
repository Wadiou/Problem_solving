#include <iostream>
using namespace std;
struct element
{
    int data;
    element *next;
};
void intialisation(element *&Head)
{
    Head = new (element);
    if (Head != nullptr)
    {
        cout<<"Enter the Value for the first element : " ;
        cin >> Head->data;
        Head->next = nullptr;    
    }
}
void append(element * List , int data )
{
    element  * temporary = List , *new_element = new (element) ;
    while (temporary->next != nullptr)
    {
        temporary=temporary->next;
        
    }
    new_element->data = data;
    new_element->next = nullptr;
    temporary->next = new_element;

}
void delete_LE(element * List)
{
    element *temporary1 = List , *temporary2 = nullptr ;
    while (temporary1->next != nullptr)
    {
        temporary2 = temporary1;
        temporary1 = temporary1->next;
    }
    temporary2->next = nullptr;
    delete temporary1;
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
void insert_B(element *&List , int data)
{
    element * new_element = new ( element);
     if (new_element != nullptr)
    {
        new_element->data = data;
        new_element->next = List;
        List = new_element;    
    }
}
void delete_less(element *&List , int Value)
{
    element *temporary1= List ,*temporary2 = temporary1->next ;

    while (temporary2 != nullptr)
    {
        if (temporary2->data < Value)
        {
            temporary1->next = temporary2->next;
            delete temporary2;
            temporary2= temporary1->next;
        }
        else
        {
            temporary1 = temporary2;
            temporary2 = temporary2->next;
        }
    }
    temporary2 = List;
    if (temporary2->data < Value)
    {
        List = List->next;
        delete temporary2;
    }
    
}
int main()
{
    element * List = nullptr ; int data ;
    intialisation(List);
    cout << "Enter a stop value : ";
    int stop ;
    cin >> stop ;
    data = stop + 1;
    while (data != stop) 
    {
        cout << "Enter the value of the new first element: ";
        cin >> data;
        if (data != stop) 
        {
            insert_B(List, data);
        }
    }

    display(List);
    
    delete_less(List,10);
    display(List);
    

}