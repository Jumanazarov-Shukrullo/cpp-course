#include <sstream>
#include <iostream>

using namespace std;

int main() {
    string str;
    getline(std::cin, str);
    istringstream f(str);
    string s;
    string temp = "";
    while (getline(f, s, ' '))
    {
        if(temp.size() < s.size())
            temp = s;
    }
    std::cout << temp << std::endl;
    return 0;
}