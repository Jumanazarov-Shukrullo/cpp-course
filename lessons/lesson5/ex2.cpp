#include <iostream>

int main() {
    int x = 1;
    int y = 1;
    int z = 1;
    int* pointer_to_x = &x;
    int* pointer_to_y = &y;
    int* pointer_to_z = &z;
    std::cout << *pointer_to_x << std::endl;
    std::cout << pointer_to_y << std::endl;
    std::cout << pointer_to_x - pointer_to_z << std::endl;
    return 0;
}