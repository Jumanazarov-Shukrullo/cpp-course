#include <iostream>
#include <stdexcept>
#include <exception>

/// exceptions specifications and noexcept keyword

/// std::runtime_error
/// std::logic_error
/// std::out_of_range
/// std::bad_alloc
/// std::bad_cast

void g() {
    throw std::runtime_error("Hi\n");
}

void f() noexcept {
    g();
}

int main() {
    f();
    std::runtime_error re("Hello\n");

    std::cout << re.what();
}