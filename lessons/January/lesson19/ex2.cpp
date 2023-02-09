#include <iostream>

template<typename T>
class Number {
private:
    T digit_;
public:
    Number(T a) : digit_(a) {}

    void print() {
        std::cout << digit_ << std::endl;
    }

    Number<T> &operator+=(const Number<T> &(firts)) {
        digit_ += firts.digit_;
        return * this;
    }

};

template<typename sh>
Number<sh> operator+(const Number<sh> &(firts), const Number<sh> &(second)) {
    return Number<sh>(firts) += Number<sh>(second);
}

int main() {
    Number<int> a(1);
    Number<int> b(2);
    Number c = a + b;
    c.print();
}