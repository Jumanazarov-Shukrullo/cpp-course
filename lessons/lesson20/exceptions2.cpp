#include <iostream>

/// Exceptions and copying

struct S {
    S() {

    }

    S(const S&) {
        std::cout << "copy\n";
    }
    ~S() {
        std::cout << "destruct\n";
    }
};

void f() {
    S s;

    throw s;
}
void g() {
    try {
        f();
    } catch (S& s) {
        std::cout << "caught in g\n";
        throw;
    }
}

int main() {
    try {
        g();
    } catch (S& s) {
        std::cout << "caught in main\n";
    }
}