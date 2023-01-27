#ifndef CPP_COURSE_INHERITANCE_H
#define CPP_COURSE_INHERITANCE_H


#include <iostream>

class TopString {
public:
    explicit TopString(std::string arg);
};
class String : public TopString {
public:
    String();
    explicit String(std::string);
    ~String();
private:
    std::string str_;
};

class SubString: public String {
public:
    SubString();
    ~SubString();

};


#endif //CPP_COURSE_INHERITANCE_H
