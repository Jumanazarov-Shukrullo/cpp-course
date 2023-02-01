#include <iostream>


/// enum ==> little kind of struct
struct Point {
    double x;
    double y;
};

int main() {
    enum class Error { BadRequest, NotFound, InternalServerError };
    enum class Color { Green, Red, Black, White };
    enum class Operations { Add, Subtract, Multiply, Divide };
    Operations op;
    int x, y;
    std::cin >> x >> y;
    switch (op) {
        case Operations::Add:
            std::cout << x + y;
            break;
        case Operations::Subtract:
            std::cout << x - y;
            break;
        case Operations::Multiply:
            std::cout << x * y;
            break;
        case Operations::Divide:
            std::cout << x / y;
            break;
        default:
            std::cout << "Enter valid operator\n";
            break;
    }
    return 0;
}