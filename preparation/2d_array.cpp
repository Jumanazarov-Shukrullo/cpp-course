#include <iostream>


int main() {
	int n;
	std::cin >> n;
	int **arr = new int*[n];
	for(int i = 0; i < n; ++i) {
		arr[i] = new int[n];
	}
	for(int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			 // arr[i][j] = (i + n * j + 1);
			 arr[i][j] = i * n + j + 1;
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < n; ++i)
		delete[] arr[i];
	std::cout << std::endl;
	delete[] arr;
	return 0;
}
