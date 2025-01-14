#include "../include/figures.h"
#include <locale.h>

void printInfo(const Figura* shape) {
    shape->printInfo();
}

int main() {
    setlocale(LC_ALL, "rus");


    RightTriangle rightTriangle(12, 16, 20);       
    IsoscelesTriangle isoscelesTriangle(15, 25, 35, 55);
    EquilateralTriangle equilateralTriangle(30);
    Pryamougolnik rectangle(10, 20);
    Kvadrat square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Romb rhombus(30, 30, 40);

    printInfo(&rightTriangle);
    printInfo(&isoscelesTriangle);
    printInfo(&equilateralTriangle);
    printInfo(&rectangle);
    printInfo(&square);
    printInfo(&parallelogram);
    printInfo(&rhombus);

    return EXIT_SUCCESS;
}