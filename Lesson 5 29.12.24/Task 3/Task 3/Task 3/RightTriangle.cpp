#include "RightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(int a, int b, int c) : triAngle(a, b, c, 45, 45, 90) {}

bool RightTriangle::isCorrect() const {
    return triAngle::isCorrect() && angles[2] == 90;
}

void RightTriangle::printInfo() const {
    std::cout << "Прямоугольный треугольник:" << std::endl;
    std::cout << (isCorrect() ? "Правильная" : "Неправильная") << std::endl;
    std::cout << "Количество сторон: " << sidesCount << std::endl;
    std::cout << "Стороны: a=" << sides[0] << " b=" << sides[1] << " c=" << sides[2] << std::endl;
    std::cout << "Углы: A=" << angles[0] << " B=" << angles[1] << " C=" << angles[2] << std::endl << std::endl;
}