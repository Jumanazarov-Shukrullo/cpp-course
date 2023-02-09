#include <iostream>

int main() {
    bool t = true;
    bool f = false;
    // if (t || f) {
    //     std::cout << 1;
    // } else {
    //     std::cout << 2;
    // }
    // std::cout << !t << std::endl;
    std::cout << (t || f ? 2 : 3) << std::endl;
    std::cout << 5 + 4 << std::endl;
}