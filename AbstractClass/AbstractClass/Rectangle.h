#pragma once


#include "Shape.h"

// Concrete class derived from Shape
class Rectangle : public Shape {
public:
    Rectangle(int w, int h); // Parameterized constructor
    void area() override;

private:
    int width;
    int height;
};
