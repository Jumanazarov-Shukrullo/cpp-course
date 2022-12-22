#include <iostream>
#include <cstring>

void reverse(char* ch) {
    std::cout << "before if: " << ch << "\n";
    if (*ch != '\0')
    {
        std::cout << "reverse ch + 1: " << ch + 1 << "\n";
        reverse(ch + 1);
    }
    std::cout << "*ch: " << *ch << "\n";
}

void print(char* ch) {
    while (*ch != '\0') {
        printf("%c", *ch);
        ch++;
    }
}

int main() {
    using namespace std::string_literals;
    std::string s = "hello"s + "world";
    const char* r = R"(Line 1 Line2
Line 3
Line 4)";
    std::cout << r << std::endl;
    const char* name = u8"John";
//    std::cout << *(name + 1) << std::endl;
    char name2[5] = {'J', 'o', 'h', 'n'};
    std::string n = "Cherno\0";
//    std::cout << n.size() << std::endl;
//    name[0] = 'n';
    const wchar_t* name3 = L"hello";
    const char16_t* name4 = u"hello";
    const char32_t* name5 = U"hello";
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(wchar_t ) << std::endl;
    std::cout << sizeof(char16_t ) << std::endl;
    std::cout << sizeof(char32_t ) << std::endl;
//    std::cout << *(&(name2) + 1) <<  std::endl;
//    std::cout << *(&(name2) + 2) <<  std::endl;
//    std::cout << *(&(name2) + 3) <<  std::endl;
//    std::cout << (*(name2 + 1)) << "\n";
//    std::cout << &(name2 + 2) << "\n";
//    std::cout << &(name2 + 3) << "\n";
//    std::cout << &*(name2 + 4) << "\n";
//    char str[6] = "Hello";
//    reverse(str);
    // char *str_ptr = "Bye";
    // std::cout << *(&str);
    return 0;
}