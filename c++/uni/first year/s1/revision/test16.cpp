#include <iostream>
using namespace std;

int main() {
    int i, j, oddelements , evensum = 0;
    int MAT[4][8] = {
        {0, 5, 2, 4, 1, 6, 3, 7},
        {8, 9, 10, 11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20, 21, 22, 23},
        {24, 25, 26, 27, 28, 29, 30, 31}
    }; 

    for (i = 0; i < 8; i++) {
        oddelements = 0 ;
        for (j = 0; j < 4; j++) {
            if (MAT[j][i] % 2 == 1) {
                oddelements ++;
                

            }
            
        }
        cout << "number of odd elements for the column number "<<i+1<<" is : " << oddelements << endl<<endl;
    }

    for (i = 0; i < 4; i++) {
        evensum = 0 ;
        for (j = 0; j < 8; j++) {
            if (MAT[i][j] % 2 == 0) {
                evensum += MAT[i][j];
                
            }
            
        }
        cout << "Even Sum for the row number "<<i+1<<" is : " << evensum << endl << endl;
    }


    return 0;
}
