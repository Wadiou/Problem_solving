#include <iostream>
#include <stack>
using namespace std;

struct Node {
    double data;
    Node* next;
};

Node* createNode(double data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insertAtBeginning(Node*& head, double data) {
    Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, double data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void clearList(Node*& head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

void insertInOrder(Node*& head) {
    stack<double> stack;
    Node* temp = head;

    while (temp != nullptr) {
        stack.push(temp->data);
        temp = temp->next;
    }
    clearList(head);

    while (!stack.empty()) {
        double data = stack.top();
        stack.pop();
        Node* newNode = createNode(data);
        if (head == nullptr || head->data >= data) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next != nullptr && curr->next->data < data) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            curr->next = newNode;
        }
    }
}
bool palidrome_list (Node *List)
{
    bool palindome = true;
    stack<double> stack;
    Node*Temp = List;
    while (Temp != nullptr)
    {
        stack.push(Temp->data);
        Temp = Temp->next;
    }
    Temp = List;
    while (Temp != nullptr)
    {
        if (Temp->data != stack.top())
        {
            palindome = false;
            break;
        }
        Temp= Temp->next;
        stack.pop();
    }
    return palindome;
    
}
void displayList(Node* head) {
    Node* temp = head;
    cout << "List elements: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"NULL" << endl;
}

Node* mergeSortedLists(Node* l1, Node* l2) {
    Node* temp1 = l1, *temp2 = l2;
    while (temp2 != nullptr) {
        Node* next = temp2->next;
        if (temp1 == nullptr || temp1->data >= temp2->data) {
            temp2->next = temp1;
            l1 = temp2;
            temp1 = l1;
            temp2 = next;
        } else {
            while (temp1 != nullptr && temp2->data >= temp1->next->data) {
                temp1 = temp1->next;
            }
            temp2->next = temp1->next;
            temp1->next = temp2;
            temp1 = l1;
            temp2 = next;
        }
    }
    return l1;
}

int main() {
    Node* head = nullptr;
    int choice;
    bool running = true;

    while (running) {
        cout << "\nMenu:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Display list\n";
        cout << "4. Merge two sorted lists\n";
        cout << "5. Palidrome\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        double value;
        switch (choice) 
        {
        case 1:
        {
            
            cout << "Enter value: ";
            cin >> value;
            insertAtBeginning(head, value);
            break;}
        case 2:
        {
            cout << "Enter value: ";
            cin >> value;
            insertAtEnd(head, value);
            break;}
        case 3:
        {
            displayList(head);
            break;}
        case 4:
        {
            Node* list1 = nullptr, * list2 = nullptr;
            int size1, size2;
            cout << "Enter size and elements for the first list:\n";
            cin >> size1;
            for (int i = 0; i < size1; ++i) {
                cout << "Enter the value for element number " << i+1 <<" : ";
                cin >> value;
                insertAtEnd(list1, value);
            }
            insertInOrder(list1);
            cout << "Enter size and elements for the second list:\n";
            cin >> size2;
            for (int i = 0; i < size2; ++i) {
                cout << "Enter the value for element number " << i+1 <<" : ";
                cin >> value;
                insertAtEnd(list2, value);
            }
            insertInOrder(list1);
            head = mergeSortedLists(list1, list2);
            cout << "Merged List: ";
            displayList(head);
            clearList(head);
            break;}
        case 5:
        {
            if (palidrome_list(head))
            {
                cout << "List is palindrome ! " <<endl;
            }
            else
            {
                cout << "List isn't palindrome ! " <<endl;
            }
            break;
        }
        case 6:
        {
            running = false;
            break;}
        default:
        {
            cout << "Invalid choice. Try again.\n";
            break;}
        }
    }
    return 0;
}
