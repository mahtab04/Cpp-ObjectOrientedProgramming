#include "OperatorOverloading.h"

Integer::Integer(int a, int b) : num_1(a), num_2(b) {}

// Overload + operator to add two integers.
Integer Integer::operator+(const Integer& integer) const
{
	return Integer(num_1 + integer.num_1, num_2 + integer.num_2);
}

// Overload - operator to subtract two integers.
Integer Integer::operator-(const Integer& integer) const
{
	return Integer(num_1 - integer.num_1, num_2 - integer.num_2);
}

// Overload * operator to mulitply two integers.
Integer Integer::multiplication(const Integer& integer) const
{
	return Integer(num_1 * integer.num_1, num_2 * integer.num_2);
}

// Overload / operator to divide two integers.
Integer Integer::division(const Integer& integer) const
{
	if (integer.num_1 != 0 && integer.num_2 != 0) {
		return Integer(num_1 / integer.num_1, num_2 / integer.num_2);
	}
	else {
		// Handle division by zero error, for example, throw an exception
		throw std::runtime_error("Division by zero error");
	}
}

std::string Integer::toString() const
{
	return "Num_1: " + std::to_string(num_1) + ", Num_2: " + std::to_string(num_2);
}

std::ostream& operator<<(std::ostream& os, const Integer& integer)
{
	os << integer.toString();
	return os;
}