#pragma once

#include <iostream>
#include<string>
class Integer
{
private:
    int num_1;
    int num_2;

public:
    Integer(int a, int b);
    Integer operator+(const Integer& integer) const;
    Integer operator-(const Integer& integer) const;
    Integer multiplication(const Integer& integer) const;
    Integer division(const Integer& integer) const;
    std::string toString() const;
    friend std::ostream& operator<<(std::ostream& os, const Integer& integer);
};
