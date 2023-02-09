#include <iostream>

void f() {
    int n;
    std::cin >> n;
    for (int i = 0; i < 7; i ++) {
        if (i == 6)
            break;
        if (i % 2)
            continue;
        std::cout << i << std::endl;
    }
}