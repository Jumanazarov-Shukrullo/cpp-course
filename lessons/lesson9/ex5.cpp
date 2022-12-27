#include <iostream>
#include <vector>

/// @brief
/// assign(), push_back(), pop_back(),
/// insert(), erase(), emplace(), emplace_back()
/// @return
int main()
{
    std::vector<int> v;
    v.assign(5, 10);
    for (const auto &i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    v.push_back(12);
    std::cout << v[v.size() - 1] << std::endl;
    v.pop_back();
    v.erase(v.begin());
    for (const auto &i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    v.emplace(v.begin(), 5);
    for (const auto &i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    // Inserts 20 at the end
    v.emplace_back(20);
    for (const auto &i : v)
    {
        std::cout << i << " ";
    }
    return 0;
}