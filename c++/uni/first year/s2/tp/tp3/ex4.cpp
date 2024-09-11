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

Queue* initializeQueue()
{
    return nullptr;
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


void dequeue(Queue*& Q)
{
    if (!isEmpty(Q))
    {
        element *new_element;
        new_element = Q->first;
        Q->first= Q->first->next;
        if (Q->first == nullptr)
        {
            Q->last = nullptr;
        }
        delete new_element;
    }
}


void display_queue(Queue *Q)
{
    element*temporary = Q->first;
    cout <<endl<<endl<<endl;
    while (temporary!=nullptr)
    {
        cout << temporary->data <<" ";
        temporary = temporary->next;
    }
    
}
int main() {
    
    char expression[MAX_SIZE]="I*NFO***MA*TI*QUE\0" ;
    Queue *Q = initializeQueue();
    Q = new Queue;
    Q->first = nullptr;
    Q->last = nullptr;
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (((expression[i]  >= 'A' && expression[i]  <= 'Z') ||(expression[i]  >= 'a' && expression[i]  <= 'z')))
        {
            enqueue(Q,expression[i]);
        }
        else if (expression[i] == '*')
        {
            dequeue(Q);

        }
    }
    display_queue(Q);
        

    return 0;
}
