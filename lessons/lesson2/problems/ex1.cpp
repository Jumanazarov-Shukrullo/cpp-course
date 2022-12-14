#include "operators.h"
#include "functions.h"
#include "../solutions/solutions.cpp"
#include <random>
#include <ctime>

//#include "lesson2/problems/comma_operator.h"
#include "logical_bitwise.h"

void recall_last_lesson() {
//    auto x = 5.7;
/**
    This is for large comments or text
**/
//    int32_t yy = 1;
//    int16_t zz = 3;
//    int64_t xx = 4;
//    std::cout << sizeof(yy) << " " << sizeof(zz) << " " << sizeof(xx) << std::endl;
//    std::cout << x;
//
//    bool y = 1000;
//    std::cout << y << std::endl;
//    auto a = 5 / 3; // not a double but int
//
//    auto b = 5./ 3; //will be double

//    auto z = 1000000000ull;
//    std::cout << sizeof(z) << std::endl;
}

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }  else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
//    bool x = is_even(5);
//    assignment_operator();
//    increment_decrement_operators();
//    std::cout << x << std::endl;
//    std::cout << fib(5);
    int n;
    srand(time(nullptr));
    int a = rand() % 100;
    do {
        std::cout << "Enter value: ";
        std::cin >> n;
    } while (n != a);

    std::cout << a << std::endl;
    return 0;
}