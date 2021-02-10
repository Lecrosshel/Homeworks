#include <iostream>

using namespace std;

int main() {
    int hour,
            cnt = 0;
    std::cout << "Который час?\n";
    cin >> hour;

    if(hour > 12 || hour < 1) {
        cout << "Некорректное время.";
        return 1;
    }

    while(cnt < hour) {
        cout << "Ку-ку\n" << cnt << "\n";
        cnt++;
    }
}

