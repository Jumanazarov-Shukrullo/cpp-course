#include <iostream>
#include "sum.h"
#include <cinttypes>
#include <climits>
#include <vector>

void swap(std::vector<int>& v) {}

int main() {
    int x = 1;
    int y = 2;
    std::vector<int> c(10000000000);
    swap(c);
    // swap(x, y);
    int temp = x;
    x = y;
    y = temp;
    std::cout << x << " " << y << std::endl;
    return 0;
}
