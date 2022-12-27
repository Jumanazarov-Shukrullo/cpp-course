#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    std::cout << "elements of v1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    std::cout << std::endl << "elements of v2: "; 
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    std::cout << std::endl;
    // Swaps v1 and v2
    v1.swap(v2);

    cout << "After Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    std::cout << std::endl;
    return 0;
}