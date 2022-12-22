#include <iostream>

int *returnMemory() {
    int res = 53;
    return &res;
}

int main() {
    // when initialized pointer with null
    // trying it to dereference
    /* int *p = nullptr;
    *p = 45; */
    // second one is when allocating memory in heap
    // forgot to free the memory which was allocated
    // int *p = new int[10];
    int* res = returnMemory();
    std::cout << *res << std::endl;
    return 0;
}
