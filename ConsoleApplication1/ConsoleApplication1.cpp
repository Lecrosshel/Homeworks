#include <iostream>

using namespace std;

void getMinNum() 
{
    cout << "**********Получение минимального числа************";
    int firstNum, 
        secondNum;
    cin >> firstNum;
    cin >> secondNum;

    if(firstNum < secondNum) {
        cout << "наименьшее число " << firstNum;
    }
    else if (firstNum > secondNum) {
        cout << "наименьшее число " << secondNum;
    }
    else {
        cout << "Числа равны";
    }
}

void checkMath() 
{
    cout << "**********Навык счетовода************";
    int firstNum = rand(), 
        secondNum = rand(), 
        result = firstNum + secondNum, 
        answer;
    cout << firstNum << "+" << secondNum << "=";
    cin >> answer;

    if (answer == result) {
        cout << "Это правильный ответ";
    }
    else {
        cout << "Ответ неверный \n";
        cout << "Правильный ответ:" << result;
    }
}

void checkEven() 
{
    cout << "**********Проверка на четность************";
    int inputNum;
    cout << "Введите число:";
    cin >> inputNum;

    if (!(inputNum % 2)) {
        cout << "Введенное число четное";
    }
    else {
        cout << "Введенное число нечетное";
    }
}

void checkDivisionRemains() 
{
    cout << "**********Проверка остатка от деления************";
    int numberToDivide, divider;
    cin >> numberToDivide;
    cin >> divider;

    if (!(numberToDivide % divider)) {
        cout << "Делится";
    }
    else {
        cout << "Не делится";
    }
}

void calculateXp()
{
    cout << "**********Калькулятор уровней************";
    int xpValue;
    string charLvlText = "Текущий уровень персонажа:";
    cout << "Введите количество полученного опыта:";
    cin >> xpValue;

    if (xpValue >= 1000 && xpValue < 2500) {
        cout << charLvlText << "2";
    }
    else if (xpValue >= 2500 && xpValue < 5000) {
        cout << charLvlText << "3";
    }
    else if (xpValue >= 5000) {
        cout << charLvlText << "4";
    }
    else {
        cout << charLvlText << "1";
    }
}

void calculateXpAlt() 
{
    cout << "**********Калькулятор уровней(альтернативный вариант)************";
    int xpValue;
    cout << "Введите количество полученного опыта:";
    cin >> xpValue;
    int currentLevel = 1;
    currentLevel += ((xpValue / 5000) * 3) + (((xpValue % 5000) / 2500) * 2) + (((xpValue % 5000) % 2500) / 1000);
    cout << "Текущий уровень персонажа:" << currentLevel;
}

void calculateBarbers()
{
    int mansCount, barbersCount;
    cout << "*****************Барбершоп калькулятор*****************\n";
    cout << "Введите число мужчин в городе: ";
    cin >> mansCount;
    cout << "Сколько барберов удалось нанять: ";
    cin >> barbersCount;
    int mansPerBarber = 8;
    int mansPerBarberPerMonth = mansPerBarber * 30;
    cout << "Один барбер стрижет " << mansPerBarberPerMonth << " в месяц\n";
    int requiredBarbers = mansCount / mansPerBarberPerMonth;

    if (mansCount % mansPerBarberPerMonth) {
        requiredBarbers++;
    }

    cout << "Необходимое число барберов " << requiredBarbers << "\n";

    if (requiredBarbers > barbersCount) {
        cout << "Нужно больше барберов!!!";
    }
    else {
        cout << "Барберов хватает";
    }
}

