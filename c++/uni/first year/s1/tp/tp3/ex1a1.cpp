#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, e;
        
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "Enter the fourth number: ";
    cin >> d;
    cout << "Enter the fifth number: ";
    cin >> e;


    if (a >= b) {
        if (a >= c) {
            if (a >= d) {
                if (a >= e) {
                    cout << a << " is the greatest" << endl;
                } else {
                    cout << e << " is the greatest" << endl;
                }
            } else {
                if (d >= e) {
                    cout << d << " is the greatest" << endl;
                } else {
                    cout << e << " is the greatest" << endl;
                }
            }
        } else {
            if (c >= d) {
                if (c >= e) {
                    cout << c << " is the greatest" << endl;
                } else {
                    cout << e << " is the greatest" << endl;
                }
            } else {
                if (d >= e) {
                    cout << d << " is the greatest" << endl;
                } else {
                    cout << e << " is the greatest" << endl;
                }
            }
        }
    } else {
        if (b >= c) {
            if (b >= d) {
                if (b >= e) {
                    cout << b << " is the greatest" << endl;
                } else cout << e << " is the greatest" << endl;
            } else {
                if (d >= e) {
                    cout << d << " is the greatest" << endl;
                } else {
                    cout << e << " is the greatest" << endl;
                }
            }
        } else {
            if (c >= d) {
                if (c >= e) {
                    cout << c << " is the greatest" << endl;
                } else {
                    cout << e << " is the greatest" << endl;
                }
            } else {
                if (d >= e) {
                    cout << d << " is the greatest" << endl;
                } else {
                    cout << e << " is the greatest" << endl;
                }
            }
        }
    }

    if (a <= b) {
        if (a <= c) {
            if (a <= d) {
                if (a <= e) {
                    cout << a << " is the least" << endl;
                } else {
                    cout << e << " is the least" << endl;
                }
            } else {
                if (d <= e) {
                    cout << d << " is the least" << endl;
                } else {
                    cout << e << " is the least" << endl;
                }
            }
        } else {
            if (c <= d) {
                if (c <= e) {
                    cout << c << " is the least" << endl;
                } else {
                    cout << e << " is the least" << endl;
                }
            } else {
                if (d <= e) {
                    cout << d << " is the least" << endl;
                } else {
                    cout << e << " is the least" << endl;
                }
            }
        }
    } else {
        if (b <= c) {
            if (b <= d) {
                if (b <= e) {
                    cout << b << " is the least" << endl;
                } else cout << e << " is the least" << endl;
            } else {
                if (d <= e) {
                    cout << d << " is the least" << endl;
                } else {
                    cout << e << " is the least" << endl;
                }
            }
        } else {
            if (c <= d) {
                if (c <= e) {
                    cout << c << " is the least" << endl;
                } else {
                    cout << e << " is the least" << endl;
                }
            } else {
                if (d <= e) {
                    cout << d << " is the least" << endl;
                } else {
                    cout << e << " is the least" << endl;
                }
            }
        }
    }

    system("pause");
    return 0;
}
