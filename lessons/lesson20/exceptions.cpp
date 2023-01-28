#include <iostream>
#include <vector>

/// Exceptions

double f(double x) {
    if (x == 0.0) {
        throw std::string ("dividing by zero");
    }
    return 1 / x;
}

/// difference between exceptions and re
/// segfault and exceptions are too different things
/// at and operator[] are different
void g() {
    try {
        std::vector<int> v;
        v.at(100'000'000) = 1;
        v[100'000'001] = 1;
    } catch (...) {
        std::cout << "aaa\n";
    }
}
int main() {
    g();
    try {
        f(0.0);
    }catch (std::string s) {
        std::cout << s << "\n";
    }
}