#include <iostream>


int main() {
	int n;
	std::cin >> n;
	int*** tetris = new int** [n];
	
	for(int i = 0; i < n; ++i) {
		tetris[i] = new int* [n];
	}
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			tetris[i][j] = new int[n];
		}
	} 
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			for(int l = 0; l < n; ++l) {
				tetris[i][j][l] = i * n * n + j * n + l + 1;
			}
		}
	}
	
	for(int i = 0; i < n; ++i) {
                for(int j = 0; j < n; ++j) {
                        for(int l = 0; l < n; ++l) {
				std::cout << tetris[i][j][l] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << "-------" << std::endl;
	}
	
	for(int i = 0; i < n; ++i) {
                for(int j = 0; j < n; ++j) {
                        delete[] tetris[i][j];
                }
        }
	
	for(int i = 0; i < n; ++i) {
                delete[] tetris[i];
        }

	delete[] tetris;
	
	return 0;
}
