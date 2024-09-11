#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2, h, m, s, seconds1, seconds2, seconds;

    cout << "Enter the hours of the first time: ";
    cin >> h1;

    cout << "Enter the minutes of the first time: ";
    cin >> m1;

    cout << "Enter the seconds of the first time: ";
    cin >> s1;

    cout << "Enter the hours of the second time: ";
    cin >> h2;

    cout << "Enter the minutes of the second time: ";
    cin >> m2;

    cout << "Enter the seconds of the second time: ";
    cin >> s2;

    seconds1 = 3600 * h1 + 60 * m1 + s1;
    seconds2 = 3600 * h2 + 60 * m2 + s2;
    seconds = abs(seconds1 - seconds2);

    h = seconds / 3600;
    seconds = seconds % 3600;
    m = seconds / 60;
    s = seconds % 60;

    cout << "The duration between the two times is: " << h << " Hours, " << m << " Minutes, and " << s <<" Seconds !"<< endl;

    system("pause");
    return 0;
}

