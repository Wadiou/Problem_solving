#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    // Class attributes with default values
    string brand = "Unknown";
    string model = "Unknown";
    int year = 0;

    // Default constructor
    Car() {
        cout << "Default constructor called!" << endl;
    }

    // Constructor with one parameter (brand)
    Car(string b) {
        brand = b;
        cout << "Constructor with brand called!" << endl;
    }

    // Constructor with two parameters (brand and model)
    Car(string b, string m) {
        brand = b;
        model = m;
        cout << "Constructor with brand and model called!" << endl;
    }

    // Constructor with three parameters (brand, model, and year)
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Constructor with brand, model, and year called!" << endl;
    }

    // Method to display car details
    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Using the default constructor
    Car car1;
    car1.display();

    // Using the constructor with one parameter (brand)
    Car car2("Toyota");
    car2.display();

    // Using the constructor with two parameters (brand, model)
    Car car3("Ford", "Mustang");
    car3.display();

    // Using the constructor with three parameters (brand, model, and year)
    Car car4("Tesla", "Model S", 2022);
    car4.display();

    return 0;
}
