#include <iostream>

using namespace std;

int main() {
    string name;
    int credit, currentlyPaid;
    bool isRepaid = false;
    cout << "Введите имя должника\n";
    cin >> name;
    cout << "Введите сумму долга\n";
    cin >> credit;

    while(!isRepaid) {
        cout << name << ", ваша задолженность составляет " << credit << " рублей.\n";
        cout << "Сколько рублей вы внесете прямо сейчас, чтобы ее погасить?\n";
        cin >> currentlyPaid;
        isRepaid = currentlyPaid >= credit;
    }

    cout << "Кредит успешно погашен.";
}

