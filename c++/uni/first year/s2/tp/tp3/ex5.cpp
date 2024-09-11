#include <iostream>
using namespace std;
int SIZE ;
struct Node
{
    char data;
    Node* left , *right;
};
Node * initialize_tree(char c)
{
    Node *Root = new Node;
    Root->data =c;
    Root->left = nullptr;
    Root->right = nullptr;
    return Root;
}
int Max(int A , int B)
{
    if (A >= B)
    {
        return A;
    }
    else
    {
        return B;
    }
}
void clear(Node * Treenode)
{
    Node * tmp = Treenode;
    if (Treenode != nullptr)
    {
        clear(Treenode->left);
        clear(Treenode->right);
        delete tmp;
    }
    
}
Node* construction(char* Tab , int Position)
{
    Node *Tree_Node = nullptr;
    if (Position < SIZE)
    {
        Tree_Node = new Node;
        Tree_Node->data = Tab[Position];
        Tree_Node->left = construction(Tab,2*Position +1);
        Tree_Node->right = construction(Tab,2*Position +2);
    }
    return Tree_Node;
}
int Tree_size(Node *Tree_Node)
{
    if (Tree_Node == nullptr)
    {
        return 0;
    }
    else
    {
        return Tree_size(Tree_Node->left) + Tree_size(Tree_Node->right) + 1;
    }
    
}
int Tree_Depth(Node *Tree_Node)
{
    if (Tree_Node == nullptr)
    {
        return 0;
    }
    else
    {
        return Max(Tree_Depth(Tree_Node->left) ,
         Tree_Depth(Tree_Node->right)) + 1;
    }
}
bool is_leaf(Node *Tree_Node)
{
    return ((Tree_Node->right == nullptr) && (Tree_Node->left == nullptr));
}
int Leafs_number(Node *Tree_Node)
{
    if (is_leaf(Tree_Node))
    {
        return 1 ;
    }
    else
    {
        return Leafs_number(Tree_Node->right) + Leafs_number(Tree_Node->left);
    }
}
void prefix(Node *Tree_Node)
{
    if (Tree_Node != nullptr)
    {
        cout << Tree_Node->data << " ";
        prefix(Tree_Node->left);
        prefix(Tree_Node->right);
    }
}
void infix(Node *Tree_Node)
{
    if (Tree_Node != nullptr)
    {
        infix(Tree_Node->left);
        cout << Tree_Node->data << " ";
        infix(Tree_Node->right);
    }
}
void postfix(Node *Tree_Node)
{
    if (Tree_Node != nullptr)
    {
        postfix(Tree_Node->left);
        postfix(Tree_Node->right);
        cout << Tree_Node->data << " ";
    }
}
void choices(Node *&Tree_node)
{
    int choice;
    cout << "---------------- Binary Tree Operations Menu ----------------\n";
    cout << "| 1. Initialize Tree (useless)                               |\n";
    cout << "| 2. Build Tree (constructs a tree from an array)            |\n";
    cout << "| 3. Calculate Tree Size                                     |\n";
    cout << "| 4. Calculate Tree Height                                   |\n";
    cout << "| 5. Count the Leaves of the Tree                            |\n";
    cout << "| 6. Display Tree Contents Recursively                       |\n";
    cout << "|    - In Infix Order                                        |\n";
    cout << "|    - In Prefix Order                                       |\n";
    cout << "|    - In Postfix Order                                      |\n";
    cout << "| 7. Exit Program                                            |\n";
    cout << "--------------------------------------------------------------\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1: {
        cout << "Enter the data for the root : ";
        char c;
        cin >> c;
        Tree_node  = initialize_tree(c);
        choices(Tree_node);
        break;
    }
    case 2: {
        clear(Tree_node);
        cout << "Enter the SIZE of the table : ";
        cin >> SIZE ;
        char *Tab = new char[SIZE+1];
        for (int i = 0; i < SIZE; i++)
        {
            cout << "Enter the data for element Number " << i+1 <<" : ";
            cin >> Tab[i];
        }
        Tab[SIZE] = '\0';
       
        Tree_node = construction(Tab,0);
        choices(Tree_node);
        break;
    }
    case 3: {
        cout<< endl <<"The size of the tree is : " << Tree_size(Tree_node) <<endl;
        choices(Tree_node);
        break;
    }
    case 4: {
        cout<< endl <<"The depth of the tree is : " << Tree_Depth(Tree_node) <<endl;
        choices(Tree_node);        
        break;
    }
    case 5: {
        cout<< endl <<"The number of the leafs is : " << Leafs_number(Tree_node) <<endl;
        choices(Tree_node);        
        break;
    }
    case 6: {
        cout <<endl << "--------------- The Tree ---------------" <<endl <<endl;
        cout << "Prefix presentation : "<<endl;
        prefix(Tree_node);
        cout << endl;
        cout << "Infix presentation : "<<endl;
        infix(Tree_node);
        cout << endl;
        cout << "Postfix presentation : "<<endl;
        postfix(Tree_node);
        cout << endl;
        choices(Tree_node); 
        break;
    }
    case 7: {
        
        break;
    }
    default: {
        cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
        choices(Tree_node); 
        break;
    }
    }   


}
int main()
{
    Node *Root = nullptr;
    choices(Root);
    system("pause");
    
}