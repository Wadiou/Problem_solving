#include <iostream>
using namespace std;
struct Node
{
    char data;
    Node * next;
};
struct stack
{
    Node *Top;
};
Node* node_creation(char data)
{
    Node* element = new Node;
    element ->data = data;
    element ->next = nullptr;
    return element;
}
void push(stack *S , char data)
{
    Node* new_element = node_creation(data);
    new_element->next = S->Top;
    S->Top = new_element;
}
char pop(stack *S)
{
    if (S->Top == nullptr)
    {
        return 1; 
    }
    else
    {
        Node* temp = S->Top ;
        char N = temp->data;
        S->Top = S->Top->next;
        delete temp;
        return N;
    }
}
bool balanced (string str)
{
    stack *S = new stack;
    S->Top = nullptr;
    for (int i = 0;str[i] != '\0'; i++)
    {
        if (str[i]=='(' || str[i]=='{' || str[i]=='[' )
        {
            push(S,str[i]);
        }
        else
        {
            if (str[i]==')' || str[i]=='}' || str[i]==']')
            {
                if (S->Top == nullptr)
                {
                    return false;
                }
                else
                {
                    char c = pop(S);
                    if ((c == '('&& str[i] != ')') || (c == '{'&& str[i] != '}') || (c == '['&& str[i] != ']'))
                    {
                        return false;
                    }
                    
                }
            }
            

        }
        
    }
    if (S->Top == nullptr)
    {
        return true;
    }
    return false;
    
}