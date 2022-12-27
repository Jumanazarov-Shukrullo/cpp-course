#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<std::vector<int>> v = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    for (int i = 0; i < v1.size(); ++i) {
        std::cout << v1.at(i) << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}