#ifndef INVALID_FIGURE_ERROR_H
#define INVALID_FIGURE_ERROR_H

#include <stdexcept>
#include <string>


class InvalidFigureError : public std::domain_error {
public:

    explicit InvalidFigureError(const std::string& message) : std::domain_error(message) {}
};

#endif 