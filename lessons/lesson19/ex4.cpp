#include <iostream>



/// Virtual Destructors
/// Abstract class
struct Base {
    Base() {
        std::cout << "Base::Constructor\n";
    }
    virtual ~Base() = 0;
    /// Pure virtual method
    virtual void f() = 0;
    virtual void g() {
        std::cout << "Base::g\n";
    }
};

struct Derived : Base {
    Derived() {
        std::cout << "Derived::Constructor\n";
    }
    ~Derived() override {
        std::cout << "Derived::Destructor\n";
    }
    void f() override {
        std::cout << "Derived::f\n";
    }
    void g() {
        std::cout << "Derived::g\n";
    }
};


int main() {
    Base* b = new Derived();
    b->f();
    b->g();
    delete b;
    return 0;
}