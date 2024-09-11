#include <iostream>
using namespace std;
struct Delement
{
    double data;
    Delement *previous , *next;
};
void Node_creator(Delement *&List , double data)
{
    List = new Delement;
    List->next = nullptr;
    List->previous = nullptr;
    List->data = data;
   
}
void append(Delement *&List , double data)
{
    if (List == nullptr)
    {
        Node_creator(List,data);   
    }
    else
    {
        Delement *temp = List , *new_element = nullptr  ;
        Node_creator(new_element,data);
        while (temp->next != nullptr)
        {
            temp= temp->next;
        }
        new_element->previous = temp;
        temp->next = new_element;
        
        
    }
}

Delement* reverse1(Delement *List)
{
    Delement *reversed =nullptr, *temp1 =List,*temp2 =nullptr ;
    while (temp1->next != nullptr)
    {
        temp1 = temp1->next;
        
    }
    
    while (temp1 != nullptr)
    {
        if (reversed == nullptr)
        {
            Node_creator(reversed,temp1->data);
            temp2 = reversed;
        }
        else
        {
            Node_creator(temp2->next,temp1->data);
            temp2 = temp2->next;
        }
        temp1 = temp1->previous;
    }
    
    return reversed;
    
}   
void display(Delement *List)
{
    Delement * temporary =List ;int i = 1;
    while (temporary != nullptr)
    {
        cout <<"Value " <<i <<" : "<<  temporary->data << endl;
        temporary = temporary->next;
        i++;
    }
    
}
Delement* reverse2(Delement *head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Delement *prev = nullptr;
    Delement *current = head;
    Delement *next = nullptr;

    while (current != nullptr) 
    {
        next = current->next;
        current->next = prev;
        current->previous = next;
        prev = current;
        current = next;
    }
    return prev;
}

void test(Delement *List)
{
    Delement *temp1 = List;
    while (temp1->next != nullptr)
    {
        temp1 = temp1->next;
        
    }
    int i=0 ;
    while (temp1 != nullptr)
    {
        cout << i++ << endl << "The value is : "<< temp1->data<< endl ;
        temp1 = temp1->previous;

    }
    

}
int main()
{
    Delement *List = nullptr;
    int size ;double data;
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
    Delement *reversed = reverse1(List);
    cout << "Reversed List : " << endl <<endl ;
    display(reversed);
}