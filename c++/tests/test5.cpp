#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    // Default constructor
    Car() : brand("Unknown"), model("Unknown"), year(0) {
        cout << "Default constructor called!" << endl;
    }

    // Parameterized constructor
    Car(string b, string m, int y) : brand(b), model(m), year(y) {
        cout << "Parameterized constructor called!" << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called for car: " << brand << " " << model << endl;
    }

    // Method to display car details
    void printDetails() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Outer scope
    
        Car myCar("Toyota", "Corolla", 2020); // Constructor is called
        myCar.printDetails();
        // Object goes out of scope at the end of this block
    // Destructor will be called here when the block ends

    cout << "Car object has gone out of scope." << endl;

    // Some other code after the block
    cout << "This is after the object is destroyed." << endl;

    return 0;
}
