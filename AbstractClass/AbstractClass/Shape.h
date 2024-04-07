// In C++, an abstract class is a class that has at least one pure virtual function.
// A pure virtual function is declared using the syntax virtual ReturnType functionName() = 0; 
// and has no implementation in the class where it's declared. Here's an example of an abstract class in C++ :
#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>
class Shape
{
    public:
        virtual ~Shape() = default; // Virtual destructor
        virtual void area() = 0; // pure virtual function
};

#endif