#include <iostream>

using namespace std;

int main() {
    int number;
    bool isCalculated = false;
    cout << "Введите число\n";
    cin >> number;
    int curDigitsNum = 0,
        curRemains = number,
        cnt = 0;

    while(!isCalculated) {
        isCalculated = curRemains < 10;
        curRemains /= 10;
        cnt++;
    }

    cout << "В числе " << cnt << " цифр";
}

