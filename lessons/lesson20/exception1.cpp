#include <iostream>
#include <vector>
#include <stdexcept>

/// Exceptions - Istisnolar

double divide(double x) {
    return 1 / x;
}

void f(int x) {
    if (x < 0) {
        throw std::logic_error("argument should be positive\n");
    }
}
int main() {
    /// Exception
    std::vector<int> v{1, 2, 4, 5, 6};
    try {
        for(auto i = 0; i <= v.size(); ++ i) {
            std::cout << v.at(i) << " ";
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        f(6);
    } catch (std::logic_error& er) {
        std::cout << er.what() << std::endl;
    }
    return 0;
}