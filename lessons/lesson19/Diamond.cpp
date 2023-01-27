#include <iostream>

class Granny {
public:
    void live() {
        std::cout << "live is hard...\n";
    }
};

class Father : public Granny {
public:
    void work() {
        std::cout << "Father works hard...\n";
    }
};

class Mother : public Granny {
public:
    void HouseKeep() {
        std::cout << "Mother is responsible for house...\n";
    }
};

class Son : public Father, public Mother {
public:

};


struct A {
    A() {
        std::cout << "A\n";
    }
    ~A() {
        std::cout << "~A\n";
    }
    int x;
};

struct B : virtual A {
    B() {
        std::cout << "B" << std::endl;
    }
    ~B() {
        std::cout << "~B" << std::endl;
    }
};

struct C : virtual A {
    C() {
        std::cout << "C" << std::endl;
    }
    ~C() {
        std::cout << "~C" << std::endl;
    }
};


struct D : virtual A {
    D() {
        std::cout << "D" << std::endl;
    }
    ~D() {
        std::cout << "~D" << std::endl;
    }
};

struct E : B, C, D {};

int main() {
    E e;
    e.x = 10;
}