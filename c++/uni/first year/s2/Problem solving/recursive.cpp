#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1 || n == 0)
    {
        return n ;
    }
    else
    {
        return sum(n-1)+n;
    }
    
}
void reverse (string &str , int j , int i)
{
    char c;
    if (j-1 > i)
    {
        c = str[j -1 ];
        str[j -1] = str[i];
        str[i] = c;
        reverse(str , j-1 , i+1);
    }
    
}
void display_reverse ( string str , int i)
{
    if (i != 0)
    {
        cout <<str[i-1];
        display_reverse(str , i-1);
        
    }
    
}
int count (int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return count(n/10) +1;
    }
    
}
int length(string str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        
    }
    return i;
    
}
bool palindrome (string str, int j , int i)
{
    if (j - 1 > i )
    {
        if (str[j - 1] == str [i])
        {
            return palindrome (str ,j-1 , i+1);
        }
        else return false;
    }
    else return true;
    
    
}
int sum_array(int *array , int size)
{
    if (size == 0)
    {
        return 0;
    }
    else 
    {
        return sum_array(array , size -1 ) + array[size - 1];
    }
}

int min_array(int *array , int size , int min)
{
    if (size != 1)
    {
        if (min > array[size - 2])
        {
            min = array[size - 2];
            return min_array ( array , size-1 , min );
        }
        else return min_array ( array , size-1 , min );
        
    } else return min ;
    
}
void permutation(int &a , int &b)
{
    b = b + a;
    a = b - a ;
    b = b - a ;
}
int GCD (int a , int b)
{
    if (b > a)
    {
        permutation(a,b);
    }
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return GCD(b , a % b);
    }
    
}
int power (int number , int power)
{
    int pow = 1;
    for (int i = 0; i < power; i++)
    {
        pow *= number ;
    }
    return pow;
    
}
int binary_to_decimal (int number  , int i)
{
    if (number == 0)
    {
        return 0 ;
    }
    else if (number % 10 == 0)
    {
        return binary_to_decimal(number/10 , i + 1);
    }
    else if (number % 10 == 1)
    {
        return binary_to_decimal(number/10 , i+ 1) + power (2 , i);
    }
    else return 0;
    
    
}
int pow (int n , int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * pow(n,p-1);
    }
}
int RBSA(int *arr, int low, int high, int target) {
    if (low > high) {
        return -1; 
    }
    int mid = (high + low) / 2;
    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] < target) {
        return RBSA(arr, mid + 1, high, target); 
    } else {
        return RBSA(arr, low, mid - 1, target); 
    }
}
void Acending_sort (int *arr , int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp ;
            }
            
        }
        
    }
    
}
int main() {
    int choice;
    do {
        cout << "---------------- Recursive Function Operations Menu ----------------\n";
        cout << "|  1. Sum of first n natural numbers                               |\n";
        cout << "|  2. Reverse a string                                             |\n";
        cout << "|  3. Display string in reverse                                    |\n";
        cout << "|  4. Count digits in a number                                     |\n";
        cout << "|  5. Check if a string is a palindrome                            |\n";
        cout << "|  6. Sum of elements in an array                                  |\n";
        cout << "|  7. Minimum element in an array                                  |\n";
        cout << "|  8. Find the GCD of two numbers                                  |\n";
        cout << "|  9. Compute power of a number                                    |\n";
        cout << "| 10. Convert binary to decimal                                    |\n";
        cout << "| 11. Recursive binary search                                      |\n";
        cout << "|  0. Exit program                                                 |\n";
        cout << "--------------------------------------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter a number: ";
                cin >> n;
                cout << "Sum of first " << n << " natural numbers is: " << sum(n) << endl;
                break;
            }
            case 2: {
                string str;
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str);
                reverse(str, length(str), 0);
                cout << "Reversed string is: " << str << endl;
                break;
            }
            case 3: {
                string str;
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str);
                cout << "String in reverse order: ";
                display_reverse(str, length(str));
                cout << endl;
                break;
            }
            case 4: {
                int n;
                cout << "Enter a number: ";
                cin >> n;
                cout << "Number of digits is: " << count(n) << endl;
                break;
            }
            case 5: {
                string str;
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str);
                if (palindrome(str, length(str), 0)) {
                    cout << str << " is a palindrome!\n";
                } else {
                    cout << str << " isn't a palindrome!\n";
                }
                break;
            }
            case 6: {
                int n;
                cout << "Enter the size of the array: ";
                cin >> n;
                int *arr = new int[n];
                cout << "Enter the elements of the array:\n";
                for (int i = 0; i < n; ++i) {
                    cin >> arr[i];
                }
                cout << "Sum of the array is: " << sum_array(arr, n) << endl;
                delete[] arr;
                break;
            }
            case 7: {
                int n;
                cout << "Enter the size of the array: ";
                cin >> n;
                int *arr = new int[n];
                cout << "Enter the elements of the array:\n";
                for (int i = 0; i < n; ++i) {
                    cin >> arr[i];
                }
                cout << "Minimum of the array is: " << min_array(arr, n, arr[n - 1]) << endl;
                delete[] arr;
                break;
            }
            case 8: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "GCD is: " << GCD(a, b) << endl;
                break;
            }
            case 9: {
                int base, exp;
                cout << "Enter base and exponent: ";
                cin >> base >> exp;
                cout << "Power is: " << pow(base, exp) << endl;
                break;
            }
            case 10: {
                int binary;
                cout << "Enter a binary number: ";
                cin >> binary;
                cout << "Decimal value is: " << binary_to_decimal(binary, 0) << endl;
                break;
            }
            case 11: {
                int n, target;
                cout << "Enter the size of the array: ";
                cin >> n;
                int *arr = new int[n];
                cout << "Enter the elements of the array:\n";
                for (int i = 0; i < n; ++i) {
                    cin >> arr[i];
                }
                Acending_sort(arr,n);
                cout << "Enter the target number: ";
                cin >> target;
                int result = RBSA(arr, 0, n - 1, target);
                if (result != -1) {
                    cout << "Target found at index: " << result << endl;
                } else {
                    cout << "Target not found\n";
                }
                break;
            }
            case 0: {
                cout << "Exiting...\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != 0);
    return 0;
}
