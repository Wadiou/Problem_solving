#include <stdio.h>
#include <cstring> 

using namespace std;

struct Cell {
    int col;
    char* name;
};

class Node {
public:
    Cell cell;
    Node* next;
    Node(Cell cell);
};

class LinkedList {
public:
    Node* Head , *current;
    LinkedList();
    void append_element(Cell cell);
    void display();
    ~LinkedList();
};

Node::Node(Cell cell) {
    this->cell = cell;
    this->next = nullptr;
}

LinkedList::LinkedList() {
    this->Head = nullptr;
    this->current = nullptr;
}

void LinkedList::append_element(Cell cell) {
    Node* new_node =  new Node(cell);
   if (Head == nullptr) {
        Head = new_node;
        current = new_node;
   } else {
        current->next = new_node;
        current = current->next;
   }
}

void LinkedList::display() {
    Node* temp = Head;
    while (temp != nullptr) {
        printf("Column: %d, Name: %s\n", temp->cell.col + 1, temp->cell.name);
        temp = temp->next;
    }
}

LinkedList::~LinkedList() {
    Node* temp1 = Head;
    Node* temp2 = nullptr;
    while (temp1 != nullptr) {
        temp2 = temp1->next;
        delete temp1;
        temp1 = temp2;
    }
}

int main() {
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);

    LinkedList* listArray = new LinkedList[n];
    char ***Mat = new char**[n];
    
    for (int i = 0; i < n; i++) {
        Mat[i] = new char*[m];
        for (int j = 0; j < m; j++) {
            Mat[i][j] = new char[100];
            printf("Enter name for matrix[%d][%d]: ", i, j);
            scanf("%s", Mat[i][j]);

            if (strcmp(Mat[i][j], "X") != 0 && strcmp(Mat[i][j], "x") != 0) { 
                Cell temp_cell;
                temp_cell.col = j;
                temp_cell.name = Mat[i][j];
                listArray[i].append_element(temp_cell);
            }
        }
    }
    printf("\nThe Tranformed Matrix :\n\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d:\n", i + 1);
        listArray[i].display();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            delete[] Mat[i][j];
        }
        delete[] Mat[i];
    }
    delete[] Mat;
    delete[] listArray;
    return 0;
}
