#include <iostream>
#include <string>

int main() {
	std::string str = "Hello";
	std::cout << str << "\n";
	std::cout << sizeof(str) << "\n" << str.size() << "\n"
	<< str.length() << "\n";
	std::cout << &str + 1 << "\n";
	return 0;
}