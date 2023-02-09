#include <iostream>

int fib(int n) {
    int i = 0;
    int j = 1;
    int fib = 1;
    bool swap = false;
    while (n > 1) {
        fib = i + j;
        if (!swap) {
            i = i + j;
            swap = true;
        } else {
            j = i + j;
            swap = false;
        }
        n--;
    }
    return fib;
}

void second_problem() {
    int i = 1;
    int n;
    while (std::cin >> n && n) {
        if (i <= n)
            i = n;
    }
    std::cout << i;
}

void second_fib(int& n) {
    int fib = 1;
    int i = 0;
    int index = 1;
    int j = 1;
    bool swap = false;
    while (fib < n) {
        fib = i + j;
        if(!swap) {
            i += j;
            swap = true;
        } else {
            j += i;
            swap = false;
        }
        ++index;
    }
    if(fib == n) {
        std::cout << index;
    } else {
        std::cout << -1;
    }
}

void fourth_problem() {
    int x, y, z;
    std::cin >> x >> y >> z;
    if (x >= y && x <= z && y <= z) {
        std::cout << y << " " << x << " " << z;
    } else if(x <= y && x >= z && y >= z) {
        std::cout << z << " " << x << " " << y;
    } else if(x <= y && x <= z && y >= z) {
        std::cout << x << " " << z << " " << y;
    } else if(x <= y && x <= z && y <= z) {
        std::cout << x << " " << y << " " << z;
    } else if(x >= y && z <= x && y >= z) {
        std::cout << z << " " << y << " " << x;
    } else if(x >= y && z <= x && y <= z) {
        std::cout << y << " " << z << " " << x;
    }
}

void fifth_problem(int& n, int& m, int& k) {
    std::cin >> n >> m >> k;
    if ((k % n == 0 || k % m == 0) && (n*m>=k))
        std::cout << "YES";
    else
        std::cout << "NO";
}

int sixth_problem(const int* arr, const int& n) {
    arr = new int[n];
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0)
            ++counter;
    }
    delete[] arr;
    return counter;
}

int main() {
    int b = 1;
    const int& a = 1;
    std::cout << &b << std::endl;
    std::cout << &a << std::endl;

    fib(11);
}