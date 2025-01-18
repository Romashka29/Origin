#include "Triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : Figure("�����������", 3), a(a), b(b), c(c), A(A), B(B), C(C) {
    if (A + B + C != 180.0) {
        throw InvalidFigureError("����� ����� ������������ ������ ���� ����� 180 ��������.");
    }
}

void Triangle::print_info() const {
    std::cout << name << " (�������: " << a << ", " << b << ", " << c
        << "; ����: " << A << ", " << B << ", " << C << ")\n";
}