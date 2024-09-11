#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* Next;
};

// Global lists
Node* L1 = nullptr;
Node* L2 = nullptr;

Node* addNode(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->Next = head;
    head = newNode;
    return head;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << "->";
        current = current->Next;
    }
    cout <<"NULL"<< endl;
}
Node* sort(Node* L1, Node* L2) {
    Node* L3 = L1, *temp3 = L3, *temp2 = L2;
    L1=nullptr;
    while (temp2 != nullptr) {
        Node* N= temp2->Next,*temp3 =L3;
        
        if (L3 == nullptr || temp3->data > temp2->data) {
            temp2->Next = L3;
            L3 = temp2;
            temp2 = N;
        } else {
            while (temp3->Next != nullptr&& temp2->data > temp3->Next->data ) {
                temp3 = temp3->Next;
            }
            if (temp3 != nullptr) {
            temp2->Next = temp3->Next;
            temp3->Next = temp2;
            temp2 = N;
            }
            else
        {
            temp2->Next = nullptr;
            temp3->Next = temp2;
            temp2 = N;
        }
        }
        
    }
    
    return L3;
}


int main() {
   
    L1 = addNode(L1, 7);
    L1 = addNode(L1, 6);
    L1 = addNode(L1, 5);
    L1 = addNode(L1, 2);
    printList(L1);
   
    L2 = addNode(L2, 9);
    L2 = addNode(L2, 8);
    L2 = addNode(L2, 4);
    L2 = addNode(L2, 3);
    L2 = addNode(L2, 1);

    printList(L2);


    Node* L3 = sort(L1, L2);

    cout << "L3: ";
    printList(L3);

    return 0;
}