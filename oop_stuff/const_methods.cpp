#include <iostream>

class String {
public:
    __attribute__((unused)) String(int size, char ch): size_(size), str_(new char[size_]){
        for (int i = 0; i < size_; ++i) {
            str_[i] = ch;
        }
    }
    ~String() { delete[] str_; }
    String(const String& other): size_(other.size_), str_(new char[size_]) {}
    String& operator=(const String& other) {
        if(this == &other)
            return *this;
        delete[] str_;

        size_ = other.size_;
        str_ = new char[size_];

        return *this;
    }
    char& operator[](int index) {
        return str_[index];
    }
    const char& operator[](int index) const {
        return str_[index];
    }
private:
    int size_;
    char* str_;
};

int main() {
    String s(4);
    for (int i = 0; i < 4; ++i) {
        s[i] = 'a';
    }

    return 0;
}
