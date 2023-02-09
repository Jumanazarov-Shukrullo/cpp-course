#include <iostream>

/// dynamic_cast in cpp

/// syntax dynamic_cast< new_type> (expression)

/// Dynamic cast is used at run time to find out correct downcast
/// Need at least one virtual function
/// if the cast is successful , dynamic cast returns a value of new_type
/// if not and new_type is a pointer_type then it returns nullptr
/// if not and new_type is a reference_type, then it throws std::bad_cast

using namespace std;


struct Mother {
    virtual void print_name() {}
};

struct Daughter : Mother {

};

struct Son: Mother {

};


int main() {
    Son* son = new Son();
    Daughter* daughter1 = new Daughter();

    Mother* daughter = dynamic_cast<Mother *>(daughter1);

//    Son* p2 = dynamic_cast<Son*>(mother);
    if (daughter == nullptr) {
        std::cout << "cast isn't happened\n";
    } else {
        std::cout << "cast is happened\n";
    }

    Son* p3 = dynamic_cast<Son*>(daughter1);
    if (p3 == nullptr) {
        std::cout << "cast isn't happened\n";
    } else {
        std::cout << "cast is happened\n";
    }
    /// static_cast, const_cast, reinterpret_cast
    /// bitset_cast
    return 0;
}