#include <iostream>
using namespace std;
struct Node
{
    double data;
    Node* next;
};
Node* Node_creation( double data)
{
    Node *tmp = new Node;
    tmp->data = data;
    tmp->next = nullptr;
    return tmp;
}
Node* insertAB(Node *List , double data)
{
    Node *tmp = Node_creation(data);
    if (List == nullptr)
    {
        List = tmp;
        return List;
    }
    else
    {
        tmp->next =List;
        List->next = tmp;
        return List;
    }
    
}
Node* insertAE(Node *List , double data)
{
    Node *new_element = Node_creation(data) , *tmp = List;
    
    if (List == nullptr)
    {
        List = new_element;
        return List;
    }
    else
    {
        while (tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = new_element;    
        return List;
    }
}
Node* reverse(Node *List)
{
    Node *next= nullptr,*previous = nullptr, *current = List;
    while (current != nullptr)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
void display(Node *List)
{
    cout <<endl<<endl<<endl<<"-----------The List-----------"<<endl<<endl;
    Node * temporary =List ;
    while (temporary != nullptr)
    {
        cout <<  temporary->data <<" -> ";
        temporary = temporary->next;
        
    }
    cout <<"NULL"<<endl<<endl;
}
bool there_is_a_cycle (Node *List )
{
    Node * tmp = List;
    int counter = 0 , c1  ;
    while (tmp->next != nullptr)
    {
        if (counter == 0)
        {
            c1 = tmp->next->data - tmp->data;
            
            counter++;
            tmp = tmp->next;
        }
        else
        {
            if (c1 == tmp->next->data - tmp->data)
            {
                
                return true;
            }
            else
            {
                counter = 0;
            }
            tmp = tmp->next;
        }
    }
    return false;
}
int main()
{
    int data ;
    Node *List = nullptr;
    do
    {
        cout << "Enter -1 to stop adding elements : ";
        cin >> data;
        if (data != -1)
        {
            List = insertAE(List,data);
        }
        
    } while (data != -1);
    
    display(List);
    if (there_is_a_cycle(List ))
    {
        cout << "There is a cycle in the list ";
    }
    else cout << "There isn't a cycle in the list ";
    /*List=reverse(List);
    cout << "Reversed List : " ;
    display(List);*/

}