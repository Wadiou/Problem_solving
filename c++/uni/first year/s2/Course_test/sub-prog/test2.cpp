#include <iostream>
using namespace std;
int random(int &a , int b){
    int c = a/b ;
    a = a % b ;
    return c ;

    

    
}
int main (){
     int X , Y ;
    cin >> X >> Y ;
    cout<<"the quotient is " << random(X , Y) << " and the reminder is " << X;


    
}