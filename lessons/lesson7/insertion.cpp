/* The insertion sort algorithms which sorts
given array in descending order*/

#include <iostream>
#include <vector>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void InsertionSort(std::vector<int>& arr, int size) {
    for (int i = 1; i < size; ++i) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < temp) {
            swap(arr[j], arr[j + 1]);
            // std::cout << arr[j] << " " << arr[j + 1] << " " << temp << std::endl;
            j = j - 1;
        }
        swap(arr[j + 1], temp);
    }
}

void Print(std::vector<int>& arr) {
    for (auto &i : arr) {
        std::cout << i << " ";
    }
}

int main() {
    int size;
    std::cin >> size;
    std::vector<int> arr(size, 0);
    for (auto &i : arr) {
        std::cin >> i;
    }
    InsertionSort(arr, size);
    Print(arr);
    return 0;
}