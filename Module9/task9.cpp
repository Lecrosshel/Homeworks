#include <iostream>

using namespace std;

int main() {
    float beginDepValue, desiredDepValue, growPercent;
    cout << "Введите первоначальный размер вклада\n";
    cin >> beginDepValue;

    if (beginDepValue < 1) {
        cout << "некорректная сумма вклада\n";
        return 1;
    }

    cout << "Введите желаему сумму, для накопления\n";
    cin >> desiredDepValue;

    if (desiredDepValue < beginDepValue) {
        cout << "Желаемая сумма не может быть меньше суммы вклада\n";
        return 1;
    }

    cout << "Введите годовой процент\n";
    cin >> growPercent;

    if (growPercent < 1) {
        cout << "Введен некорректный процент по вкладу\n";
        return 1;
    }

    int yearCnt = 0,
            currentDepValue = beginDepValue;

    while (currentDepValue < desiredDepValue) {
        currentDepValue += (beginDepValue / 100) * growPercent;
        yearCnt++;
    }

    cout << "Понадобилось " << yearCnt << " года чтобы накопить необходимую сумму";
}

