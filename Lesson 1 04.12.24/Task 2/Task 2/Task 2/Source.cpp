#include <iostream>
#include <string>
using namespace std;

struct Bank
{
    int Account_Number;
    string Name;
    float Money;
};

int main()
{
    setlocale(LC_ALL, "Rus");
    Bank Person1;
    cout << "Введите номер счета: ";
    cin >> Person1.Account_Number;

    cout << "Введите имя владельца: ";
    cin >> Person1.Name;

    cout << "Введите сумму денег на счету: ";
    cin >> Person1.Money;

    cout << "Номер счета: " << Person1.Account_Number << endl;
    cout << "Имя владельца: " << Person1.Name << endl;
    cout << "Сумма денег на счету: " << Person1.Money << endl;

    return EXIT_SUCCESS;
}