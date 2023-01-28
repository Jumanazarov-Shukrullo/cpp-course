#include <iostream>
#include <vector>
#include <deque>

struct S {
    int x = 0;
    S() : x(0){}
    explicit S(int x): x(x) {}
    S(const S&) = delete;
};

int main() {
    std::deque<S> v;
    for (int i = 0; i < 100; ++i) {
        v.emplace_back(0);
    }
}