#include <iostream>
#include <climits>

int main() {
    /// Your code goes here
    int min = INT_MAX, n;
    std::cin >> n;
    bool counter = false;
    int i, a[n];
    for (i = 0; i < n; ++i)
        std::cin >> a[i];
    for (i = 0; i < n; ++i) {
        if (a[i] % 2 != 0 && a[i] <= min) {
            min = a[i];
            counter = true;
        }
    }
    if (!counter)
        min = 0;

    std::cout << min << " ";

    return 0;
}