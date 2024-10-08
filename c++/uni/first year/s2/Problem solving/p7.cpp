#include <iostream>
#include <stack>
#include <vector>


bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int applyOp(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b ;
    }
    return 0;
}

int evaluate(char* tokens) {
    std::stack<int> values; 
    std::stack<char> ops; 

    for (int i = 0; tokens[i] != '\0'; i++) {
        if (tokens[i] == ' ') continue;

        else if (isDigit(tokens[i])) {
            int val = 0;
            while (tokens[i] != '\0' && isDigit(tokens[i])) {
                val = (val * 10) + (tokens[i] - '0');
                i++;
            }
            values.push(val);
            i--;
        }

        else {
            
            while (!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])) {
                int val2 = values.top();
                values.pop();
                
                int val1 = values.top();
                values.pop();
                
                char op = ops.top();
                ops.pop();
                
                values.push(applyOp(val1, val2, op));
            }

            ops.push(tokens[i]);
        }
    }

    while (!ops.empty()) {
        int val2 = values.top();
        values.pop();
        
        int val1 = values.top();
        values.pop();
        
        char op = ops.top();
        ops.pop();
        
        values.push(applyOp(val1, val2, op));
    }

    return values.top();
}

int main() {
    char expression[256];
    std::cout << "3*5+7-1*8/9-1";
    std::cin.getline(expression, 256);
    return 0;
}
