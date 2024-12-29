#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H
#include "Triangle.h"

class IsoscelesTriangle : public triAngle {
public:
    IsoscelesTriangle(int a, int b, int A, int B);
    bool isCorrect() const override;
    void printInfo() const override;
};

#endif
