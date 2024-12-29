#include <iostream>
#include <string>
#include "Counter.h"
#include <locale>
using namespace std;

int main() {
    std::setlocale(LC_ALL, "Russian");
    char command = '\0';
    int initial_value = 0;

    cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    string answer;
    getline(cin, answer);

    Counter counter;

    if (answer == "yes") {//�� ������� ������ ����� ����� ��, � �� yes ��� �� �������� ���������
        cout << "������� ��������� �������� ��������: ";
        cin >> initial_value;
        cin.ignore();
        counter = Counter(initial_value);
    }

    while (command != 'x') {
        cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
            cout << "�� ��������!" << endl;
            break;
        default:
            cout << "������������ �������. ���������� �����." << endl;
            break;
        }
    }

    return 0;
}