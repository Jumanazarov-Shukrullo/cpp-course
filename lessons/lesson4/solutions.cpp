void first_problem() {
#include <iostream>

    int main() {
        int i = 0;
        int j = 1;
        int n;
        std::cin >> n;
        int fib = 1;
        bool swap = false;
        while(n > 1) {
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
        std::cout << fib;
        return 0;
    }
}