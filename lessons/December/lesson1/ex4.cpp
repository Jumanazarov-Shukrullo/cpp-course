#include <iostream>

int main() {
    int a;
    int b;
    std::cin >> a >> b;
    int max_of_2 = (a > b) * a + (b > a) * b;
    int min_of_2 = (b < a) * b + (a < b) * a;
    std::cout << max_of_2 << " " << min_of_2 << std::endl;
    // std::cout << (a > b) << " " << a << " " << b << std::endl;
    // std::cout << (a < b) << std::endl;
}