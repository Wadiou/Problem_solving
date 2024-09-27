#include <iostream>
#include <string>
#include <cmath>  
using namespace std;

class rectangle
{
private:
    int width = 0, height = 0;

public:
    rectangle(int width, int height) : width(width), height(height) {}

    
    int area() const;

    int param() const;  

    
    void details() const;
};

int rectangle::area() const{
    return this->height * this->width;
}

int rectangle::param() const{
    return (this->height +this->width)*2;  
}

void rectangle::details() const {
    cout << "The rectangle info:" << endl;
    cout << "Height: " << this->height << " Width: " << this->width << endl;
    cout << "Area: " << area() << endl;  
    cout << "Diagonal: " << param() << endl;  
}

int main() {
    rectangle rect(4, 3);

    rect.details();

    return 0;
}
