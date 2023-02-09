#pragma once
#include <iostream>

void f() {
    int x;
    {
        double y;
    }
    char z;
    int arr[10];
}

void arr() {
    int arr[5] = {1, 3, 5,6,7};
    std::cout << *(arr + 1) << "\n";
}
void g() {
    /**
    1) Unary operator &, aka address-of (don’t confuse with the binary bitwise operator &).
        Returns the address in memory at which the variable is located.
        precedence: 3
        associativity: right-to-left
    2) Unary operator *, aka dereferencing
        Returns the value to which the pointer is pointing.
        precedence: 3
        associativity: right-to-left
    **/
    int x = 5;
    int *pointer_to_x = &x;

    std::cout << "Value x: " << x << "\n"
              << "Value of pointer: " << pointer_to_x << "\n"
              << "Address of x: " << &x << "\n"
              << "De referenced pointer: " << *pointer_to_x << "\n";

}

void operations_with_pointers() {
    ///  T* + int or int + T*  ===>  T*
    int x = 5;
    int* pointer_to_x = &x;
    std::cout << "Initial address: " << pointer_to_x << "\n";
    pointer_to_x += 2;
    std::cout << "New address: " << pointer_to_x << "\n";

    int a = 5;
    int b = 5;

    /// The difference between 2 pointers gives us the distance between them
    int* pointer_to_a = &a;
    int* pointer_to_b = &b;

    std::cout << "Distance in ints: " <<  (pointer_to_b - pointer_to_a) << std::endl;
    std::cout << "Distance in bits: " <<  (pointer_to_b - pointer_to_a) * sizeof(pointer_to_a) << std::endl;

}