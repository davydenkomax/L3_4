/*
4. Дана оценка по пятибалльной шкале. Вывести «отлично» для числа 5, «хорошо» для 4, «средне» для 3 и «хуже среднего» для значений от 0 до 2 включительно.
*/

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int mark;

    cout << "Введите оценку (от 0 до 5): ";
    cin >> mark;

    // Провнрка значния переменной mark
    switch (mark) {
    case 5: cout << "Отлично"; break;
    case 4: cout << "Хорошо"; break;
    case 3: cout << "Средне"; break;
    case 2: cout << "Хуже среднего"; break;
    case 1: cout << "Хуже среднего"; break;
    case 0: cout << "Хуже среднего"; break;
    default: cout << "Неверная запись оценки"; break;
    }

    return 0;
}