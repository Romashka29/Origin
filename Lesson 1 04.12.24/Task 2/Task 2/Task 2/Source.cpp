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
    cout << "������� ����� �����: ";
    cin >> Person1.Account_Number;

    cout << "������� ��� ���������: ";
    cin >> Person1.Name;

    cout << "������� ����� ����� �� �����: ";
    cin >> Person1.Money;

    cout << "����� �����: " << Person1.Account_Number << endl;
    cout << "��� ���������: " << Person1.Name << endl;
    cout << "����� ����� �� �����: " << Person1.Money << endl;

    return EXIT_SUCCESS;
}