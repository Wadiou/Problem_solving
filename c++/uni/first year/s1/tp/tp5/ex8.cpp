#include <iostream>
using namespace std;
int main() {
    
    struct Point 
    {
        int x, y;
    };
    const int N = 5;
    Point curve[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter the Coordinates of Point number " << i << " (x y): ";
        cin >> curve[i].x >> curve[i].y;
    }

    double dy, dx, slope;

    for (int i = 0; i < N - 1; i++) {
        cout << "\nCoordinates of Point number  " << i << ": (" << curve[i].x << ", " << curve[i].y << ")";
        cout << "\nCoordinates of Point number  " << i+1 << ": (" << curve[i+1].x << ", " << curve[i+1].y << ")";

        dy = curve[i+1].y - curve[i].y;
        dx = curve[i+1].x - curve[i].x;

        cout << "\nThe change in y (dy) between Point number  " << i << " and Point number  " << i+1 << " is: " << dy;
        cout << "\nThe change in x (dx) between Point number  " << i << " and Point number  " << i+1 << " is: " << dx;

        if (dx != 0) {
            slope = dy / dx;
            cout << "\nThe slope between Point number  " << i << " and Point number  " << i+1 << " is: " << slope;
        } else {
            cout << "\nThe slope between Point number  " << i << " and Point number  " << i+1 << " is: Undefined (dx is zero)";
        }
    }

    return 0;
}
