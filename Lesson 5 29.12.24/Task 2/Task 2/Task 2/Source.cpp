#include <iostream>
#include <string>
#include "Counter.h"
#include <locale>
using namespace std;

int main() {
    std::setlocale(LC_ALL, "Russian");
    char command = '\0';
    int initial_value = 0;

    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    string answer;
    getline(cin, answer);

    Counter counter;

    if (answer == "yes") {//не понимаю почему когда ввожу да, а не yes код не работает корректно
        cout << "Введите начальное значение счётчика: ";
        cin >> initial_value;
        cin.ignore();
        counter = Counter(initial_value);
    }

    while (command != 'x') {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> command;

        switch (command) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            cout << counter.getValue() << endl;
            break;
        case 'x':
            cout << "До свидания!" << endl;
            break;
        default:
            cout << "Неправильная команда. Попробуйте снова." << endl;
            break;
        }
    }

    return 0;
}