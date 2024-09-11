#include <iostream>
using namespace std;
const int MAX= 100;

int RBSA(int arr[MAX], int low, int high, int target) {
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
int RBSD(int arr[MAX], int low, int high, int target) {
    if (low > high) {
        return -1; 
    }
    int mid = (high + low) / 2;
    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] > target) {
        return RBSD(arr, mid + 1, high, target); 
    } else {
        return RBSD(arr, low, mid - 1, target); 
    }
}
void Acending_sort (int arr[MAX] , int size)
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
void Decending_sort (int arr[MAX] , int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp ;
            }
            
        }
        
    }
    
}
void fill_array (int *p , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value for element number " << i +1 << " : ";
        cin >> p[i];
    }
    
}
void display_array (int *p ,int size)
{
    cout << endl << "Array : " <<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The value of element number " << i +1 << " : ";
        cout << p[i]<<endl;
    }
}

int main() {
    int arr[MAX],target ,*p = &arr[0]; 
    
    int size  ;
    cout << "Enter the size of the array : ";
    cin >> size;

    fill_array(p,size);
    //Acending_sort(p,size);
    Decending_sort(p ,size);
    display_array(p,size);
    cout << "Enter the desired target : ";
    cin >> target;
    
    int result = RBSD(arr, 0, size - 1, target);
    
    if (result != -1) {
        cout << "Element found at index " << result + 1 << endl; 
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
