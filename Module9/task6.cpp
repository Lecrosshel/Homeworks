#include <iostream>

using namespace std;

int main() {
    float num;
    std::cout << "Введите число\n";
    cin >> num;
    float finalNum = num;
    bool notDetected = true;

    while (finalNum > 1) {
        finalNum /= 2.0;
    }

    if (finalNum != 1) {
        cout << "Число не является степенью двойки";
    }
    else {
        cout << "Число является степенью двойки";
    }
}