void getRestaurantMenuByDay() 
{
    cout << "***********Меню столовой №1*************\n";
    cout << "Введите номер дня недели (1-7):";
    int dayNum;
    cin >> dayNum;
    string dayNames[] = {
        "Понедельник", 
        "Вторник", 
        "Среда", 
        "Четверг", 
        "Пятница",
        "Суббота", 
        "Воскресенье",       
    };

    if (dayNum < 1 || dayNum > 7) {
        cerr << "Такого дня нет";
    }

    cout << dayNames[dayNum - 1] << "\n";
    cout << "Пюрешка с котлеткой\n";
    cout << "Макарошки с сосиской\n";
    cout << "Гречка с гуляшом\n";

    switch (dayNum)
    {
    case 1:
        cout << "Борщ\n";
        cout << "Компот ягодный\n";
        break;
    case 2:
        cout << "Суп гороховый\n";
        cout << "Чай зеленый\n";
        break;
    case 3:
        cout << "Суп гречневый\n";
        cout << "Чай черный\n";
        break;
    case 4:
        cout << "Суп макаронный\n";
        cout << "Кофе с молоком\n";
        break;
    case 5:
        cout << "Уха из петуха\n";
        cout << "Компот яблочный\n";
        break;
    case 6:
        cout << "Щи\n";
        cout << "Кисель\n";
        break;
    default:
        cout << "Солянка\n";
        cout << "Кофе черный\n";
        break;
    }
}

void calculateTaxes() 
{
    cout << "**********Калькулятор налогов************";
    int salary,
        minEarningsThreshold = 10000,
        maxEarningsThreshold = 50000,
        minTaxPercent = 13,
        middleTaxPercent = 20, 
        maxTaxPercent = 30,
        currentTax = 0,
        minTaxPath = 0,
        maxTaxPath = 0;
    cout << "Введите размер Вашей зарплаты:";
    cin >> salary;
    
    if (salary > maxEarningsThreshold) {
        currentTax = ((salary - maxEarningsThreshold) / 100 * maxTaxPercent) + ((maxEarningsThreshold - minEarningsThreshold) / 100 * middleTaxPercent) + (minEarningsThreshold / 100 * minTaxPercent);
    }
    else if (salary > minEarningsThreshold) {
        currentTax = ((salary - minEarningsThreshold) / 100 * middleTaxPercent);
    }
    else {
        currentTax = salary / 100 * minTaxPercent;
    }

    cout << "Ваш налог составляет " << currentTax;
}

void getAvgSalary() 
{
    cout << "**********Калькулятор средней зарплаты************";
    int workerSalaryList[3];
    cout << "Введите зарплату первого сотрудника: ";
    cin >> workerSalaryList[0];
    cout << "Введите зарплату второго сотрудника: ";
    cin >> workerSalaryList[1];
    cout << "Введите зарплату третьего сотрудника: ";
    cin >> workerSalaryList[2];
    int minSalary = 0, 
        maxSalary = 0;

    for (int workerSalary: workerSalaryList) {
        if (!minSalary || workerSalary < minSalary) {
            minSalary = workerSalary;
        }

        if (!maxSalary || workerSalary > maxSalary) {
            maxSalary = workerSalary;
        }
    }

    int minMaxSalaryDiff = maxSalary - minSalary;
    cout << "Разница наименьшего и наибольшего заработка сотрудников составляет ";
    cout << minMaxSalaryDiff << "\n";
    int avgSalary = (minMaxSalaryDiff / 2) + minSalary;
    cout << "Средний заработок сотрудников составляет " << avgSalary;
}

void execute(int actionNum) {
    switch (actionNum) {
    case 1:
        getMinNum();
        break;
    case 2:
        checkMath();
        break;
    case 3:
        checkEven();
        break;
    case 4:
        checkDivisionRemains();
        break;
    case 5:
        calculateXp();
        break;
    case 6:
        calculateXpAlt();
        break;
    case 7:
        calculateBarbers();
        break;
    case 8:
        getRestaurantMenuByDay();
        break;
    case 9:
        calculateTaxes();
        break;
    case 10:
        getAvgSalary();
        break;
    default:
        cout << "function not found";
        break;
    }
}

int main() {
    int chosenAction;
    string actions[] = {
      "Получение минимального числа",
      "Проверить навык счетовода",
      "Проверка на четность",
      "Проверка остатка от деления",
      "Калькулятор уровней",
      "Калькулятор уровней(альтернативный вариант)",
      "Барбершоп калькулятор",
      "Меню столовой №1",
      "Калькулятор налогов",
      "Калькулятор средней зарплаты",
    };
    int counter = 1;

    for (string option : actions) {
        cout << counter << "-" << option << "\n";
        counter++;
    }

    cout << "Выберите действие:\n";
    cin >> chosenAction;
    execute(chosenAction);
}
