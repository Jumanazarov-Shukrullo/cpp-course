#include <iostream>

void f(int, int){}

int main() { 

	void (*pf) (int, int)  = f;
	return 0;
}
