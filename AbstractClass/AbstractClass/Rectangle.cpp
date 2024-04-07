#include "Rectangle.h"

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

void Rectangle::area() {
    std::cout << "Rectangle area: " << (width * height) << std::endl;
}
