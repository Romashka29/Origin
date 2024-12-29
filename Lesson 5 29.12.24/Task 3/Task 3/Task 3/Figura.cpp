#include "Figura.h"
#include <iostream>

Figura::Figura() : sidesCount(0) {
    for (int i = 0; i < 4; i++) {
        sides[i] = 0;
        angles[i] = 0;
    }
}

bool Figura::isCorrect() const {
    return sidesCount == 0;
}

void Figura::printInfo() const {
    std::cout << "������:" << std::endl;
    std::cout << (isCorrect() ? "����������" : "������������") << std::endl;
    std::cout << "���������� ������: " << sidesCount << std::endl << std::endl;
}

Figura::~Figura() {}