#include <iostream>

struct S {
    int a = 0;
    int * p;
    S() {
        p = new int(5);
        throw 1;
    }
    ~S() {
        delete p;
    }
};

void f() {
    S s;
}
int main() {
    try {
        f();
    } catch (...) {
        std::cout << "caught\n";
    }
}