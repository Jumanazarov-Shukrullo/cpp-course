#include <iostream>
#include <string>

/// Encapsulation
/// OOP ni 3 ta asosiy bo'limlarga bo'lamiz
/// 1 - Encapsulation
/// 2 - Inheritance
/// 3 - Polymorphism

/// Keyword struct, class
/// public
class Human {
public:
    Human() = default;
    Human(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
    /// Copy Constructor
    Human(const Human& other) {
        this->name = other.name;
        this->age = other.age;
    }

    /// Destructor
    ~Human() {
        name.clear();
    }

    /// assignment operator
    Human& operator=(const Human& other) {
        if (this == &other)
            return *this;
        this->~Human();
        this->name = other.name;
        this->age = other.age;
        return *this;
    }
    /// Copy Constructor, Destructor, Assigment Operator ==> Rule of Three
    void say_hello() {
        std::cout << "Hello: " << name << std::endl;
    }
    void introduce_yourself() {
        std::cout << "hello my name is: " << name << "\nI am " << age << " years old" << std::endl;
    }
private:
    std::string name;
    int age;
};

int main() {
    Human john("John", 22);
    Human bob(john);
    std::cout << &bob << std::endl;
    bob.say_hello();
    bob.introduce_yourself();
    Human rohn;
    rohn = bob;
    rohn.introduce_yourself();
    return 0;
}