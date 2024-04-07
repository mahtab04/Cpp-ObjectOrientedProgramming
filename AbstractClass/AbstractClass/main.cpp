#include<iostream>
#include "Triangle.h"
#include "Rectangle.h"

int main()
{
    
    // Create Rectangle  object using dynamic memory allocation
        Rectangle* rect = new Rectangle(5, 7);

        // Check if allocation was successful
        if (rect == nullptr) {
            throw std::runtime_error("Failed to allocate memory for Rectangle.");
        }

        // Call area() function
        rect->area();

        // Delete dynamically allocated object
        delete rect;

        // Create Triangle  object using dynamic memory allocation
        Triangle* triangle = new Triangle(5, 7);

        // Check if allocation was successful
        if (triangle == nullptr) {
            throw std::runtime_error("Failed to allocate memory for triangle.");
        }

        // Call area() function
        triangle->area();

        // Delete dynamically allocated object
        delete triangle;

}