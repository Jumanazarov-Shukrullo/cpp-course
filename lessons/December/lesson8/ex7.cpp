#include <iostream>
#include <string>

int main() {
	char s;
	std::cin>>s;
	// std::cout << (int)'a';
	if(s >= 'a' && s <= 'z')
		std::cout << char(s - 32);
	else
		std::cout << s;
	return 0;
}