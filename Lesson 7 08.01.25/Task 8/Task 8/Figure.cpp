#include "Figure.h"


Figure::Figure(const std::string& name, int sides) : name(name), sides(sides) {
    if (sides <= 0) {
        throw std::invalid_argument("Количество сторон должно быть больше 0");
    }
}

Figure::~Figure() {} 

void Figure::print_info() const {
    std::cout << name << ": количество сторон = " << sides << "." << std::endl;
}