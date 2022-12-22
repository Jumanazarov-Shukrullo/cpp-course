#include <iostream>

constexpr int add(const int &a, const int &b) { return a + b; }

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << add(a, b) << "\n";
	std::cout << add(1, 2) << "\n";
	return 0;
}
