#include <iostream>

using namespace std;

int main() {
    int currentMonth = 1;

    for (int remains = 100; remains > 0; remains -= 4) {
        cout << "После " << currentMonth << " месяца";
        cout << "У вас останется " << remains << "кг. гречки";
        currentMonth++;
    }
}

