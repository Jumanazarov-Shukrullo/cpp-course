#include <iostream>

int main() {
	int a = 1;
	int b = 2;

	int &ref_to_a = a;
	int &ref_to_b = b;

	a = 3;
	b = 4;
	std::cout << a << std::endl;
	std::cout << ref_to_a << std::endl;
	std::cout << b << std::endl;
	std::cout << ref_to_b << std::endl;
	return 0;
}
