#include <iostream>
#include "RightTriangle.h"
#include "Triangle.h"

int main() {
    setlocale(LC_ALL, "rus");
    try {
        Triangle t1(3.0, 4.0, 5.0, 45.0, 45.0, 90.0);
        t1.print_info();

        Triangle t2(3.0, 4.0, 5.0, 60.0, 60.0, 60.0);
        t2.print_info();
    }
    catch (const InvalidFigureError& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Общая ошибка: " << e.what() << std::endl;
    }

    try {
        RightTriangle rightTriangle(3.0, 4.0, 5.0, 30.0, 60.0);
        rightTriangle.print_info();

        RightTriangle rt2(3.0, 4.0, 5.0, 45.0, 45.0);
        rt2.print_info();
    }
    catch (const InvalidFigureError& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Общая ошибка: " << e.what() << std::endl;
    }

    return 0;
}