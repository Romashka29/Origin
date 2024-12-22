#include <iostream>
#include <locale.h>

using namespace std;

const int triangleSides = 3;
const int triangleAngles = 3;
const int quadrangleSides = 4;
const int quadrangleAngles = 4;

class Figura {
protected:
    int sides[quadrangleSides];
    int angles[quadrangleAngles];
public:
    Figura() {}
    virtual ~Figura() {}
    virtual void printInfo() const = 0;
};

class triAngle : public Figura {
public:
    triAngle(int a, int b, int c, int A, int B, int C) {
        sides[0] = a;
        sides[1] = b;
        sides[2] = c;
        sides[3] = 0;
        angles[0] = A;
        angles[1] = B;
        angles[2] = C;
        angles[3] = 0;  
    }
};
class quadrangle : public Figura {
public:
    quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        sides[0] = a;
        sides[1] = b;
        sides[2] = c;
        sides[3] = d;
        angles[0] = A;
        angles[1] = B;
        angles[2] = C;
        angles[3] = D;
    }
};

class Pryamougolnik : public quadrangle {
public:
    Pryamougolnik(int width, int height)
        : quadrangle(width, height, width, height, 90, 90, 90, 90) {}

    void printInfo() const override {
        cout << "Прямоугольник:\n";
        cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1]
            << ", c=" << sides[2] << ", d=" << sides[3] << '\n';
        cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1]
            << ", C=" << angles[2] << ", D=" << angles[3] << "\n\n";
    }
};

class Kvadrat : public Pryamougolnik {
public:
    Kvadrat(int side)
        : Pryamougolnik(side, side) {}

    void printInfo() const override {
        cout << "Квадрат:\n";
        cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1]
            << ", c=" << sides[2] << ", d=" << sides[3] << '\n';
        cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1]
            << ", C=" << angles[2] << ", D=" << angles[3] << "\n\n";
    }
};

class Parallelogram : public quadrangle {
public:
    Parallelogram(int a, int b, int A, int B)
        : quadrangle(a, b, a, b, A, B, A, B) {}

    void printInfo() const override {
        cout << "Параллелограмм:\n";
        cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1]
            << ", c=" << sides[2] << ", d=" << sides[3] << '\n';
        cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1]
            << ", C=" << angles[2] << ", D=" << angles[3] << "\n\n";
    }
};

class Romb : public Parallelogram {
public:
    Romb(int side, int A, int B)
        : Parallelogram(side, side, A, B) {}

    void printInfo() const override {
        cout << "Ромб:\n";
        cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1]
            << ", c=" << sides[2] << ", d=" << sides[3] << '\n';
        cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1]
            << ", C=" << angles[2] << ", D=" << angles[3] << "\n\n";
    }
};

class RightTriangle : public triAngle {
public:
    RightTriangle(int a, int b, int c)
        : triAngle(a, b, c, 45, 45, 90) {}

    void printInfo() const override {
        cout << "Прямоугольный треугольник:\n";
        cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << '\n';
        cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << "\n\n";
    }
};

class IsoscelesTriangle : public triAngle {
public:
    IsoscelesTriangle(int a, int b, int A, int B)
        : triAngle(a, b, a, A, B, A) {}

    void printInfo() const override {
        cout << "Равнобедренный треугольник:\n";
        cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << '\n';
        cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << "\n\n";
    }
};

class EquilateralTriangle : public triAngle {
public:
    EquilateralTriangle(int side)
        : triAngle(side, side, side, 60, 60, 60) {}

    void printInfo() const override {
        cout << "Равносторонний треугольник:\n";
        cout << "\tСтороны: a=" << sides[0] << ", b=" << sides[1] << ", c=" << sides[2] << '\n';
        cout << "\tУглы: A=" << angles[0] << ", B=" << angles[1] << ", C=" << angles[2] << "\n\n";
    }
};

void printInfo(const Figura* shape) {
    shape->printInfo();
}

int main() {
    setlocale(LC_ALL, "");

    RightTriangle f(12, 16, 20);
    IsoscelesTriangle g(15, 25, 35, 55);
    EquilateralTriangle h(30);
    Pryamougolnik j(10, 20);
    Kvadrat k(20);
    Parallelogram l(20, 30, 30, 40);
    Romb m(30, 30, 40);

    printInfo(&f);
    printInfo(&g);
    printInfo(&h);
    printInfo(&j);
    printInfo(&k);
    printInfo(&l);
    printInfo(&m);

    return EXIT_SUCCESS;
}