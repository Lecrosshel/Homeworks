#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Введите 2 числа, образующих дробь\n";
    cin >> a >> b;

    if (b < a) {
        cout << "Это неправильная дробь\n";
        return 1;
    }

    if (!a || !b) {
        cout << "Числитель и знаменатель не должны быть равны нулю\n";
        return 1;
    }

    int curDivider = 2;
    bool canDivide = false;

    while (!canDivide) {
        curDivider++;
        canDivide = !(a % curDivider) && !(b % curDivider);
    }

    cout << (a / curDivider) << "/" << (b / curDivider);
}
