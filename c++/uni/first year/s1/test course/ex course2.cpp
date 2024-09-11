#include <iostream>

using namespace std;
int main(){
    int day , month , year;
    cout<<" enter the day and the month and the year of the date you want to enter :"<<endl;
    cin>>day>>month>>year;
    if (year <= 2023)
    {
        if ((month>=1) && ( month<=12))
        {
            if ((month == 1) or (month == 3) or (month == 5) or (month == 7) or (month == 8) or (month == 10) or (month == 12))
            {if ((day>=1) && (day<=31))
            {
                cout<<"this is a valid date "<<endl;
            }else cout<<"this is an unvalid date "<<endl;
            
                
            }
            else if ((month == 4) or (month == 6) or (month == 9) or (month == 11))
            { if ((day>=1) && (day<=30))
            {
                cout<<"this is a valid date "<<endl;
            }else cout<<"this is an unvalid date "<<endl;
            
                
            }else if ((month == 2)) 
            {
                if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) // leap year
                {
                    if ((day>=1) && (day<=29) )
                    {
                        cout<<"this is a valid date "<<endl;
                    }
                    else cout<<"this is an unvalid date "<<endl;
                    
                } else {
                    if ((day>=1) && (day<=28) )
                    {
                        cout<<"this is a valid date "<<endl;
                    }else cout<<"this is an unvalid date "<<endl;
                    
                }
                
            }
            
            
            
        }
        

    }
    
    
    
    system ("pause");
    return 0;

}