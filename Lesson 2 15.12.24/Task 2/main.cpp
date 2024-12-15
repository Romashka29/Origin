#include <iostream>
#include <string>

using namespace std;

class Counter {
private:
    int value;

public:
    Counter() : value(1) {}
    explicit Counter(int initial_value) : value(initial_value) {}
    void increment() {
        ++value;
    }
    void decrement() {
        --value;
    }
    int getValue() const {
        return value;
    }
};

int main() {
    char command;
    int initial_value;

    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    string answer;
    getline(cin, answer);

    if (answer == "да") {
        cout << "Введите начальное значение счётчика: ";
        cin >> initial_value;
        Counter counter(initial_value);
        cin.ignore();
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
    }
    else {
        Counter counter;
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