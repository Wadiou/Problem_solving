#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x1 ,x2 ,y1 , y2;
    
    cout<<" give me the coordinate of the two points as (x1,y1) then (x2,y2) "<<endl;
    cin>>x1>>y1>>x2>>y2;

    double Distance = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    cout<<"the Distance between the two points you've just entered is : "<<Distance<<endl;

    system("pause");
    return 0;
}
