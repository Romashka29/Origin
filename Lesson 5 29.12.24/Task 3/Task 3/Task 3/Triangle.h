#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Figura.h"

class triAngle : public Figura {
public:
    triAngle(int a, int b, int c, int A, int B, int C);
    bool isCorrect() const override;
    void printInfo() const override;
};

#endif