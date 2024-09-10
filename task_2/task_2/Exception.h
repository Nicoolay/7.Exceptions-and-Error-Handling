#pragma once
#include <stdexcept>
#include <string>

class FigureCreationException : public std::domain_error {
public:
    FigureCreationException(const std::string& message)
        : std::domain_error(message) {}
};