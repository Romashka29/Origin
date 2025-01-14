#pragma once

#include <iostream>
#include <string>

// ������� �����
class Figura {
protected:
    int sides[4];   // ������������ ���������� ������: 4 (��� ��������������� �����)
    int angles[4];  // ������������ ���������� �����: 4
public:
    Figura();
    virtual ~Figura();
    virtual void printInfo() const = 0; // ����������� ����� ��� ������ ����������
};

// ############################### ������������ ###############################

// ����� ������������
class triAngle : public Figura {
public:
    triAngle(int a, int b, int c, int A, int B, int C); // ����������� ��� ������� 3� ������ � �����
};

// ������������� �����������
class RightTriangle : public triAngle {
public:
    RightTriangle(int a, int b, int c); // ����������� ��� ������� ������ � ����������� �����
    void printInfo() const override;   // ���������� ������� ������ ����������
};

// �������������� �����������
class IsoscelesTriangle : public triAngle {
public:
    IsoscelesTriangle(int a, int b, int A, int B);
    void printInfo() const override;
};

// �������������� �����������
class EquilateralTriangle : public triAngle {
public:
    EquilateralTriangle(int side);
    void printInfo() const override;
};

// ############################### ���������������� ###############################

// ����� ����������������
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