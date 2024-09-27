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
    
    Car* myCar= new Car("Toyota", "Corolla", 2020); 
    myCar->printDetails();
    delete myCar;

    cout << "This is after the object is destroyed." << endl;

    return 0;
}
