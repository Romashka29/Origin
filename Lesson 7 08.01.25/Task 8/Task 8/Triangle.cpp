#include "Triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : Figure("Треугольник", 3), a(a), b(b), c(c), A(A), B(B), C(C) {
    if (A + B + C != 180.0) {
        throw InvalidFigureError("Сумма углов треугольника должна быть равна 180 градусам.");
    }
}

void Triangle::print_info() const {
    std::cout << name << " (стороны: " << a << ", " << b << ", " << c
        << "; углы: " << A << ", " << B << ", " << C << ")\n";
}