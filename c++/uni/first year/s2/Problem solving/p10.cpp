#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* Left;
    Node* Right;
};

Node* create_Node(int data) {
    Node* N = new Node;
    N->Left = nullptr;
    N->Right = nullptr;
    N->data = data;
    return N;
}

Node* create_BST(int data, Node* Root) {
    if (Root == nullptr) {
        return create_Node(data);
    }
    if (data >= Root->data) {
        Root->Right = create_BST(data, Root->Right);
    } else {
        Root->Left = create_BST(data, Root->Left);
    }
    return Root;
}

int Max_BST(Node* Root) {
    if (Root == nullptr) {
        return -1;
    }
    if (Root->Right == nullptr) {
        return Root->data;
    }
    return Max_BST(Root->Right);
}

int Min_BST(Node* Root) {
    if (Root == nullptr) {
        return -1;
    }
    if (Root->Left == nullptr) {
        return Root->data;
    }
    return Min_BST(Root->Left);
}

void clearTree(Node* Root) {
    if (Root != nullptr) {
        clearTree(Root->Left);
        clearTree(Root->Right);
        delete Root;
    }
}

void Delete_BST(int data, Node* Root) {
    if (Root != nullptr) {
        if (data == Root->data) {
            clearTree(Root);
        } else if (data > Root->data) {
            Delete_BST(data, Root->Right);
        } else {
            Delete_BST(data, Root->Left);
        }
    }
}

void displayTreeLevelOrder(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();
        cout << node->data << " ";
        
        if (node->Left != nullptr) q.push(node->Left);
        if (node->Right != nullptr) q.push(node->Right);
    }
    cout << endl;
}

int main() {
    Node* root = nullptr;
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Insert into BST\n";
        cout << "2. Display tree in level order\n";
        cout << "3. Find max value\n";
        cout << "4. Find min value\n";
        cout << "5. Delete the BST\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Enter value to insert: ";
                cin >> data;
                root = create_BST(data, root);
                break;
            }
            case 2: {
                cout << "Level order display: ";
                displayTreeLevelOrder(root);
                break;
            }
            case 3: {
                int maxVal = Max_BST(root);
                if (maxVal != -1) {
                    cout << "Max value in BST: " << maxVal << endl;
                } else {
                    cout << "The tree is empty." << endl;
                }
                break;
            }
            case 4: {
                int minVal = Min_BST(root);
                if (minVal != -1) {
                    cout << "Min value in BST: " << minVal << endl;
                } else {
                    cout << "The tree is empty." << endl;
                }
                break;
            }
            case 5: {
                cout << "Deleting the entire BST." << endl;
                clearTree(root);
                root = nullptr;
                break;
            }
            case 0: {
                cout << "Exiting." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    } while (choice != 0);


    return 0;
}
