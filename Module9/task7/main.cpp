#include <iostream>

using namespace std;

int getNum()
{
    int num,
        isCorrectNum = false;

    while (!isCorrectNum) {
        cout << "Введите число\n";
        cin >> num;

        if(num > 46) {
            cout << "Введенное число слишком большое. Попробуйте еще раз\n";
            continue;
        }

        isCorrectNum = true;
    }

    return num;
}

int main() {
    int num = getNum();
    int cnt = 0,
        fibonacciNum = 0,
        firstNum = 0,
        secondNum = 1;

    while(cnt < num) {
        if (cnt == 1) {
            cnt++;
            continue;
        }

        fibonacciNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = fibonacciNum;
        cnt++;
    }

    cout << fibonacciNum;
}

