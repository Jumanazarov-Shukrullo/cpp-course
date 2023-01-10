#include <iostream>
#include <cassert>

class Array {
public:
    Array() : size_(0), arr_(nullptr) {}

    explicit Array(size_t size, int value = 0) : size_(size), arr_(new int[size_]) {
        for (int i = 0; i < size_; ++i) {
            arr_[i] = value;
        }
    }

    ~Array() { delete[] arr_; }

    Array(const Array &other) : size_(other.size_), arr_(new int[size_]) {
        for (int i = 0; i < size_; ++i) {
            arr_[i] = other.arr_[i];
        }
    }

    Array &operator=(const Array &other) {
        if (this == &other) {
            return *this;
        }
        delete[] arr_;
        size_ = other.size_;
        arr_ = other.arr_;
        for (int i = 0; i < size_; ++i) {
            arr_[i] = other.arr_[i];
        }
        return *this;
    }

    Array &operator+=(const Array &other) {
        assert(size_ == other.size_);
        for (int i = 0; i < other.size_; ++i) {
            arr_[i] += other.arr_[i];
        }
        return *this;
    }

    Array &operator-=(const Array &other) {
        assert(size_ == other.size_);
        for (int i = 0; i < other.size_; ++i) {
            arr_[i] -= other.arr_[i];
        }
        return *this;
    }

    Array &operator++() {
        return operator+=(Array(size_, 1));
    }

    const Array operator++(int) {
        Array cpy(*this);
        operator++();
        return cpy;
    }

    Array &operator--() {
        return operator+=(Array(size_, 1));
    }

    const Array operator--(int) {
        Array cpy(*this);
        operator--();
        return cpy;
    }

    int &operator[](int index) {
        return arr_[index];
    }

    const int &operator[](int index) const {
        return arr_[index];
    }

    [[nodiscard]] size_t size() const {
        return size_;
    }

    [[nodiscard]] bool empty() const {
        return size_ == 0;
    }

private:
    size_t size_;
    int *arr_;
};

Array operator+(const Array &first, const Array &second) {
    return Array(first) += second;
}

Array operator-(const Array &first, const Array &second) {
    return Array(first) -= second;
}

int main() {
    Array arr(5);
    Array arr1(5, 1);
    arr += arr1;
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    ++arr;
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
}