#include <iostream>


//template <typename T>
//void f(const T& el) {
//    std::cout << "el is not int " << el << std::endl;
//}
//
//template <>
//void f(const int& el) {
//    std::cout << "el is int " << el << std::endl;
//}
//
//template <typename U>
//void f(int x, U y) {
//
//}


template <typename T, typename U>
void f(T, U) {
    std::cout << 1;
}

template <>
void f(int, int) {
    std::cout << 3;
}

template <typename T>
void f(T, T) {
    std::cout << 2;
}



int main() {
    f(1, 3.14);
    f(1, 3);
    return 0;
}