#include <vector>
#include <map>
#include <iostream>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int counter = 0;
    for(int i = 0; i < nums.size(); ++ i) {
        if (nums[i] != val) {
            nums[counter] = nums[i];
            ++counter;
        } else {
            nums.erase(nums.begin() + i);
        }
    }
    return counter;
}

int main() {
    std::vector<int> v = {3, 1, 2, 3, 3};
    removeElement(v, 3);
    std::cout << std::endl;
    for(const auto i : v) {
        std::cout << i << " ";
    }
}