#include <iostream>
#include <thread>
#include <chrono>

size_t odd_sum = 0;
size_t even_sum = 0;

void findEven(size_t start, size_t end) {
    for (size_t i = start; i <= end; ++i) {
        if ((i & 1) == 0)
            even_sum += i;
    }
}

void findOdd(size_t start, size_t end) {
    for (size_t i = start; i <= end; ++i) {
        if ((i &  1) == 1) {
            odd_sum += i;
        }
    }
}

int main() {
    size_t start = 0;
    size_t end = 1900000000;
//    findEven(start, end);
//    findOdd(start, end);
    std::thread t1(findEven, start, end);
    std::thread t2(findOdd, start, end);
    t1.join();
    t2.join();
    auto _start = std::chrono::high_resolution_clock::now();
//    findEven(start, end);
//    findOdd(start, end);
    auto _end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> _duration{};
    _duration = _end - _start;
    std::cout << even_sum << std::endl;
    std::cout << odd_sum << std::endl;
    std::cout << _duration.count() * 1000.0f << std::endl;

}