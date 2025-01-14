#include "../include/figures.h"

Figura::Figura() {}
Figura::~Figura() {}

triAngle::triAngle(int a, int b, int c, int A, int B, int C) {
    sides[0] = a; sides[1] = b; sides[2] = c;
    sides[3] = 0;
    angles[0] = A; angles[1] = B; angles[2] = C;
    angles[3] = 0;
}

RightTriangle::RightTriangle(int a, int b, int c)
    : triAngle(a, b, c, 45, 45, 90) {}

void RightTriangle::printInfo() const {
    std::cout << "Прямоугольный треугольник:\n";
    std::cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << '\n';
    std::cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << "\n\n";
}
IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
    : triAngle(a, b, a, A, B, A) {}

void IsoscelesTriangle::printInfo() const {
    std::cout << "Равнобедренный треугольник:\n";
    std::cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << '\n';
    std::cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << "\n\n";
}

EquilateralTriangle::EquilateralTriangle(int side)
    : triAngle(side, side, side, 60, 60, 60) {}

void EquilateralTriangle::printInfo() const {
    std::cout << "Равносторонний треугольник:\n";
    std::cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << '\n';
    std::cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << "\n\n";
}

quadrangle::quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
    sides[0] = a; sides[1] = b; sides[2] = c; sides[3] = d;
    angles[0] = A; angles[1] = B; angles[2] = C; angles[3] = D;
}

Pryamougolnik::Pryamougolnik(int width, int height)
    : quadrangle(width, height, width, height, 90, 90, 90, 90) {}

void Pryamougolnik::printInfo() const {
    std::cout << "Прямоугольник:\n";
    std::cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << ", d=" << sides[3] << '\n';
    std::cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << ", D=" << angles[3] << "\n\n";
}

Kvadrat::Kvadrat(int side)
    : Pryamougolnik(side, side) {}

void Kvadrat::printInfo() const {
    std::cout << "Квадрат:\n";
    std::cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << ", d=" << sides[3] << '\n';
    std::cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << ", D=" << angles[3] << "\n\n";
}

Parallelogram::Parallelogram(int a, int b, int A, int B)
    : quadrangle(a, b, a, b, A, B, A, B) {}

void Parallelogram::printInfo() const {
    std::cout << "Параллелограмм:\n";
    std::cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << ", d=" << sides[3] << '\n';
    std::cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << ", D=" << angles[3] << "\n\n";
}
Romb::Romb(int side, int A, int B)
    : Parallelogram(side, side, A, B) {}
void Romb::printInfo() const {
    std::cout << "Ромб:\n";
    std::cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << ", d=" << sides[3] << '\n';
    std::cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << ", D=" << angles[3] << "\n\n";
}