#include <iostream>
using namespace std;

struct element {
    double data;
    element *next;
};

element* node_creation(double data) {
    element *List = new element;
    if (List != nullptr) {
        List->data = data;
        List->next = nullptr;
        return List;
    }
    return nullptr;
}

void insertAB(element*& List, double data) {
    element *new_element = node_creation(data);
    new_element->next = List;
    List = new_element;
}

void Remove_Dup(element *&List) {
    element *P1 = List, *P2 = List->next;
    while (P2 != nullptr) {
        if (P1->data == P2->data) {
            P1->next = P2->next;
            delete P2;
            P2 = P1->next;
        } else {
            P1 = P2;
            P2 = P2->next;
        }
    }
}

void display(element *List)
{
    cout <<endl<<endl<<endl<<"-----------The List-----------"<<endl<<endl;
    element * temporary =List ;
    while (temporary != nullptr)
    {
        cout <<  temporary->data <<" -> ";
        temporary = temporary->next;
        
    }
    cout <<"NULL"<<endl<<endl;
}
void split_list (element *&List1 ,element *& List2 )
{
    element *temp= List1;
    int i;
    for ( i = 0; temp != nullptr; i++)
    {
        temp = temp->next;
    }
    temp = List1;
    if (i!= 0)
    {
        i = i/2;
        for (int j = 1; j < i; j++)
        {
            temp = temp->next;
        }

        List2 = temp->next;
        temp->next = nullptr;
    }
    
    
}
void rotation (element *&List , int N)
{
    if (List != nullptr && List->next != nullptr)
    {
        for (int i = 0; i < N; i++)
        {
            element *temp = List ;
            while (temp->next->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next->next = List;
            List = temp->next;
            temp->next = nullptr;
        }
    }
}
int intersection (element *L1,element *L2)
{
    element *T1 = L1 , *T2 ;
    while (T1 != nullptr)
    {
        T2 = L2;
        while (T2 != nullptr)
        {
            if (T1->data == T2->data)
            {
                return T1->data;
            }
            
        }
        
    }
    return -1;
    
}
/*element * add_list (element *L1,element *L2 )
{
    element *T1 =L1 , *T2 = L2;
    while (T1 != nullptr)
    {
        
    }
    
}*/
int main() {
    element *myList = nullptr ;

    insertAB(myList, 5.0);
    insertAB(myList, 4.0);
    insertAB(myList, 7.0);
    insertAB(myList, 3.0);
    insertAB(myList, 2.0);
    insertAB(myList, 9.0);
    insertAB(myList, 1.0);

    cout << "Original list:" << endl;
    display(myList);

    /*Remove_Dup(myList);

    cout << "List after removing duplicates:" << endl;
    display(myList);

    split_list(myList,list2);

    cout << "first list " <<endl;
    display(myList);
    cout << "second list " <<endl;
    display(list2);*/
    rotation(myList , 2);
    cout << "List after rotation : " << endl;
    display(myList);



    return 0;
}
