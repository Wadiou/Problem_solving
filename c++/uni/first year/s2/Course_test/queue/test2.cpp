#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;

struct element {
    char data;
    element* next;
};

struct Queue {
    element* first;
    element* last;
};
struct Stack
{
    element*Top;
};

void Node_creation(element *&e,char data)
{
    e = new element;
    e->data = data;
    e->next = nullptr;
}
void initializeQueue(Queue*& q)
{
    q = new Queue;
}
bool isEmpty(Queue* q)
{
    return q->first == nullptr;
}
void enqueue(Queue*& q, char data) {
    element *new_element;
    Node_creation(new_element, data);
    if (isEmpty(q)) 
    {
        q->first = new_element;
        q->last = new_element;
    } 
    else 
    {
        q->last->next = new_element;
        q->last = new_element;
    }
}


char dequeue(Queue*& Q)
{
    char C;
    if (!isEmpty(Q))
    {
        element *new_element;
        new_element = Q->first;
        C = new_element->data;
        Q->first= Q->first->next;
        if (Q->first == nullptr)
        {
            Q->last = nullptr;
        }
        delete new_element;
        return C ;
    }
    else
    {
        return 1;
    }
    
}
void Push(Stack *&S,char C)
{
    if (S->Top == nullptr)
    {
        element *new_element ;
        Node_creation(new_element,C);
        S->Top = new_element; 
    }
    else
    {
        element *new_element ;
        Node_creation(new_element,C);
        new_element->next = S->Top;
        new_element->data = C;
        S->Top = new_element; 
    }
    
}
char pop(Stack*& s) {
    if (s->Top == nullptr) {
        return 1;  
    } else {
        element* temp = s->Top;
        char data = temp->data;
        s->Top = temp->next;
        delete temp;
        return data;
    }
}
bool isalnum(char c)
{
    return ((c >= 'A' && c <= 'Z') ||(c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

bool isOperator(char c)
{
    return ((c == '+') || (c == '-') || (c == '*') || (c == '/'));
}
void printStack(const Stack* s) {
    for (element* curr = s->Top; curr != nullptr; curr = curr->next) {
        cout << curr->data << " ";
    }
    cout << endl;
}


Queue* infixToPostfix( char infix[MAX_SIZE]) {
    Stack *S = new Stack;
    S->Top=nullptr;
    Queue* Q = new Queue;
    Q->first = nullptr;
    Q->last = nullptr;
    S->Top = nullptr;

    for (int i = 0; infix[i] != '\0'; ++i) {
        

        if (isalnum(infix[i])) 
        {
            enqueue(Q, infix[i]);
        } 
        else if (infix[i] == ')') 
        {
           enqueue(Q,pop(S));
        }
        else if (isOperator(infix[i]))
        {
            Push(S,infix[i]);
        }
    }
    while (S->Top != nullptr)
    {
        enqueue(Q,pop(S));
    }
    
    return Q;
}
void display_queue(Queue *Q)
{
    element*temporary = Q->first;
    while (temporary!=nullptr)
    {
        cout << temporary->data <<" ";
        temporary = temporary->next;
    }
    
}
int main() {
    
    char infix[MAX_SIZE];
    cout <<"Enter the infix expression with parentheses : " ;
    
    fgets(infix,MAX_SIZE,stdin);
    Queue *Postfix = infixToPostfix(infix);
    
    cout <<endl<<"The Postfix Expression is : "<<endl<<endl;
    display_queue(Postfix);


    return 0;
}
