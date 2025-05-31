#pragma once

#include <string>

class Figure {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual std::string to_string();
};
