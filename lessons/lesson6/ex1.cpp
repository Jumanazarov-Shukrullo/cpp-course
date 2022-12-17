#include <iostream>

int* arr(int arr[], const int& n) {
    for(int i = 0; i < n; ++i) {
        arr[i] = i;
    }
    return arr;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

const int& f(int& n) {
    return n;
}

void const_pointers() {
    int *a = new int[5];
    const int* b = a;
    ++b;
    *b = 1;

    int* const c = new int[5];
    ++c;
    *c = 1;

    const int* const d = new int[5];
    ++d;
    *d = 1;
}
int main() {
//    int a = 1;
//    int& b = a;
//    int c = a;
//    std::cout << &b << std::endl;
//    std::cout << &a << std::endl;
//    std::cout << &c << std::endl;
//    int array[5];
//    int* ar = arr(array, 5);
//    std::cout << *(ar) << std::endl;
//
//    int& g = *ar;
//    g = f(g);
//    std::cout << g << std::endl;
//
//    int x = 1;
//    int y = 2;
//    swap(&x, &y);
//    std::cout << x << " " << y;

    const_pointers();
}