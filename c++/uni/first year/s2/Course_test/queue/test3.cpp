#include <iostream>
#include <stack>
#include <queue>
struct Node
{
    int data;
    Node *Left,*Right;
};

using namespace std;
int main()
{
    queue<Node*> q;
    stack<int> S;
    for (int i = 0; i < 5; i++)
    {
        S.push(i*i);
    }
    int b = S.top();
    cout << b ;

}