#include <iostream>
#include <cstring>
#include <cassert>

class String {
public:
    /// Default Constructor
    String() : size_(0), ptr_(nullptr) {}
    /// Custom Constructor
    String(size_t size, char ch) : size_(size), ptr_(new char[size_ + 1]) {
        for (int i = 0; i < size_; ++i) {
            ptr_[i] = ch;
        }
        ptr_[size_] = '\0';
//        memset(ptr_, ch, size_);
    }
    /// Rule of 3
    /// Copy Constructor
    String(const String& other): size_(other.size_), ptr_(new char[size_ + 1]) {
//        for (int i = 0; i < size_; ++i) {
//            ptr_[i] = other.ptr_[i];
//        }
//        ptr_[size_] = '\0';
        memcpy(ptr_, other.ptr_, size_);
    }
    /// Destructor
    ~String() {
        delete[] ptr_;
    }
    /// Assignment operator
    String& operator=(const String& other) {
        if (this == &other)
            return *this;
        delete[] ptr_;
        size_ = other.size_;
        ptr_ = new char[size_];
        for (int i = 0; i < size_; ++i) {
            ptr_[i] = other.ptr_[i];
        }
        return *this;
    }
    String& operator+=(const String& other) {
        size_t temp_size = size_;
        size_ += other.size_;
        for (int i = 0; i < other.size_; ++i) {
            ptr_[i + temp_size] = other.ptr_[i];
        }
        return *this;
    }
    void print() {
        for (int i = 0; i < size_; ++i) {
            std::cout << *(ptr_ + i);
        }
        std::cout << std::endl;
    }
    /// operator []
    char& operator[] (int index) {
        return ptr_[index];
    }
    /// method for defining size
    size_t size() const {
        return size_;
    }
private:
    size_t size_;
    char* ptr_;
};

String operator+(const String& first, const String& second) {
    return String(first) += second;
}

int main() {
    String str1(5, 'a');
    String str2(4, 'b');
    str1 += str2;
    str1.print();
    std::cout << str1[0] << std::endl;
//    str1[0] = 'b';
//    str1.print();
    String hello(5, 'h');
    String world(5, 'w');
    String str3 = hello + world;
    str3.print();
    return 0;
}