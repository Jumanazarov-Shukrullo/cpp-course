#include <iostream>
#include <vector>
#include <string>

/// A template function to swap 2 variables
template <typename T>
void swap(T& x, T& y) {
    T temp = x;
    x = y;
    y = x;
}

/// A template function that finds the minimum of three values
template <typename T>
T min3(T a, T b, T c) {
    return std::min(std::min(a, b), c);
}

/// A template class that implements a simple stack of elements
template <typename T>
class Stack {
public:
    void push(T x) {
        elements.push_back(x);
    }
    void pop() {
        elements.pop_back();
    }
    T top() {
        return elements.back();
    }
    bool empty() {
        return elements.empty();
    }

private:
    std::vector<T> elements;
};
/// A template function that checks if two values are equal
template <typename T>
bool isEqual(T a, T b) {
    return a == b;
}

int main() {
    std::string a = "a";
    std::string b = "b";
    swap(a, b);
    std::cout << a << b << std::endl;
    return 0;
}