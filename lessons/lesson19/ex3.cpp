#include <iostream>

/// virtual
/// final

struct Woman {
     virtual void work() {
        std::cout << "Woman works...\n";
    }
};

struct Mother : Woman {
     void work() override {
        std::cout << "Woman works at home...\n";
    }
};

struct Teacher : Woman {
     void work() override {
        std::cout << "Woman works at school...\n";
    }
};

struct Customer : Woman {
    void work() override {
        std::cout << "Woman is buying at the market...\n";
    }
};
int main() {
    int select;
    std::cin >> select;
    Woman *t;
    switch (select) {
        case 1:
            t = new Mother;
            break;
        case 2:
            t = new Teacher;
            break;
        case 3:
            t = new Customer;
            break;
        default:
            t = new Woman;
            break;
    }
    t->work();
    delete t;
    return 0;
}