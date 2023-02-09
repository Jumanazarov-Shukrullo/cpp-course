//#include <iostream>
//#include <vector>
//#include <stdexcept>
//
///// Exceptions - Istisnolar
//
//double divide(double x) {
//    return 1 / x;
//}
//
//void f(int x) {
//    if (x < 0) {
//        throw std::logic_error("argument should be positive\n");
//    }
//}
//int main() {
//    /// Exception
//    std::vector<int> v{1, 2, 4, 5, 6};
//    try {
//        for(auto i = 0; i <= v.size(); ++ i) {
//            std::cout << v.at(i) << " ";
//        }
//    } catch (std::exception& e) {
//        std::cout << e.what() << std::endl;
//    }
//
//    try {
//        f(6);
//    } catch (std::logic_error& er) {
//        std::cout << er.what() << std::endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

size_t remove_element(std::vector<int>& nums, int val) {
    nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}
int main() {
    std::vector<int> v {2, 3, 3, 2};
    size_t sz = remove_element(v, 3);
    for(auto i : v) {
        std::cout << i << " ";
    }
     std::cout << std::endl << sz << std::endl;
    return 0;
}