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

    while(!currentlyPaid >= credit) {
        cout << name << ", ваша задолженность составляет " << credit << " рублей.\n";
        cout << "Сколько рублей вы внесете прямо сейчас, чтобы ее погасить?\n";
        cin >> currentlyPaid;
    }

    cout << "Кредит успешно погашен.";
}

