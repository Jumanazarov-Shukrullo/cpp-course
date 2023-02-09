#include "Inheritance.h"

TopString::TopString(std::string arg) {
    std::cout << "top string\n";
}

String::String(): TopString("arg") {
    std::cout << "Base String Constructor\n";
}

String::~String() {
    std::cout << "Base String Destructor\n";
}

String::String(std::string name) : TopString("arg"), str_(name) {
    std::cout << "Custom String Constructor\n";
}

SubString::SubString() : String("default") {
    std::cout << "Derived SubString Constructor\n";
}

SubString::~SubString() {
    std::cout << "Derived SubString Destructor\n";
}

int main() {
    SubString str;
}