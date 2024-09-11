#include <iostream>
using namespace std;
const int MAX_NODES = 100;  // Assuming the maximum number of nodes

struct Node {
    int info;
    Node *left, *right;
};

struct Element {
    Node* treeNode;
    Element* next;
};

struct Queue {
    Element* head;
    Element* tail;
};

// Function to initialize the queue
void initQueue(Queue &q) {
    q.head = nullptr;
    q.tail = nullptr;
}

// Function to check if the queue is empty
bool isEmptyQueue(const Queue &q) {
    return q.head == nullptr;
}

// Function to add a new element to the end of the queue
void enqueue(Queue &q, Node* treeNode) {
    Element* newElement = new Element;
    newElement->treeNode = treeNode;
    newElement->next = nullptr;
    
    if (q.tail != nullptr) {
        q.tail->next = newElement;
    }
    q.tail = newElement;
    
    if (q.head == nullptr) {
        q.head = newElement;
    }
}

// Function to remove the element from the front of the queue
Node* dequeue(Queue &q) 
{
    if (isEmptyQueue(q)) {
        return nullptr;
    }
    Element* temp = q.head;
    Node* treeNode = temp->treeNode;
    q.head = q.head->next;
    if (q.head == nullptr) {
        q.tail = nullptr;
    }
    delete temp;
    return treeNode;
}

// Function to clear the queue
void clearQueue(Queue &q) {
    while (!isEmptyQueue(q)) {
        dequeue(q);
    }
}

void breadthFirstSearch(Node* root) {
    Queue queue;
    initQueue(queue);

    enqueue(queue, root);

    while (!isEmptyQueue(queue)) {
        Node* current = dequeue(queue);
        std::cout << current->info << " ";

        if (current->left != nullptr) {
            enqueue(queue, current->left);
        }
        if (current->right != nullptr) {
            enqueue(queue, current->right);
        }
    }

    clearQueue(queue); // Clear the queue after the BFS
}


Node* createNode(char value) {
    if (value == '0') return nullptr;  // Assuming '0' indicates a null node
    Node* node = new Node();
    node->info = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* construire(char nodeInfo[], int size) {
    Node** nodes = new Node*[size];
    
    // First pass to create all nodes
    for (int i = 0; i < size; ++i) 
    {
        nodes[i] = createNode(nodeInfo[i]);
    }

    // Second pass to link all nodes
    for (int i = 0; i < size; ++i) {
        if (2*i +1 < size ) 
        {
            nodes[i]->left = nodes[2*i + 1];  
            nodes[i]->right = nodes[2*i + 2]; 
        }
        else
        {
            nodes[i]->left = nullptr;  
            nodes[i]->right = nullptr; 
        }
    }

    Node* root = nodes[0];  // The root of the tree is at index 0
    delete[] nodes;         // Clean up the temporary array
    return root;
}
