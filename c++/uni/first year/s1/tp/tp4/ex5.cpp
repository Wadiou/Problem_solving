#include <iostream>
#include <string>
using namespace std;
int main() {
    int num ;
    string str ;
    cout <<" enter the lines you want to see for this triangle such that a triangle with 4 lines looks like this "<<endl;
    cout<<"*"<<endl;
    cout<<"**"<<endl;
    cout<<"***"<<endl;
    cout<<"****"<<endl;
    cin >> num;
    str = "";
    for (int i = 1; i <= num; i++)
    {
        str += "*" ;
        cout << str <<endl ;
    }
    
    return 0;
}
