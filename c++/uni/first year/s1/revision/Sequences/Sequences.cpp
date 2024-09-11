#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "This Program calculates the different sequences provided in the picture " << endl ;
    cout << "Enter your choice (1-11): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int i , N;
        double x , term1=1 ,term2 = 1, term3 , sum=1 , factorial = 1 ;
        cout << "Enter the value of N : " ;
        cin >> N ;
        cout << "Enter the value of X : " ;
        cin >> x ;
        for ( i = 1; i <= N; i++)
        {
            term3 = 1 ;
            factorial *= i ; 
            term1 *= x ;
            term2 = term1 / factorial ;
            term3 = term2 * term2 ;
            sum += term3 ;
        }
        cout << "The sum is " << sum ;
            break;
        }
        case 2: {
        int i , N;
        double x , term1=1 ,term2 = 1, term3 , sum=1 , factorial = 1 , sign = 1 ;
        cout << "Enter the value of N : " ;
        cin >> N ;
        cout << "Enter the value of X : " ;
        cin >> x ;
        for ( i = 1; i <= N; i++)
        {
            term3 = 1 ;
            factorial *= i ; 
            term1 *= x ;
            term2 = term1 / factorial ;
            for (int j = 1; j <= i; j++)
            {
                term3 *= term2 ;
            }
            sign = -sign ; 
            term3 *= sign ; 
            sum += term3 ;
        }
        cout << "The sum is " << sum ;
            break;
        }
        case 3: {
        int i , N;
        double x , term1=1 ,term2 = 1, term3 , sum=1 , factorial = 1  ;
        cout << "Enter the value of N : " ;
        cin >> N ;
        cout << "Enter the value of X : " ;
        cin >> x ;
        for ( i = 1; i <= N; i++)
        {
            term3 = 1 ;
            factorial *= i ; 
            term1 *= x ;
            term2 = term1 / factorial ;
            for (int j = 1; j <= factorial; j++)
            {
                term3 *= term2 ;
            }
            sum += term3 ;
        }
        cout << "The sum is " << sum ;
            break;
        }
        case 4: {
        int i , N;
        double x , term1=1 ,term2 = 1, term3 , sum=1 , factorial1 = 1  , factorial2 = 1;
        cout << "Enter the value of N : " ;
        cin >> N ;
        cout << "Enter the value of X : " ;
        cin >> x ;
        for ( i = 1; i <= N; i++)
        {
            term3 = 1 ;
            factorial1 *= i ; 
            term1 *= x*x ;
            factorial2 *= factorial1 ;
            term2 = term1 / factorial2 ;
            for (int j = 1; j <= factorial1; j++)
            {
                term3 *= term2 ;
            }
            sum += term3 ;
        }
        cout << "The sum is " << sum ;
            break;
        }
        case 5: {
        int i , N;
        double x , term1=1 ,term2  , sum=1 , Power = 1 ;
        cout << "Enter the value of N : " ;
        cin >> N ;
        cout << "Enter the value of X : " ;
        cin >> x ;
        for ( i = 1; i <= N; i++)
        {
            term2 = 1 ;
            Power = i*i ; 
            term1 = 1/x ;
            for (int j = 1; j <= Power; j++)
            {
                term2 *= term1 ; 
            }

            sum += term2 ;
        }
        cout << "The sum is " << sum ;
            break;
        }
        case 6: {
        int i , k , N;
        double x , term1=1 ,term2  , sum=1 , Power = 1 , sign = 1;
        cout << "Enter the value of N : " ;
        cin >> N ;
        cout << "Enter the value of X : " ;
        cin >> x ;
        for ( i = 1; i <= N; i++)
        {
            term2 = 1 ;
            for ( k = 1; k <= i ; k++)        
            {
                Power *= i ;
            }
         
            term1 = 1/x ;
            for (int j = 1; j <= Power; j++)
            {
                term2 *= term1 ; 
            }
            sign = -sign ;
            sum += (sign*term2) ;
        }
        cout << "The sum is " << sum ;
            break;
        }
        case 7: {
        int i , k , N;
        double x , term1=1 ,term2  , sum=1 , Power = 1  , factorial = 1;
        cout << "Enter the value of N : " ;
        cin >> N ;
        cout << "Enter the value of X : " ;
        cin >> x ;
        for ( i = 1; i <= N; i++)
        {
            term2 = 1 ;
            factorial *= i ; 
            for ( k = 1; k <= factorial ; k++)        
            {
                Power *= i ;
            }
         
            term1 = 1/x ;
            for (int j = 1; j <= Power; j++)
            {
                term2 *= term1 ; 
            }
            sum += term2 ;
        }
        cout << "The sum is " << sum ; 
            break;
        }
        case 8: {
        int i , j , N;
        double x , term1  , sum=1 , Power = 0 ,limit ;
        cout << "Enter the value of N : " ;
        cin >> N ;
        cout << "Enter the value of X : " ;
        cin >> x ;
        for ( i = 1; i <= N; i++)
        {
            term1 = 1 ;
            limit = Power ;
            Power = 2 ;
            if (i >= 2)
            {
                for ( j = 1; j < limit; j++)
                {
                    Power *= 2 ; 
                }
            }
            for ( j = 1; j <= Power; j++)
            {
                term1 *= x ; 
            }
        
            sum += term1 ;
        }
        cout << "The sum is " << sum ; 
            break;
        }
        case 9: {
        int i , j , k , N;
        long double sum=2 , Power = 0 ,limit ;
        cout << "Enter the value of N : " ;
        cin >> N ;
        for ( i = 3; i <= N; i++)
        {
        
        /*Power = pow((i-1),(i)) ;*/
            Power = 1 ;
            for (int  j = 1; j <= i; j++)
            {
                Power *= (i-1) ;                
                cout << "The power is : "<< Power <<" For , i = "<< i << " , j = " <<j <<endl <<endl;
            }
                    
            for ( j = i-2; j >= 2; j -= 1)
            {

            /*Power = pow(j , Power)*/
                limit = Power ;
                Power = j ;
                for ( k = 1; k < limit; k++)
                {
                    Power *= j ;
                    cout << "The power is : "<< Power <<" For , i = "<< i << " , j = " <<j << ", k = "<< k <<endl <<endl;
                }
                
            }
        
            sum += Power ;
        }
        cout << "The sum is " << sum ; 
            break;
        }
        case 10: {
        int i, j, k, N;
        long double sum = 0.5, Power, limit, term;

        cout << "Enter the value of N 'Highest exponent in the tower': ";
        cin >> N;

        for (i = 2; i <= N; i += 2) {
            Power = 1;

            if (i >= 4) {
                for (j = 1; j <= i; j++) {
                    Power *= (i - 2);
                }
            } else {
                Power = 2; 
            }

            for (j = i - 4; j >= 2; j -= 2) {
                limit = Power;
                Power = 1;
                for (k = 1; k <= limit; k++) {
                    Power *= j;
                }
            }

            term = 1;
            for (j = 1; j <= Power; j++) {
                term *= 0.5;
            }

            sum += term;
        }

        cout << "The sum is " << sum << endl;
            break;
        }
        case 11: cout << "Not yet ! " << endl ; 
            break;
        default: {
            cout << "Invalid choice" << endl;
            break;
        }
    }
    system ("pause");
    return 0;
}
