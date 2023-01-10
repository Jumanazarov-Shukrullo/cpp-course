#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str;
//    cin >> str;
//    std::cout << str.size() << endl;
//    std::cout << str.length() << endl;
//    std::cout << str.max_size() << endl;
//    cout << str << endl;
//    // str.resize(str.size() * 2);
//    str.reserve(5);
//    cout << str.capacity() << endl;
    char s[6] = "hello";
    std::getline(std::cin, str);
    for(char i : s) {
        std::cout << i << " ";
    }
//    cout << str << endl;
    return 0;
}