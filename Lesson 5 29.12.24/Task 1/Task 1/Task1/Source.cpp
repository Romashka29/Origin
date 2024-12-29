#include <iostream>
#include "Maths.h"
#include <locale>
int main()
{
    std::setlocale(LC_ALL, "Russian");
	double num1, num2;
	int operation;
	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	std::cout << "������� ������ �����: ";
	std::cin >> num2;
	std::cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	std::cin >> operation;
    try {
        switch (operation) {
        case 1:
            std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << std::endl;
            break;
        case 4:
            std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << std::endl;
            break;
        case 5:
            std::cout << num1 << " � ������� " << num2 << " = " << power(num1, static_cast<int>(num2)) << std::endl;
            break;
        default:
            std::cout << "����������� ��������!" << std::endl;
            break;
        }
    }
    catch (const char* error) {
        std::cout << "������: " << error << std::endl;
    }
	return EXIT_SUCCESS;
}