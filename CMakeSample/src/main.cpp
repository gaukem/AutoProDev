#include <iostream>
#include "utils/MathUtils.h"
#include <fmt/core.h>  // External library

int main() {
    int a = 5, b = 3;
    int sum = MathUtils::add(a, b);

    fmt::print("Hello, C++ with CMake!\n");
    fmt::print("The sum of {} and {} is {}\n", a, b, sum);

    return 0;
}