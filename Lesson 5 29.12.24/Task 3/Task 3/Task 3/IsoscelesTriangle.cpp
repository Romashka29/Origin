#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
    : triAngle(a, b, a, A, B, A) {}

bool IsoscelesTriangle::isCorrect() const {
    return triAngle::isCorrect() && sides[0] == sides[2] && angles[0] == angles[2];
}

void IsoscelesTriangle::printInfo() const {
    std::cout << "Равнобедренный треугольник:" << std::endl;
    std::cout << (isCorrect() ? "Правильная" : "Неправильная") << std::endl;
    std::cout << "Количество сторон: " << sidesCount << std::endl;
    std::cout << "Стороны: a=" << sides[0] << " b=" << sides[1] << " c=" << sides[2] << std::endl;
    std::cout << "Углы: A=" << angles[0] << " B=" << angles[1] << " C=" << angles[2] << std::endl << std::endl;
}