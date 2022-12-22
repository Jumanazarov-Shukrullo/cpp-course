#include <iostream>

struct Vector {
	int size;
	double *pointer;
};

void vector_init (Vector& v, int size) {
	v.pointer = new double[size]; // Allocating memory for double size
	v.size = size;
}
double read_and_sum(int s) {
	Vector v;
	vector_init(v, s);
	for (int i = 0; i < s; ++i) {
		std::cin >> v.pointer[i];
	}
	double sum = 0;
	for (int i = 0; i < v.size; ++i) {
		sum += v.pointer[i];
	}
	return sum;
}
int main() {
	double res = read_and_sum(3);
	std::cout << res << std::endl;
	return 0;
}
