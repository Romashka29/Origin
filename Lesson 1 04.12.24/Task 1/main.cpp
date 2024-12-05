#include <iostream>
#include <string>
using namespace std;
enum monthnumber
{
    Январь = 1,
    Февраль = 2,
    Март = 3,
    Апрель = 4,
    Май = 5,
    Июнь = 6,
    Июль = 7,
    Август = 8,
    Сентябрь = 9,
    Октябрь = 10,
    Ноябрь = 11,
    Декабрь = 12
};
const char* getMonthName(monthnumber month) {
    switch (month) {
    case Январь: return "Январь";
    case Февраль: return "Февраль";
    case Март: return "Март";
    case Апрель: return "Апрель";
    case Май: return "Май";
    case Июнь: return "Июнь";
    case Июль: return "Июль";
    case Август: return "Август";
    case Сентябрь: return "Сентябрь";
    case Октябрь: return "Октябрь";
    case Ноябрь: return "Ноябрь";
    case Декабрь: return "Декабрь"; 
    }
}
int main() {
    setlocale(LC_ALL, "rus");
    int num;
    do {
        cout << "Введите номер месяца(чтобы закончить введите 0):  ";
        cin >> num;

        if (num >= 1 && num <= 12) {
            monthnumber month = static_cast<monthnumber>(num);
            const char* monthName = getMonthName(month);
            cout << monthName << endl;
        }
        else if (num > 12) {
            cout << "Неправильный номер!" << endl;
        }
    } while (num != 0);
      cout << "До свидания" << endl;
    return EXIT_SUCCESS;
}
