#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int count=0, n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < i; j++) {
            if (a[j] > a[i])
                swap(a[i], a[j]);
        }
    }
//    cout << count;
    for(const auto& i : a) {
        std::cout << i << " ";
    }
    return 0;
}