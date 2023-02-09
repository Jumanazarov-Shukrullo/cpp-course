#include <iostream>
#include <string>

int main() {
	std::string str("Hello");
	std::string str1 = " world";
	str = str + str1;
	std::cout << str << "\n";
	std::cout << sizeof(str) << "\n" << str.size() << "\n"
	<< str.length() << "\n";
	std::cout << &str << "\n";
	return 0;
}