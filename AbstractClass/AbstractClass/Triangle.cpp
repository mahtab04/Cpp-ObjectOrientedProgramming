#include "Triangle.h"


Triangle::Triangle(int w, int h) : width(w), height(h) {}
void Triangle::area()
{
    std::cout << "Triangle area: " << (width * height / 2) << std::endl;
}