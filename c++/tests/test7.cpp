#include <iostream>
#include <string>
using namespace std;

// Base class
class Car {
public:
    string brand;
    string model;
    int year;

    // Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Car constructor called!" << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car destructor called!" << endl;
    }

    // Method to display details
    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

// Derived class inheriting from Car using Public Inheritance
class ElectricCar : public Car {
public:
    int batteryCapacity;

    // Constructor
    ElectricCar(string b, string m, int y, int battery) : Car(b, m, y) { 
        batteryCapacity = battery;
        cout << "ElectricCar constructor called!" << endl;
    }

    // Destructor
    ~ElectricCar() {
        cout << "ElectricCar destructor called!" << endl;
    }

    // Overriding display method
    void display() {
        Car::display(); // Call base class method
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

// Base class for demonstrating different inheritance types
class Base {
public:
    int a = 10;  // Public member
protected:
    int b = 20;  // Protected member
private:
    int c = 30;  // Private member
};

// Public Inheritance
class DerivedPublic : public Base {
    // a is public in DerivedPublic
    // b is protected in DerivedPublic
    // c is not accessible (private)
public:
    void display() {
        cout << "Public Inheritance: a = " << a << ", b = " << b << endl;
    }
};

// Protected Inheritance
class DerivedProtected : protected Base {
    // a is protected in DerivedProtected
    // b is protected in DerivedProtected
    // c is not accessible (private)
public:
    void display() {
        cout << "Protected Inheritance: a = " << a << ", b = " << b << endl;
    }
};

// Private Inheritance
class DerivedPrivate : private Base {
    // a is private in DerivedPrivate
    // b is private in DerivedPrivate
    // c is not accessible (private)
public:
    void display() {
        cout << "Private Inheritance: a = " << a << ", b = " << b << endl;
    }
};

// Constructor and Destructor Example
class BaseClass {
public:
    BaseClass() {
        cout << "BaseClass constructor called!" << endl;
    }
    ~BaseClass() {
        cout << "BaseClass destructor called!" << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    DerivedClass() {
        cout << "DerivedClass constructor called!" << endl;
    }
    ~DerivedClass() {
        cout << "DerivedClass destructor called!" << endl;
    }
};

int main() {
    // Part 1: Demonstrating simple inheritance with constructors and destructors
    cout << "\n--- ElectricCar Object Creation ---" << endl;
    ElectricCar myTesla("Tesla", "Model S", 2021, 100);
    myTesla.display();

    // Part 2: Demonstrating public, protected, and private inheritance
    cout << "\n--- Public Inheritance ---" << endl;
    DerivedPublic objPublic;
    objPublic.display();

    cout << "\n--- Protected Inheritance ---" << endl;
    DerivedProtected objProtected;
    objProtected.display();

    cout << "\n--- Private Inheritance ---" << endl;
    DerivedPrivate objPrivate;
    objPrivate.display();

    // Part 3: Demonstrating constructor and destructor behavior
    cout << "\n--- Constructor and Destructor Behavior ---" << endl;
    DerivedClass derivedObj;

    return 0;
}
