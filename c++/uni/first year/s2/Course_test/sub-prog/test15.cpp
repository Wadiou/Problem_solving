#include <iostream>
using namespace std;
int* createArray(int size) {
    int* array = new int[size]; // array >> Stack "pile" , data >> heap
    return array; // no delete
}
    int* myArray = createArray(10); // myArray >>  

int main() {
    for (int i = 0; i < 10; ++i) {
        myArray[i] = i;
        cout << myArray[i] << " ";
    }
    cout << endl;
    delete myArray; 

    return 0;
}
