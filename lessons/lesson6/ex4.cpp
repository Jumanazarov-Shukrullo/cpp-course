#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n;) {
        for (int j = 0; j < n;) {
            std::cout << i << " " << j << std::endl;
            ++j;
        }
        ++i;
        std::cout << std::endl;
    }
}
