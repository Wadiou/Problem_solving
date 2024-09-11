#include <iostream>
using namespace std;
int main(){
    int random , guess , i ,dis;
    cout << "Enter a number in the range of 1 to 100 " << endl ;
    cin >> random ;
    system("cls");
    if ((random >= 1) && (random <= 100))
    {
        cout << "Guess the selected number by the First player " <<endl;
        cin >> guess;
        i = 1;
        while ((random != guess) && (i < 3)) {
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
        cout << "Try again: ";
        cin >> guess;

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

        
    }
    
}