#include <iostream>
#include <utility>

void f(int x = 0) {
    std::cout << x << std::endl;
}

class Human {
public:
    Human(const std::string& name = std::string("Shukrullo"), int age = 20) : name_(name), age_(age) {}
    Human(std::string&& name, int age): name_(name), age_(age) {}
    Human(const Human& other): name_(other.name_), age_(other.age_) {}
    Human& operator=(const Human& other) {
        if (this == &other)
            return *this;
        name_ = other.name_;
        age_ = other.age_;
        return *this;
    }
    ~Human() = default;
    void get() const {
        std::cout << "Hello " << name_ <<
        "\nYou are " << age_ << " years old\n";
    }
    void set(const std::string& name, const int age){
        this->name_ = name;
        this->age_ = age;
    }
private:
    std::string name_;
    int age_{};
};

int main() {
//    Human h("Shukrullo", 20);
//    h.get();
//    Human b(h);
//    b.get();
//
//    Human c;
//
//    c = h = b;
//    c.get();
    Human h;
    h.get();
    return 0;
}