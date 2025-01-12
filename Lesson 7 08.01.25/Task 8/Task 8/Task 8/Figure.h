#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <string>

class Figure {
protected:
    int sides; 
    std::string name; 

public:
  
    Figure(const std::string& name, int sides) : name(name), sides(sides) {
        if (sides <= 0) {
            throw std::invalid_argument("Количество сторон должно быть больше 0");
        }
    }

    virtual ~Figure() = default; 


    virtual void print_info() const {
        std::cout << name << " имеет " << sides << " стороны." << std::endl;
    }
};

#endif 