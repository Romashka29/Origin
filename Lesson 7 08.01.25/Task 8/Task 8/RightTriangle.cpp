#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90.0) {
    if (A <= 0 || B <= 0) {
        throw std::invalid_argument("”глы должны быть положительными.");
    }
}