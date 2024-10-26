#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Coordinates {
    double x, y;
};

class Circle {
private:
    Coordinates center;
    double Radius;

public:
    Circle(Coordinates center, double Radius) {
        this->center = center;
        this->Radius = Radius;
    }
    bool Contains(Coordinates point) {
        return this->Radius >= sqrt(pow((this->center.x - point.x), 2) + pow((this->center.y - point.y), 2));
    }
};

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    Circle** circles = new Circle*[size];

    for (int i = 0; i < size; i++) {
        double x, y, radius;
        printf("Enter the coordinates of the center (x y) and radius for circle %d: ", i + 1);
        scanf("%lf %lf %lf", &x, &y, &radius);
        Coordinates center = {x, y};
        circles[i] = new Circle(center, radius);
    }

    double pointX, pointY;
    printf("Enter the coordinates of the point (x y): ");
    scanf("%lf %lf", &pointX, &pointY);
    Coordinates point = {pointX, pointY};

    printf("Circles that contain the point:\n");
    for (int i = 0; i < size; i++) {
        if (circles[i]->Contains(point)) {
            printf("Circle %d contains the point.\n", i + 1);
        }
    }

    for (int i = 0; i < size; i++) {
        delete circles[i];
    }
    delete[] circles;

    return 0;
}
