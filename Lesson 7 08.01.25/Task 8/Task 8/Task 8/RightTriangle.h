#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B)
        : Triangle(a, b, c, A, B, 90.0) { 
        if (C != 90.0) {
            throw InvalidFigureError("Ошибка создания прямоугольного треугольника: угол C должен быть равен 90 градусов.");
        }
    }
};

#endif