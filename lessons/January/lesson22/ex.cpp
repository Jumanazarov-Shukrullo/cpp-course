#include <iostream>
#include <thread>
#include <chrono>

using namespace std::literals::chrono_literals;
static bool is_finished = false;

struct Class {
    void operator() () const {
        std::cout << 1 << "\n";
    }
};
struct Timer {
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<double> duration;
    Timer() {
        start = std::chrono::steady_clock::now();
    }
    ~Timer() {
        end = std::chrono::steady_clock::now();
        duration = end - start;
        auto ms = duration.count() * 1000.0f;
        std::cout << "Time taken: " << ms << " ms" << std::endl;
    }
};
void do_timing() {
    Timer timer;
    for (int i = 0; i < 1000000; ++i) {
        std::cout << "Hello world\n";
    }
}

void do_something() {
    std::cout << std::this_thread::get_id() << "\n";
    while (!is_finished) {
        std::cout << "working...\n";
        std::this_thread::sleep_for(1s);
    }
}

int main() {
//    std::thread my_thread(do_something);
//    std::cin.get();
//    is_finished = true;
//    my_thread.join();
//    std::cout << std::this_thread::get_id() << "\n";
//    std::cout << "done\n";
//    do_timing();
    Class c;
    c();
    return 0;
}