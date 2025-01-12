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
        : Figure("Треугольник", 3), a(a), b(b), c(c), A(A), B(B), C(C) {
    
        if (A + B + C != 180.0) {
            throw InvalidFigureError("Ошибка создания треугольника: сумма углов должна быть равна 180 градусов.");
        }
    }

    void print_info() const override {
        std::cout << name << " (стороны: " << a << ", " << b << ", " << c
            << "; углы: " << A << ", " << B << ", " << C << ") успешно создан." << std::endl;
    }
};

#endif 