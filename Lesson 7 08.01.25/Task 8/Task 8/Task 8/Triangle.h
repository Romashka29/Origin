#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"
#include "InvalidFigureError.h"

class Triangle : public Figure {
protected:
    double a, b, c; 
    double A, B, C; 

public:
    Triangle(double a, double b, double c, double A, double B, double C)
        : Figure("�����������", 3), a(a), b(b), c(c), A(A), B(B), C(C) {
    
        if (A + B + C != 180.0) {
            throw InvalidFigureError("������ �������� ������������: ����� ����� ������ ���� ����� 180 ��������.");
        }
    }

    void print_info() const override {
        std::cout << name << " (�������: " << a << ", " << b << ", " << c
            << "; ����: " << A << ", " << B << ", " << C << ") ������� ������." << std::endl;
    }
};

#endif 