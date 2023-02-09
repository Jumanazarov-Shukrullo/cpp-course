#include <iostream>

int main() {
    int x = 10;
    x >>= 2;
    std::cout << x << std::endl;
    int y = 10;
    y <<= 2;
    std::cout << y << std::endl;
}