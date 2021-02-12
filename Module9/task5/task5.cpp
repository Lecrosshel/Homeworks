#include <iostream>

using namespace std;

int main() {
    int ticketNum;
    std::cout << "Введите шестизначный номер билета\n";
    cin >> ticketNum;
    int curRemains = ticketNum,
        curNum = ticketNum,
        sumA = 0,
        sumB = 0,
        cnt = 0;

    while(curRemains) {
        curNum = curRemains % 10;

        if(cnt < 3) {
            sumA += curNum;
        } else {
            sumB += curNum;
        }

        curRemains /= 10;
        cnt++;
    }

    bool pathsIsEqual = (sumA == sumB);

    cout << (pathsIsEqual ? "yes" : "no");
}

