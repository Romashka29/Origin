#include "Figure.h"


Figure::Figure(const std::string& name, int sides) : name(name), sides(sides) {
    if (sides <= 0) {
        throw std::invalid_argument("���������� ������ ������ ���� ������ 0");
    }
}

Figure::~Figure() {} 

void Figure::print_info() const {
    std::cout << name << ": ���������� ������ = " << sides << "." << std::endl;
}