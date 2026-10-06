/*********************************************
* Автор: Горбунова Анастасия
* Задание: Циклы с предусловием и постусловием
* Вариант: 3
* *******************************************/

#include <iostream>

using namespace std;

int main() {
    double EDS = 115.0;
    double innerR = 29.7;
    double step1 = 10.0;
    double step2 = 50.0;
    double start1 = 10.0;
    double border = 50.0;
    double start2 = 100.0;
    double finish = 300.0;

    int index = 0;
    double resistance;
    double power;

    // heading formatting
    cout << "R, Om\t\tP, W" << endl;

    // the first section - do - while
    resistance = start1;
    do {
        power = resistance * (EDS / (resistance + innerR)) * (EDS / (resistance + innerR));
        cout << resistance << "\t\t" << power << endl;
        ++index;
        resistance = start1 + index * step1;
    } while (resistance <= border);

    // the second section- while
    index = 0;
    resistance = start2;
    while (resistance <= finish) {
        power = resistance * (EDS / (resistance + innerR)) * (EDS / (resistance + innerR));
        cout << resistance << "\t\t" << power << endl;
        ++index;
        resistance = start2 + index * step2;
    }

    return 0;
}