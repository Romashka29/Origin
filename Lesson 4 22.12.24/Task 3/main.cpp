#include <iostream>
#include <locale.h>

using namespace std;

class Figura {
protected:
    int sides[4];
    int angles[4];
    int sidesCount;

public:
    Figura() : sidesCount(0) {
        for (int i = 0; i < 4; i++) {
            sides[i] = 0;
            angles[i] = 0;
        }
    }

    virtual bool isCorrect() const {
        return sidesCount == 0;
    }

    virtual void printInfo() const {
        cout << "Фигура:" << endl;
        cout << (isCorrect() ? "Правильная" : "Неправильная") << endl;
        cout << "Количество сторон: " << sidesCount << endl << endl;
    }

    virtual ~Figura() {}
};

class triAngle : public Figura {
public:
    triAngle(int a, int b, int c, int A, int B, int C) {
        sidesCount = 3;
        sides[0] = a; sides[1] = b; sides[2] = c;
        angles[0] = A; angles[1] = B; angles[2] = C;
    }

    bool isCorrect() const override {
        return sidesCount == 3 && (angles[0] + angles[1] + angles[2] == 180);
    }

    void printInfo() const override {
        cout << "Треугольник:" << endl;
        cout << (isCorrect() ? "Правильная" : "Неправильная") << endl;
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << sides[0] << " b=" << sides[1] << " c=" << sides[2] << endl;
        cout << "Углы: A=" << angles[0] << " B=" << angles[1] << " C=" << angles[2] << endl << endl;
    }
};

class RightTriangle : public triAngle {
public:
    RightTriangle(int a, int b, int c) : triAngle(a, b, c, 45, 45, 90) {}

    bool isCorrect() const override {
        return triAngle::isCorrect() && angles[2] == 90;
    }

    void printInfo() const override {
        cout << "Прямоугольный треугольник:" << endl;
        cout << (isCorrect() ? "Правильная" : "Неправильная") << endl;
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << sides[0] << " b=" << sides[1] << " c=" << sides[2] << endl;
        cout << "Углы: A=" << angles[0] << " B=" << angles[1] << " C=" << angles[2] << endl << endl;
    }
};

class IsoscelesTriangle : public triAngle {
public:
    IsoscelesTriangle(int a, int b, int A, int B) : triAngle(a, b, a, A, B, A) {}

    bool isCorrect() const override {
        return triAngle::isCorrect() && sides[0] == sides[2] && angles[0] == angles[2];
    }

    void printInfo() const override {
        cout << "Равнобедренный треугольник:" << endl;
        cout << (isCorrect() ? "Правильная" : "Неправильная") << endl;
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << sides[0] << " b=" << sides[1] << " c=" << sides[2] << endl;
        cout << "Углы: A=" << angles[0] << " B=" << angles[1] << " C=" << angles[2] << endl << endl;
    }
};


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