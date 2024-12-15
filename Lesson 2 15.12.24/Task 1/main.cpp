#include <iostream>
#include <string>
using namespace std;

class Calculator
{
private:
	double num1;
	double num2;
public:
	Calculator() : num1(0), num2(0) {}

	bool set_num1(double new_num1) {
		if (new_num1 != 0) {
			num1 = new_num1;
			return true;
		}
        return false;
	}
	bool set_num2(double new_num2) {
		if (new_num2 != 0) {
			num2 = new_num2;
            return true;
		}
        return false;
	}
	double add() { return num1 + num2; }
	double multiply() { return num1 * num2; }
	double subtract_1_2() { return num1 - num2; }
	double subtract_2_1() { return num2 - num1; }
	double divide_1_2() { return num1 / num2; }
	double divide_2_1() { return num2 / num1; }
};
int main() {
    setlocale(LC_ALL, "rus");
    Calculator calculator;

    while (true) {
        std::cout << "Введите num1: ";
        double num1;
        std::cin >> num1;

        if (!calculator.set_num1(num1)) {
            std::cout << "Неверный ввод! Попробуйте еще раз." << std::endl;
            continue;
        }

        std::cout << "Введите num2: ";
        double num2;
        std::cin >> num2;

        if (!calculator.set_num2(num2)) {
            std::cout << "Неверный ввод! Попробуйте еще раз." << std::endl;
            continue;
        }

        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
    }

    return 0;
}
