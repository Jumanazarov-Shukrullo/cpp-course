#include <iostream>
#include <cmath>

int first_problem(int n) {
    int x = n % 10;
    n /= 10;
    int y = n % 10;
    n /= 10;
    int z = n % 10;
    n /= 10;
    int res = (x - n) * (n - x) + (y - z) * (z - y) + 1;
    return res;
}

int second_problem(int n) {
	int res = (2 * (n / 2) + 2);
	return res;
}

void third_problem(int n) {
	while(n > 0) {
		std::cout << n % 10;
		n /= 10;
	}
}

int fourth_problem(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int fifth_problem(int n) {
	return n == 1 ? 1 : fifth_problem(n / 10) + n % 10;
}

int sixth_problem(int n) {
	/// 1 raqami
	return 1;
}

bool seventh_problem(int n) {
	if(n == 1)
		return true;
	int i = 0;
	while(std::pow(3, i) <= n) {
		if(std::pow(3, i) == n)
			return true;
		++i;
	}
	return false;
}

int eighth_problem(int n) {
	return 1;
}

int nineth_problem(int x, int y) {
	return 1;
}

bool is_prime(int n) {
	for(int i = 2; i < n; ++ i) {
		if (n % i == 0) 
			return false;
	}
	return true;
}

int tenth_problem(int n) {
	int sum = 0;
	for(int i = 2; i < n; ++ i) {
		if(is_prime(i))
			++sum;
	}
	return sum;
}

bool eleventh_problem(int x1, int y1, int x2, int y2) {
  	if (((x2 - x1) * (x2-x1) == 4 && (y2 - y1) * (y2 - y1) == 1) ||
      ((y2 - y1) * (y2 - y1) == 4 && (x2 - x1) * (x2 - x1) == 1))
      return true;
  	return false;
}

void twelveth_problem(int num) {
	
}

void thirteenth_problem() {

}

int* fourteenth_problem(size_t size, int* arr) {

}

int fifteenth_problem(size_t size, const int* arr) {

}

int sixteenth_problem(size_t size, const int* arr) {

}

int* seventeenth_problem(size_t size, int* arr) {

}

int* eighteenth_problem(size_t size, const int* arr) {

}