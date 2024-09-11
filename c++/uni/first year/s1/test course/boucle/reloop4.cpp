#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int curtime, stoptime, dif, h, m, s;
    string start, end;

    cout << "Type 'start' to begin the chronometer." << endl;
    cin >> start;
    curtime = time(0);

    if (start == "start") {
        do {
            cout << "Type 'end' to stop the chronometer, otherwise it will continue." << endl;
            cin >> end;
            stoptime = time(0) ;  
            dif = abs((curtime - stoptime));

            if (dif <= 59) {
                cout << "The elapsed time is: " << dif << " seconds!" << endl;
            } else if (dif <= 3599 && dif >= 60) {
                m = dif / 60;
                s = dif % 60;
                cout << "The elapsed time is: " << m << " minutes and " << s << " seconds!" << endl;
            } else if (dif >= 3600) {
                h = dif / 3600;
                dif = dif % 3600;
                m = dif / 60;
                s = dif % 60;
                cout << "The elapsed time is: " << h << " hours, " << m << " minutes, and " << s << " seconds!" << endl;
            }
        } while (end != "end");
    }

    system("pause");
    return 0;
}

