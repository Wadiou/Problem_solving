#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A , B , C ,delta;

    cout<<"enter the value of A :"<<endl;
    cin>>A;

    cout<<"enter the value of B :"<<endl;
    cin>>B;

    cout<<"enter the value of C :"<<endl;
    cin>>C;

    if (A==0)
    {
        if (B==0)
        {
            if (C==0)
            {
                cout<<" there an infinity of solutions "<<endl;
            }
            else cout<<" there is no solution "<<endl;

        }else cout<<" there is only one solution : "<<(-C/B)<<endl;
        
    }else{
        delta = B*B -4*A*C ;
        if (delta>=0)
        {
            if (delta == 0)
            {
                cout<<" there is a double root : "<<(-B/(2*A))<<endl;
            }else cout<<" there is two solutions x1 : "<<((-B+sqrt(delta))/(2*A))<<" and x2 : "<<((-B-sqrt(delta))/(2*A))<<endl;
            
        }else cout<<"there is no real solutions"<<endl;
        

    }
    

    

    
    
  
    system("pause");
    return 0;
}
