#include <iostream>
#include <string>

/// https://www.geeksforgeeks.org/stdstring-class-in-c/

using std::string;
using std::getline;
using std::cout;
using std::endl;
using std::cin;

int main() {
	cout << "Hello world\n";
    string s = "hello";
    s[0] = 'a';
    cout << s.find('w', 2) << "\n";

    string s1;
    getline(std::cin, s1);
    cout << s1.find_first_of("?.,");
    string str = s1.substr(0, 3);
    cout << str;
    string s;
    getline(std::cin, s);
    for (auto c : s) {
        if (c >= '0' && c <= '9') {
            std::cout << c;
        }
    }
    return 0;
}