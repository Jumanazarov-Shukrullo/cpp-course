#include <iostream>
#include <vector>
#include <stdexcept>
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
        std::vector<int> v(100, 0);
        v.at(100) = 1;
    } catch (std::out_of_range& er) {
        std::cout << er.what();
    }
}

template <typename T>
void h() {
    if (sizeof(T) == 4) {
        throw 1;
    } else if(sizeof(T) == 8) {
        throw 1.0;
    } else if(sizeof(T) == 1) {
        throw 'a';
    } else {
        throw std::runtime_error("runtime error\n");
    }
}
struct Point {
    double x;
    double y;
};
int main() {
    try {
        h<Point>();
    } catch (int) {
        std::cout << "int caught\n";
    } catch (double) {
        std::cout << "double caught\n";
    } catch(char) {
        std::cout << "char caught\n";
    } catch (...) {
        std::cout << "exception caught\n";
    }
}