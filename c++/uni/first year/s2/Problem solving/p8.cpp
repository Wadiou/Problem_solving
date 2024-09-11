#include <iostream>
#include <stack>
using namespace std;
bool isnum(char c)
{
    return (c>= '0' && c <= '9');
}
int applyoperation(char c , double a , double b)
{
    switch (c)
    {
    case '*':
    {
        return a * b;
        break;
    }
    case '+':
    {
        return a + b;        
        break;
    }
    case '-':
    {
        return a - b;        
        break;
    }
    case '/':
    {
        return a / b;        
        break;
    }        
    default:
        return 0;
        break;
    }
}
int postfix(string str)
{
    stack<char> val;
    double   v1 , v2 ;
   

    for (int i = 0;str[i]!='\0'; i++)
    {
        if (isnum(str[i]))
        {
            val.push(str[i]);
        }
        else
        {
            v1 = val.top() - '0';
            val.pop();
            v2 = val.top() - '0';
            val.pop();
            if (v1 == 0 && str[i] == '/')
            {
                cout << "Division by zero ";
                return 0;
            }
            val.push((applyoperation(str[i],v2,v1))+'0');
        }
    }
    return val.top() - '0';
}
int main()
{
    string str = "42*63/+85-*";
    cout<< postfix(str);
}