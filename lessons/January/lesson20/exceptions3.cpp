#include <iostream>

struct Base {
    Base() {}

    Base(const Base &) {
        std::cout << "copy base\n";
    }
};

struct Derived : Base {
    Derived() {}

    Derived(const Derived &) {
        std::cout << "copy derived\n";
    }
};

/// Exceptions and type conversion
void f() {
    throw Derived();
}

int main() {
    try {
        f();
    } catch (double x) {
        std::cout << "caught double\n";
    } catch (long long x) {
        std::cout << "caught long long\n";
    } catch (unsigned int x) {
        std::cout << "caught unsigned int\n";
    } catch (int x) {
        std::cout << "caught int\n";
    } catch (Base b) {
        std::cout << "caught Base\n";
        throw;
    } catch (Derived& d) {
        std::cout << "caught derived\n";
    }
}