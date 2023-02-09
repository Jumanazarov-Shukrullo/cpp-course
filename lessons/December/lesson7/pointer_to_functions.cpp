#include <iostream>
#include <functional>

typedef int (*PointerToFunction) (int, int);

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

int main() {
    /// Pointer to function
//    int a = 1;
//    int* p = &a;
//    int res_add = add(1, 2);
//    int res_mul = multiply(3, 4);
//    std::cout << res_add << " " << res_mul << "\n";
    int n;
    std::cout << "Enter number 1 for adding number 2 for multiplying: ";
    std::cin >> n;
    int a, b;
    std::cin >> a >> b;
//    int (*p) (int, int);
//    PointerToFunction p;
    std::function<int(int, int)> p;
    if (n == 1) {
        p = add;
    } else if (n == 2) {
        p = multiply;
    }
    std::cout << "Result: " << p(a, b);
    return 0;
}