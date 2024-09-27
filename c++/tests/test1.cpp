#include <iostream>
#include <string>
using namespace std;

// Student class definition
class Student {
private:
    int age;
    string firstName;
    string lastName;

public:
    // Constructor declaration
    Student(string firstName, string lastName, int age);

    // Accessor method declaration
    int get_age() ;
    string get_first_name() const;
    string get_last_name() const;
    void set_age(int age);
};

// CS_Student class definition, inheriting from Student
class CS_Student : public Student {
private:
    int average;

public:
    // Constructor declaration
    CS_Student(string firstName, string lastName, int age, int average);

    // Accessor method declaration
    int get_average() const;
};

// Implementations of Student class methods
Student::Student(string firstName, string lastName, int age)
    : age(age), firstName(firstName), lastName(lastName) {
        cout << "Welcome";
    }

int Student::get_age()  {
    return age;
}
void Student::set_age(int age) {
    this->age = age;
}


string Student::get_first_name() const {
    return firstName;
}

string Student::get_last_name() const {
    return lastName;
}

// Implementations of CS_Student class methods
CS_Student::CS_Student(string firstName, string lastName, int age, int average)
    : Student(firstName, lastName, age), average(average) {}

int CS_Student::get_average() const {
    return average;
}

// Main function
int main() {
    // Create an instance of CS_Student
     CS_Student cs_student("John", "Doe", 20, 85);

    // Output information
    cout << "Name: " << cs_student.get_first_name() << " " << cs_student.get_last_name() << endl;
    cout << "Age: " << cs_student.get_age() << endl;
    
     

    return 0;
}
