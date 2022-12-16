#include <iostream>

int main() {
    /** int arr[5] = {1, 2,3,4, 5};
//    std::cout << *arr << std::endl;
    for(int i = 0; i < 5; ++i) {
        /// arr[i] <==> *(arr + i) <==> *(i + arr)  <==> i[arr]
        std::cout << arr[i] << std::endl;
        std::cout << i[arr] << std::endl;
    }
     **/
    char str[5] = {'h', 'e', 'l', 'l', 'o'};
//    for(auto& c: str) {
//        std::cout << c;
//    }
//    std::cout << std::endl;
    bool arr_bools[5] = {true, false, false, true,true};
    bool* pointer_to_bool = arr_bools;
    std::cout << pointer_to_bool << std::endl;
    std::cout << sizeof(static_cast<bool >(*(pointer_to_bool))) << std::endl;
//    int arr[5] = {1, 3, 5,7,9};
//    int *pointer_to_arr = arr;
//    std::cout << *(pointer_to_arr + 2) << std::endl;
    return 0;
}