#pragma once

#include "Shape.h"

// Concrete class derived from Shape
class Triangle : public Shape {
public:
    Triangle(int w, int h); // Parameterized constructor
    void area() override;

private:
    int width;
    int height;
};
