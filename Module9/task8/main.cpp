#include <iostream>

using namespace std;

int getDivider(int a, int b) {
    int curDivider;
    bool canDivide = false;

    for (curDivider = 9; curDivider > 1; curDivider--) {
        canDivide = !(a % curDivider) && !(b % curDivider);

        if (canDivide) {
            break;
        }
    }

    return curDivider;
}

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

    if (a == b) {
        cout << "Дробь образует целое число 1";
        return 1;
    }

    int divider = getDivider(a, b);
    bool canDivide = true;
    cout << divider << "\n";

    while (canDivide) {
        canDivide = (a % divider) || (b % divider);
        a /= divider;
        b /= divider;
    }
    cout << a << "/" << b;
}
