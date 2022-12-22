#include <iostream>

int main() {
    int x = 1;
    const int y = 2;
    int* pointer_to_x = &x;
    int* const const_pointer = &x;
    ++const_pointer;
    *const_pointer = 3;
    const int *ptr_const = &y;
    ++ptr_const;
    *ptr_const = 3;
    const int *const const_ptr_const = &y;
    const_ptr_const++;
    *const_ptr_const = 2;
    return 0;
}   