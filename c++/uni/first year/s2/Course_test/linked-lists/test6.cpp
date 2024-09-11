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
double *Transform1(element *List ,int &size)
{
    element *temp = List;
    int i;
    while (temp != nullptr)
    {
        size++;
        temp = temp->next;
    }
    temp = List;
    double *Array = new double[size];
    for ( i = 0; i < size; i++)
    {
        Array[i]=temp->data;
        temp = temp->next;
    }
    return Array;
}
double *Transform2(element *List,int &size)
{
    element *temp = List;
    int  i;
    while (temp != nullptr)
    {
        size++;
        temp = temp->next;
    }
    temp = List;
    double *Array = new double[size];
    for ( i = 0; i < size; i++)
    {
        Array[size-i-1]=temp->data;
        temp = temp->next;
    }
    return Array;
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
void display_array(double * Arr , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout <<"\t"<<Arr[i];
        
    }
    cout << endl;
    
}
int main()
{
    element *List = nullptr;
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
    size = 0;
    double *Array1 = Transform1(List,size);
    display_array(Array1,size);
    size = 0;
    double *Array2 = Transform2(List,size);
    display_array(Array2,size);


}