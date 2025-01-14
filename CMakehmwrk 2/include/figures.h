#pragma once

#include <iostream>
#include <string>

// Базовый класс
class Figura {
protected:
    int sides[4];   // Максимальное количество сторон: 4 (для четырехугольных фигур)
    int angles[4];  // Максимальное количество углов: 4
public:
    Figura();
    virtual ~Figura();
    virtual void printInfo() const = 0; // Абстрактный метод для вывода информации
};

// ############################### Треугольники ###############################

// Класс треугольника
class triAngle : public Figura {
public:
    triAngle(int a, int b, int c, int A, int B, int C); // Конструктор для задания 3х сторон и углов
};

// Прямоугольный треугольник
class RightTriangle : public triAngle {
public:
    RightTriangle(int a, int b, int c); // Конструктор для задания сторон и стандартных углов
    void printInfo() const override;   // Реализация функции вывода информации
};

// Равнобедренный треугольник
class IsoscelesTriangle : public triAngle {
public:
    IsoscelesTriangle(int a, int b, int A, int B);
    void printInfo() const override;
};

// Равносторонний треугольник
class EquilateralTriangle : public triAngle {
public:
    EquilateralTriangle(int side);
    void printInfo() const override;
};

// ############################### Четырехугольники ###############################

// Класс четырехугольника
class quadrangle : public Figura {
public:
    quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
};

class Pryamougolnik : public quadrangle {
public:
    Pryamougolnik(int width, int height);
    void printInfo() const override;
};

class Kvadrat : public Pryamougolnik {
public:
    Kvadrat(int side);
    void printInfo() const override;
};

class Parallelogram : public quadrangle {
public:
    Parallelogram(int a, int b, int A, int B);
    void printInfo() const override;
};

class Romb : public Parallelogram {
public:
    Romb(int side, int A, int B);
    void printInfo() const override;
};