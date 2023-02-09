#include <iostream>
#include <string>

int main() {
    std::cout << "Hello world\n";
    std::string s = "hello";
    s[0] = 'a';
    std::cout << s.find('w', 2) << "\n";

    std::string s1;
    std::getline(std::cin, s1);
    std::cout << s1.find_first_of("?.,");
    std::string str = s1.substr(0, 3);
    std::cout << str;
    std::string s;
    getline(std::cin, s);
    for (auto c : s) {
        if (c >= '0' && c <= '9') {
            std::cout << c;
        }
    }
    return 0;
}