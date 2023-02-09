#include <iostream>

/// Function overloading...
template <typename T, int A>
void func(int a) {
    std::cout << A << "\n";
}

int main() {
    const double A = 1;
//    std::cin >> A;
    func<int, A>(2.);
    return 0;
}