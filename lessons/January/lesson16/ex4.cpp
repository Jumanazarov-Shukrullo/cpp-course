#include <iostream>
#include <vector>
#include <array>

/// STL ==> Standard Template Library
template <typename T>
class Vector {
private:
    size_t size_;
    T* arr_;
public:
    /// since c++11
    Vector() {
        size_ = 8;
        arr_ = new T[size_];
        std::cout << "Constructor called\n";
    }
    ~Vector() {
        delete arr_;
    }
    explicit Vector(size_t size, T default_value) : size_(size), arr_(new T[size_]) {
        for (auto i = 0; i < size_; ++i) {
            arr_[i] = default_value;
        }
    }
    size_t size() const {
        return size_;
    }

    T& operator[](int index) {
        return arr_[index];
    }

    const T& operator[](int index) const {
        return arr_[index];
    }
};

template<typename T>
std::ostream& operator<<(std::ostream& os, Vector<T>& v) {
    for (auto i = 0; i < v.size(); ++ i)  {
        os << v[i];
    }
    return os;
}


int main() {
    Vector<char> v(3, 'a');
    std::cout << v;
}