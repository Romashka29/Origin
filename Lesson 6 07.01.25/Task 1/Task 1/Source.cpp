#include <iostream>
using namespace std;
#define MODE 1
#ifndef MODE
#error "���������� ���������� MODE!"
#endif
#if MODE == 1

int add (int a, int b)
{
	return a + b;
}
#endif
int main() {
	setlocale(LC_ALL, "RU");
#if MODE == 0
	cout << "������� � ������ ����������" << endl;
#endif
#if MODE == 1
	cout << "������� � ������ ������" << endl;
	int num1, num2;
	cout << "������� ����� 1: ";
	cin >> num1;
	cout << "������� ����� 2: ";
	cin >> num2;
	cout << "��������� ��������: " << add(num1, num2) << endl;
#else
	std::cout << "����������� �����. ���������� ������. " << endl;
#endif
	return 0;
}