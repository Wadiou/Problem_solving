#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {

    int random, guess, dis, i = 1;

    srand(time(0));
    random = rand() % 100 + 1;



    cout << "Guess a number between 1 to 100" << endl;
    cin >> guess;

    while ((random != guess) && (i <= 3)) {
        dis = abs((random - guess));

        if (dis <= 5) {
            cout << "You're very close to the answer!" << endl;
        }
        else if ((dis <= 10) && (dis > 5)) {
            cout << "You're close to the answer!" << endl;
        }
        else if ((dis <= 20) && (dis > 10)) {
            cout << "You're somewhat far from the answer!" << endl;
        }
        else {
            cout << "You're quite far from the answer!" << endl;
        }

        if (i < 3) {
            cout << "Try again: ";
            cin >> guess;
        }

        i++;
    }

    if (random == guess) {
        switch (i) {
            case 1: cout << "Congratulations! You won on the first try!" << endl;
                    break;
            case 2: cout << "Congratulations! You won on the second try!" << endl;
                    break;
            case 3: cout << "Congratulations! You won on the third try!" << endl;
                    break;
        }
    }
    else {
        cout << "Sorry, you didn't guess the number. Better luck next time!" << endl;
    }

    return 0;
}
