#include "Triangle.h"
#include <iostream>

triAngle::triAngle(int a, int b, int c, int A, int B, int C) {
    sidesCount = 3;
    sides[0] = a; sides[1] = b; sides[2] = c;
    angles[0] = A; angles[1] = B; angles[2] = C;
}

bool triAngle::isCorrect() const {
    return sidesCount == 3 && (angles[0] + angles[1] + angles[2] == 180);
}

void triAngle::printInfo() const {
    std::cout << "�����������:" << std::endl;
    std::cout << (isCorrect() ? "����������" : "������������") << std::endl;
    std::cout << "���������� ������: " << sidesCount << std::endl;
    std::cout << "�������: a=" << sides[0] << " b=" << sides[1] << " c=" << sides[2] << std::endl;
    std::cout << "����: A=" << angles[0] << " B=" << angles[1] << " C=" << angles[2] << std::endl << std::endl;
}