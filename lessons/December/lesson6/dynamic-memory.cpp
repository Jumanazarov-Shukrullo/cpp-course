#include <iostream>


int main() {
    int n{}, m{};
    std::cin >> n >> m;
    int arr[n][m];
    int k = 1;
    for (int i = 0;i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = k;
            ++k;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    int n;
    std::cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = i * n + j + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    int n;
    std::cin >> n;
    /// Tensor [x][y][z]
    int*** arr = new int** [n];
    /// Matrices
    for (int i = 0; i < n; ++i) {
        arr[i] = new int*[n];
    }
    /// Matrices themselves
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = new int[n];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
//                cout << n << " " << i << " " << j << " " << k << " ";
                arr[i][j][k] = i * n + n * j + k + 1;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                std::cout << arr[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << "-----" << std::endl;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            delete[] arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;


}