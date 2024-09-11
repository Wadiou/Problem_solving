#include <iostream>
using namespace std;
int main() {
    double price ;
    int number ;
    
    cout<<"What is the price of your item in DZD? "<<endl;
    cin>>price;
    cout<<"how many you have gotten? "<<endl;
    cin>>number;

    double vat = (price*number)*1.19;
    cout<<" The VAT value is "<<vat<<" DZD"<<endl;

    system("pause");
    return 0;
}
