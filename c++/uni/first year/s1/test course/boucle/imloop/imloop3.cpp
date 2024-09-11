#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    const int maxSize = 1000;
    int cubicNumbers[maxSize];
    int count = 0;

    for (int x = 1; x <= 9; x++) {
        for (int y = x; y <= 9; y++) {
            for (int z = y; z <= 9; z++) {
                int num = pow(x, 3) + pow(y, 3) + pow(z, 3);
                if (num >= 100 && num <= 999) {
                    cubicNumbers[count++] = num;
                }
            }
        }
    }

    sort(cubicNumbers, cubicNumbers + count);

    cout << "Cubic numbers in the range 100 to 999 (ordered):" << endl;

    for (int i = 0; i < count; i++) {
        cout << cubicNumbers[i] << " ";
    }

    return 0;
}
