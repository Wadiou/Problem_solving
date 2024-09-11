#include <iostream>
#include <string>
const int N = 100;
using namespace std;




struct element {
    char C;
    element *next;
};

struct Stack {
    element *sommet;
};

Stack* Create_Stack() 
{
    return nullptr; 
} 
bool Is_empty(Stack *S)
{
    return S->sommet == nullptr;
}
element* Top(Stack *S)
{
    return S->sommet;
}
void Push(Stack *&S,char C)
{
    if (S->sommet == nullptr)
    {
        element *new_element = new element;
        new_element->next = nullptr;
        new_element->C = C;
        S->sommet = new_element; 
    }
    else
    {
        element *new_element = new element;
        new_element->next = S->sommet;
        new_element->C = C;
        S->sommet = new_element; 
    }
    
    
}
void Pop(Stack *&S)
{
    if (S->sommet == nullptr)
    {
        cout << "There is nothing to pop ! ";
    }
    else
    {
        element *tmp= S->sommet;
        S->sommet = S->sommet->next;
        delete tmp ;

    }
}
void Display(Stack *S)
{
    cout <<endl<<endl<<endl<<"-----------The Stack-----------"<<endl<<endl;
    element *tmp = S->sommet;
    int i = 1;
    while (tmp != nullptr)
    {
        cout <<"Value " <<i <<" : "<<  tmp->C << endl;
        tmp = tmp->next;
        i++;
    }
    
}
bool Well_Par(char ch[N])
{
    Stack *tmp = new Stack ;
    tmp->sommet = nullptr;
    for (int i = 0 ; ch[i] != '\0';++i)
    {
        if (ch[i] == '(')
        {
            Push(tmp,ch[i]);
        }
        else 
        {
            if (ch[i] == ')')
            {
                if (tmp->sommet == nullptr) // there is more ) than (
                {
                    return false;
                }
                else
                {
                    Pop(tmp);
                }
                
            }
        }
        
        
    }
    return tmp->sommet == nullptr;
}

int main()
{
    int choice ;
    Stack *S= new Stack;
    char C ;
    
    
    cout << "---------------- Stack Operations Menu ----------------\n";
    cout << "| 1. Create Stack (initializes stack to NIL)          |\n";
    cout << "| 2. Check if the Stack is Empty                      |\n";
    cout << "| 3. View the Top element of the Stack                |\n";
    cout << "| 4. Push an element onto the Stack                   |\n";
    cout << "| 5. Pop the Top element from the Stack               |\n";
    cout << "| 6. Display the contents of the Stack                |\n";
    cout << "| 7. Check if an expression is well parenthesized     |\n";
    cout << "-------------------------------------------------------\n";
    cout << "Enter your choice: ";
    cin >> choice ;
    
    
    switch (choice)
    {
    case 1:
        {
            S = Create_Stack();
        }
        break;
    case 2:
        {
            if (Is_empty(S)) 
            cout << "The stack is empty ! ";
            else 
            cout << "The stack isn't empty ! ";
            
        }
        break;
    case 3:
        {
            cout << "Enter the character : ";
            cin >> C;
            Push(S,C);

        }
        break;    
    case 4:
        {
            cout << "Enter the character : ";
            cin >> C;
            Push(S,C);

        }
        break;            
    case 5:
        {
            Pop(S);
        }
        break;
    case 6:
        {
            Display(S);
            
        }

        break;
    case 7:
        {
            char Ch[N];
            cin.ignore();
            cout <<endl<< "Enter the expression : " ;
            fgets(Ch,N,stdin);
            if (Well_Par(Ch))
                cout <<endl<<endl<<endl<<"The expression is well parenthesis ";
            else
                cout <<endl<<endl<<endl<<"the expression isn't well parenthesis ";
        }
        break;
          
    default:
        {
            cout << "out of range !"<<endl<<endl<<endl;
        }
        break;
    }
}