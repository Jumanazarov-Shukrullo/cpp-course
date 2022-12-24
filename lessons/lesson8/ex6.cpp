#include <iostream>
#include <string>

/// https://www.geeksforgeeks.org/stdstring-class-in-c/

using std::string;
using std::getline;
using std::cout;
using std::endl;
using std::cin;

int main() {
	// cout << "Hello world\n";
    // string s = "helofdsfsdfdsl";
    // cout << s.find('l', 3) << "\n";

    string s1;
    getline(std::cin, s1);
    string str = s1.substr(0, 7);
    // cout << str;
    
    for (auto c : s1) {
        if (c >= '0' && c <= '9') {
            std::cout << c;
        }
    }
    return 0;
}