#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    int n = 5;
    int *arr1 = new int[n];
    int *arr2 = new int[n];
    int *arr3 = new int[2 * n];
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; ++i) {
        arr3[i] = arr1[i];
        arr3[i + n] = arr2[i];
    }
    for (int i = 0; i < 2 * n; ++i) {
        cout << arr3[i] << " ";
    }
    cout << std::endl;
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    return 0;
}