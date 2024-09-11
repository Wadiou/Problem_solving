#include <iostream>
using namespace std;

int main() {
    
    const char* filePath = "C:\\Users\\Dell Inspiron 15\\Desktop\\work\\c++\\uni\\first year\\s2\\Course_test\\files\\test1.txt";

    FILE *f = fopen(filePath, "w");
    if (f == nullptr) {
        cout << "Failed to open file for writing." << endl;
        return 1;
    }

    double A = 10.5;
    fprintf(f, "%lf", A);
    fclose(f);

    f = fopen(filePath, "r");
    if (f == nullptr) {
        cout << "Failed to open file for reading." << endl;
        return 1;
    }

    if (fscanf(f, "%lf", &A) == 1) {
        cout << "Read value: " << A << endl;
    } else {
        cout << "Failed to read value from file." << endl;
    }
    fclose(f);

    return 0;
}
