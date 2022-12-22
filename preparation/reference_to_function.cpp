#include <iostream>

const int& f(const int& x) {
	const int& y = (x * 2);
	return y;
}

int main() {
	int x = f(1);
	std::cout << x << std::endl;
	return 0;
}
