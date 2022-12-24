#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

/// C-style strings

int main() {
	char str[6] = "hello";
	// cout << sizeof(str) << "\n" << strlen(str) << "\n";
	const char* str_ptr = "hello";
	// cout << sizeof(str_ptr) << "\n" << strlen(str_ptr) << "\n";
	return 0;
}