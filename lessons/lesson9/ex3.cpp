/**
 * @file ex3.cpp
 * @author Shukrullo (https://github.com/Jumanazarov-Shukrullo)
 * @brief
 * @version 0.1
 * @date 2022-12-27
 *
 * @copyright Copyright (c) 2022
 *
 * Vector is a sequential container to store elements and not index based.
    Array stores a fixed-size sequential collection of elements of the same type and it is index based.
    Vector is dynamic in nature so, size increases with insertion of elements.
    As array is fixed size, once initialized can’t be resized.
    Vector occupies more memory.
    Array is memory efficient data structure.
    Vector takes more time in accessing elements.
    Array access elements in constant time irrespective of their location
    as elements are arranged in a contiguous memory allocation.
 *
 */
#include <string>
#include <vector>
#include <array>
#include <iostream>

int main() {
    std::vector<int> v1(6);
    std::cout << v1.capacity() << std::endl;
    for(const auto& i : v1) {
        std::cout << i << " ";
    }
//    for(int i = 0; i < 10; ++i) {
//        if (i % 2 == 0) {
//            v1.push_back(i);
//        }
//    }
//    std::cout << v1.size() << std::endl;
//    std::cout << v1.max_size() << std::endl;
//    std::cout << "Elements before pop_back: ";
//    for(const auto& i : v1) {
//        std::cout << i << " ";
//    }
//    v1.pop_back();
//    std::cout << std::endl << "Elements after pop_back: ";
//    for(const auto& i : v1) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl << "vector size after popping back: " <<
//    v1.size();
//    std::cout << std::endl << "Elements with at(): ";
//    for(int i = 0; i < v1.size(); ++i) {
//        std::cout << v1.at(i) << " ";
//    }
    /// methods std::array ===> size(), max_size(), at(index), fill(n)
    /// methods std::vector ===> size(), at(index), push_back(val), pop_back(), resize()
}