#include "OperatorOverloading.h"
#include <iostream>

int main()
{
    Integer demo_1(5, 2);
    Integer demo_2(10, 10);
    Integer ans = demo_1 + demo_2;
    std::cout << ans.toString() << std::endl; // Using toString method to print the result
    return 0;
}