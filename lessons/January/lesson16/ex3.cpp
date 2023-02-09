#include <iostream>

class Dog;
class Animal  {
public:
    void breathe() {
        std::cout << "Animal is breathing";
    }

protected:
    void print_this() {
        std::cout << this << std::endl;
    }
private:
    friend Dog;
    void eat() {
    }
};

class Dog  : private Animal {
public:
    void bark() {
        eat();
        print_this();
    }
};

int main() {
    Dog dog;
}