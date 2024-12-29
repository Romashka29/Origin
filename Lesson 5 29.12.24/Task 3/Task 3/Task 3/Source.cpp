#include <iostream>
#include <locale>
#include "Figura.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"

int main() {
    setlocale(LC_ALL, "");

    Figura* figures[] = {
        new Figura(),
        new triAngle(10, 20, 30, 50, 60, 70),
        new RightTriangle(12, 16, 20),
        new IsoscelesTriangle(15, 25, 35, 55),
    };

    for (auto fig : figures) {
        fig->printInfo();
    }

    for (auto fig : figures) {
        delete fig;
    }

    return 0;
}