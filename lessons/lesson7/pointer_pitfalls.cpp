#include <iostream>

int* luboyafunksiya(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i;
    }
    return arr;
}

int main() {
//    int* x = nullptr;
//    *x = 3;
//    std::cout << "Hello world\n";

/*
    int *p = new int(5);
    std::cout << p;
    delete p;
*/
//    int* p = new int(4);
//    delete p;
//    delete p;
    int* arr = new int[5];
    int* p = luboyafunksiya(arr, 5);
    for (int i = 0; i < 5; ++i) {
        std::cout << p[i] << " ";
    }
    delete[] arr;
    return 0;
}