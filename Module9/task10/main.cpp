#include <iostream>

using namespace std;

int main() {
    int maxNum = 64,
        minNum = 0;
    cout << "Загадайте число от 0 до 63\n";
    string answer = "Нет";
    int curStep = maxNum / 2,
        curNum = 0;

    cout << "Отвечайте \"да\" или \"нет\" в зависимотсти от числа.\n";
    cout << "Как только программа отгадает ответьте, к примеру \"трулио\"\n";
    int foundNum = 0;

    while(!foundNum) {
        curNum = (maxNum + minNum) / 2;

        if(curNum == maxNum || curNum == minNum) {
            cout << "Ваше число " << curNum;
            break;
        }

        cout << "Загаданное число больше " << curNum << "\n";
        cin >> answer;

        if(answer == "да") {
            minNum = curNum;
        }
        else if (answer == "нет") {
            maxNum = curNum;
        }
        else {
            foundNum = curNum;
        }
    }
}

