#include <iostream>
#include <thread>
#include <chrono>

void function(size_t x ) {
    while (x --> 0) {
        std::cout << x << "\n";
    }
}


int main() {
    std::thread t1(function, 1000000);
    t1.join();
//    function(1000000);
    auto start = std::chrono::high_resolution_clock::now();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration{};
    duration = end - start;
    auto ms = duration.count() * 1000.0f;
    std::cout << "Time taken: " << ms << " ms" << std::endl;
    return 0;
}
/// 0.000166