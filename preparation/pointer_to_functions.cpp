#include <iostream>
#include <functional>

typedef int (*PFnIntegerOperations) (int, int);
int add(int x, int y) {
    return x + y;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Function pointers for function : T name(T, T)
    // PFnIntegerOperations op;
    std::function<int(int, int)> op;
    int n;
    std::cout << "Enter 1 for adding 2 for multiplication: ";
    std::cin >> n;
    if(n == 1)
        op = add;
    else if(n == 2)
        op = multiply;
    int x, y;
    std::cin >> x >> y;
    std::cout << op(x, y) << "\n";
    return 0;
}
