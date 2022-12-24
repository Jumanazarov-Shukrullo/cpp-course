#include <iostream>
#include <string>

int main() {
	std::string str = "Hello";
	std::cout << str << "\n";
	str.replace(4, 2, "hi");
	std::cout << str << "\n";
	str.append("hiiiiiii");
	std::cout << str << "\n";
	return 0;
}