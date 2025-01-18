#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <string>

class Figure {
protected:
    int sides;
    std::string name;

public:
    Figure(const std::string& name, int sides);
    virtual ~Figure();

    virtual void print_info() const;
};

#endif