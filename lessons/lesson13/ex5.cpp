#include <iostream>
#include <cstring>

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
private:
    size_t size_;
    char* ptr_;
};
int main() {
    String str1(5, 'a');
    str1.print();
    str1[0] = 'b';
    str1.print();
    return 0;
}