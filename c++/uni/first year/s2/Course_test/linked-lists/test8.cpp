#include <iostream>
using namespace std;
struct element
{
    double data;
    element *next  ;
};
struct stack
{
    element *Head;
};


element* node_creation(double data)
{
    element *List = new element;
    List->data = data ;
    List->next = nullptr;
    return List;
}
void push(stack *&Stack,double data)
{
    if (Stack == nullptr)
    {
        Stack = new stack;
        Stack->Head = new element;
        Stack->Head->data = data;
        Stack->Head->next = nullptr;
    }
    else
    {
        element *new_element = node_creation(data);
        new_element->next = Stack->Head;
        Stack->Head = new_element;
    }
    
}
void append(element *&List ,double data)
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
        temp->next = new_element;
    }
    
}
void inverse(stack *&Stack ,element *List)
{
    element *temporary = List;
    while (temporary != nullptr)
    {
        push(Stack,temporary->data);
        temporary = temporary->next;
    }
    
}
void clearStack(stack *&Stack) {
    element *temp = nullptr;
    
    while (Stack->Head != nullptr) {
        temp = Stack->Head;
        Stack->Head = Stack->Head->next;
        delete temp;
    }

}
void display_list(element *List)
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
void display_stack(stack *Stack)
{
    cout <<endl<<endl<<endl<<"-----------The Stack-----------"<<endl<<endl;
    element *temporary = Stack->Head;
    int i = 1;
    while (temporary != nullptr)
    {
        cout <<"Value " <<i <<" : "<<  temporary->data << endl;
        temporary = temporary->next;
        i++;
    }
    cout <<endl<<endl;
}
void choices(stack *&Stack,element *&List)
{
    int choice ;
    double data;
    cout << "---------- Stack and simple List operations ----------\n";
    cout << "| Give your choice     :                              |\n";
    cout << "| 1. Insert at the end of the list                    |\n";
    cout << "| 2. Display the List                                 |\n";
    cout << "| 3. Display the stack                                |\n";
    cout << "| 4. Exit the program                                 |\n";
    cout << "-------------------------------------------------------\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        {
            cout << "Enter the value of the data : ";
            cin >> data;
            append(List,data);
            choices(Stack,List);
        }
        break;
    case 2:
        {
            display_list(List);
            choices(Stack,List);
        }
        break;
    case 3:
        {
            inverse(Stack,List);
            display_stack(Stack);
            clearStack(Stack);
            choices(Stack,List);
        }
        break;            
    case 4:
        
        break;
      
    default:
        {
            cout << "out of range !"<<endl<<endl<<endl;
            choices(Stack,List);
        }
        break;
    }
}
int main()
{
    stack *Stack = nullptr;
    element *List = nullptr;
    choices(Stack,List);
}