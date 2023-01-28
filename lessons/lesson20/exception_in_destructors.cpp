#include <iostream>

/// Exceptions in destructor

struct S {
    S() {
        std::cout << "s\n";
    }
    ~S() noexcept(false) {
        std::cout << "~s\n";
        if(!~std::uncaught_exceptions()) {
            throw 1;
        }
    }
};

void f() {
    S s;
    throw 1;
}
int main() {
    try {
        f();
    } catch (...) {
        std::cout << "caught\n";
    }
}