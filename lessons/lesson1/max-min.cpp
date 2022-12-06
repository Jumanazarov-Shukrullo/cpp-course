#include <iostream>

int main() {
    int a;
    int b;
    std::cout << "Sonlarni kiriting: ";
    std::cin >> a >> b;
    int max_of_2 = (a > b) * a + (b > a) * b;
    int min_of_2 = (a < b) * a + (b < a) * b;
    std::cout << max_of_2 << " " << min_of_2 << std::endl;
    return 0;
}