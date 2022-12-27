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

int main()
{
    std::vector<int> v1;
    std::vector<std::vector<int>> v2;

    std::vector<std::string> v;
    std::cout << v.capacity() << std::endl;
    for (size_t i = 0; i < 9; i++)
    {
        v.push_back("ab");
        std::cout << v.size() << "\n";
    }
    for (const auto &i : v)
    {
        std::cout << i << std::endl;
    }
    std::cout << v.capacity() << std::endl; 
    std::cout << v.max_size() << "\n";

    /// methods std::array ===> size(), max_size(), at(index), fill(n)
    /// methods std::vector ===> size(), at(index), push_back(val), pop_back(), resize()
}