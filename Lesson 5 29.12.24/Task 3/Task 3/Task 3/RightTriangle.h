#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H
#include "Triangle.h"

class RightTriangle : public triAngle {
public:
    RightTriangle(int a, int b, int c);
    bool isCorrect() const override;
    void printInfo() const override;
};

#endif
