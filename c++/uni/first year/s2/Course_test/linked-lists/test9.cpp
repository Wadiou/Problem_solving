#include <iostream>
using namespace std;
// Function to perform bubble sort on the array
void bubbleSort(int arr[], int n) {
    // Flag to detect any swap in the inner loop
    bool swapped;
    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in wrong order
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (!swapped)
            break;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function to run the bubble sort algorithm
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: \n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);
    
    return 0;
}
