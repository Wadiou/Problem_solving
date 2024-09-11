#include <iostream>

// Define the maximum size for the stack
const int MAX_SIZE = 100;

struct Node {
    char data;
    Node* next;
};

struct Queue {
    Node* first;
    Node* last;
};

// Function prototypes
void initializeQueue(Queue*& q);
bool isEmpty(Queue* q);
void enqueue(Queue*& q, char data);
char dequeue(Queue*& q);
bool isOperator(char c);
int getPrecedence(char op);

// Implement the infix to postfix conversion function
void infixToPostfix(Queue*& outputQueue, const char* infixExpression) {
    char stack[MAX_SIZE];
    int stackTop = -1;

    for (int i = 0; infixExpression[i] != '\0'; ++i) {
        char current = infixExpression[i];

        // Skip spaces
        if (current == ' ') continue;

        // If the current character is a digit or letter, add it to the output queue.
        if (isalnum(current)) {
            enqueue(outputQueue, current);
        } 
        // If the current character is an '(', push it to the stack.
        else if (current == '(') {
            stack[++stackTop] = current;
        } 
        // If the current character is an ')', pop from the stack until '(' is encountered.
        else if (current == ')') {
            while (stackTop != -1 && stack[stackTop] != '(') {
                enqueue(outputQueue, stack[stackTop--]);
            }
            // Pop the '(' from the stack but do not add it to the output queue.
            if (stackTop != -1) {
                stackTop--; // Discards the '('
            }
        } 
        // If the current character is an operator, push it to the stack after popping
        // all operators with greater or equal precedence.
        else if (isOperator(current)) {
            while (stackTop != -1 && isOperator(stack[stackTop]) &&
                   getPrecedence(stack[stackTop]) >= getPrecedence(current)) {
                enqueue(outputQueue, stack[stackTop--]);
            }
            stack[++stackTop] = current;
        }
    }

    // Pop any remaining operators from the stack to the output queue.
    while (stackTop != -1) {
        enqueue(outputQueue, stack[stackTop--]);
    }
}

// Assume other necessary functions (initializeQueue, isEmpty, enqueue, dequeue, isOperator, getPrecedence) are defined here.

int main() {
    Queue* postfixQueue;
    initializeQueue(postfixQueue);

    // Example infix expression
    const char* infixExpression = "3*((12-3)/3)-1";
    
    infixToPostfix(postfixQueue, infixExpression);

    // Assume function to print the queue is defined here as well.

    return 0;
}
``
