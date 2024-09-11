#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double price ,fprice;

    cout<<" give your purchases's price "<<endl;
    cin>>price;

    if (price >= 1000)
    {
        if (price > 3000)
        {
            fprice = price*0.93;
            cout<<" The final price is : "<<fprice<<" Dzd !"<<endl;
            
        }else {
            fprice = price*0.95;
            cout<<" The final price is : "<<fprice<<" Dzd !"<<endl;

            }
        
    }else{
        fprice = price;
        cout<<" The final price is : "<<fprice<<" Dzd !"<<endl;


    }
    

    
    system("pause");
    return 0;
}
