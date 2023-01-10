#include <iostream>
#include <cstring>
#include <cassert>

class String {
public:
    /// Default Constructor
    String() : size_(0), ptr_(nullptr) {}
    /// Custom Constructor
    String(size_t size, char ch) : size_(size), ptr_(new char[size_ + 1]) {
        memset(ptr_, ch, size_);
    }
    /// Another custom constructor
    explicit String(const char* ptr) {
        if (ptr == nullptr) {
            ptr_ = new char[1];
            ptr_[0] = '\0';
        } else {
            size_ = strlen(ptr);
            ptr_ = new char[size_ + 1];
            strcpy(ptr_, ptr);
            ptr_[size_] = '\0';
        }
    }
    /// Another custom constructor with initializer list
    String(const std::initializer_list<char>& list) : size_(list.size()), ptr_(new char[size_]) {
        std::copy(list.begin(), list.end(), ptr_);
    }
    /// Rule of 3
    /// Copy Constructor
    String(const String& other): size_(other.size_), ptr_(new char[size_ + 1]) {
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
        ptr_ = new char[size_ + 1];
        for (int i = 0; i < size_; ++i) {
            ptr_[i] = other.ptr_[i];
        }
        return *this;
    }
    /// This operator is used when we want to add 2 strings and equate new value
    /// to the first one
    String& operator+=(const String& other) {
        size_t temp_size = size_;
        size_ += other.size_;
        for (int i = 0; i < other.size_; ++i) {
            ptr_[i + temp_size] = other.ptr_[i];
        }
        return *this;
    }
    /// print function just print current string
    void print() {
        for (int i = 0; i < size_; ++i) {
            std::cout << *(ptr_ + i);
        }
        std::cout << std::endl;
    }
    /// operator [] this function is used to get char at index
    char& operator[] (int index) {
        return ptr_[index];
    }
    /// operator [] this function is used to get char at index with consts
    const char& operator[] (int index) const {
        return ptr_[index];
    }
    /// size function for getting info about size
    size_t size() const {
        return size_;
    }
    /// Writing some functions
    /// push_back function appends character c to the end of the string,
    /// increasing its length by one.
    void push_back(char ch) {}

    /// pop_back function erases the last character of the string,
    /// effectively reducing its length by one.
    void pop_back() {}

    /// insert function inserts additional characters into the string
    /// right before the character indicated by pos (or p):
    String& insert(size_t pos, const char* s) {}

    /// append function extends the string by appending
    /// additional characters at the end of its current value:
    String& append(const char* s) {}

    /// Back function return reference to the last character of the string
    /// This function shouldn't be called when string is emptry
    char& back() {}
    const char& back() const{}

    /// substr function returns a newly constructed string object with its value
    /// initialized to a copy of a substring if this object
    String substr(size_t pos = 0, size_t len = 0) const {}

    /// function at returns a reference to the character at position pos in the string.
    char& at(size_t post){}
    const char& at(size_t post) const{}

    /// assign function assigns a new value to the string,
    /// replacing its current contents
    String& assign(const char* s) {}

    /// replace function replaces the portion of the string that begins at character pos and spans len characters
    /// (or the part of the string in the range between [i1,i2)) by new contents:
    String& replace(size_t pos, size_t len, const char* s, size_t n = 0) {}

    /// erase function erases part of the string, reducing its length
    String& erase(size_t pos = 0,size_t len = 0) {}

    /// copy function copies a substring of the current value of the string object into the array pointed by s.
    /// This substring contains the len characters that start at position pos.
    /// The function does not append a null character at the end of the copied content.
    size_t copy(char* s, size_t len, size_t pos = 0) {}

    /// swap function exchanges the content of the container by the content of str,
    /// which is another string object. Lengths may differ.
    void swap(String& str) {}

    /// empty function checks whether given string empty or not
    bool empty() const {}

    /// data function Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string)
    /// representing the current value of the string object.
    const char* data() const {}
private:
    size_t size_{};
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
    str1[0] = 'b';
    str1.print();
    String hello(5, 'h');
    String world(5, 'w');
    String str3 = hello + world;
    str3.print();
    const char* name = "Shukrullo";
    String s("Jhon");
    s.print();
    String b{'h', 'e', 'l', 'l', 'o'};
    s.print();
    return 0;
}