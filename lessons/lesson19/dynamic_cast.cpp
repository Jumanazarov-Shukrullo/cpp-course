#include <iostream>

struct A {
    virtual void print() {
        std::cout << "A\n";
    }
};
struct B : A {
    void print() {
        std::cout << "B\n";
    }
};

struct C : A {
    void print() {
        std::cout << "C\n";
    }
};
int main() {
    B b;

    A *a = dynamic_cast<B *>(&b);
    C *c = dynamic_cast<C *>(a);
    if (c == nullptr) {
        std::cout << "no\n";
    } else {
        c->print();
        std::cout << "yes\n";
    }
    try {
        C &r1 = dynamic_cast<C &>(b);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}