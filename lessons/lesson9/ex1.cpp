#include <iostream>
#include <utility>

int main() { 	
	int i = -2;
	unsigned int u = 1;
	if(i > u) {
		std::cout << "huh?\n";
	}
	if(!std::cmp_greater(i, u)) {
		std::cout << "Print something\n";
	}
	return 0;
}