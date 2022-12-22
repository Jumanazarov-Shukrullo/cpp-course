#include <iostream>

int fib(int&& n) {
    int i = 0;
    int j = 1;
    int fib = 1;
    bool swap = false;
    while (n > 1) {
        fib = i + j;
        if (!swap) {
            i = i + j;
            swap = true;
        } else {
            j = i + j;
            swap = false;
        }
        n--;
    }
    return fib;
}

int main() {
//    int&& aa = 1;
//    int a = 6;
    int c = fib(45);
    std::cout << c;
}