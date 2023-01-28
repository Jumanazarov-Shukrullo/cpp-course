#include <iostream>

/// dynamic_cast in cpp

/// syntax dynamic_cast< new_type> (expression)

/// Dynamic cast is used at run time to find out correct downcast
/// Need at least one virtual function
/// if the cast is successful , dynamic cast returns a value of new_type
/// if not and new_type is a pointer_type then it returns nullptr
/// if not and new_type is a reference_type, then it throws std::bad_cast

using namespace std;

struct A {
    virtual void print() {
        std::cout << "A\n";
    }
};

struct B : A {
    void print() {
        std::cout << "B\n";
    }
};

struct C : A {
    void print() {
        std::cout << "C\n";
    }
};

//struct Dog {
//    virtual void bark() {
//        std::cout << "bark...\n";
//    }
//
//    virtual void eat() {
//        std::cout << "dog is eating...\n";
//    }
//};
//
//struct Bird {
//    virtual void chirp() {
//        std::cout << "chirp...\n";
//    }
//
//    virtual void eat() {
//        std::cout << "bird is eating...\n";
//    }
//};
//
//struct DogBird : Dog, Bird {
//    void eat() override {
//        Dog::eat();
//    }
//
//    using Dog::eat;
//};

//class Animal {
//public:
//    virtual void eat() = 0;
//};
//
//class Dog : public Animal {
//public:
//    virtual void bark() { cout << "Woof!" << endl; }
//
//    void eat() override { cout << "The dog ate." << endl; }
//};
//
//class Bird : public Animal {
//public:
//    virtual void chirp() { cout << "Chirp!" << endl; }
//
//    void eat() override { cout << "The bird ate." << endl; }
//};
//
//class DogBird : public Dog, public Bird {
//public:
//    using Dog::eat;
//};

class Animal { public: virtual ~Animal() = default; };
class Dog : public Animal {};
class Bird : public Animal {};
void speak(const Animal& animal)
{
    if (typeid(animal) == typeid(Dog)) {
        cout << "Woof!" << endl;
    } else if (typeid(animal) == typeid(Bird)) {
        cout << "Chirp!" << endl;
    }
}


struct Entity {
    virtual void print_name() {}
};

struct Player : Entity {

};

struct Enemy: Entity {

};
/// One of the most compelling
/// and simple uses of multiple inheritance is for the implementation
/// of mixin classes.
int main() {
//    B b;
//
//    A *a = dynamic_cast<B *>(&b);
//    C *c = dynamic_cast<C *>(a);
//    if (c == nullptr) {
//        std::cout << "no\n";
//    } else {
//        c->print();
//        std::cout << "yes\n";
//    }
//    try {
//        C &r1 = dynamic_cast<C &>(b);
//    }
//    catch (std::exception &e) {
//        std::cout << e.what() << std::endl;
//    }
//    DogBird db;
//    dynamic_cast<Dog &> (db).eat();
//    db.eat();
//    Derived1 dp1;
//
//    Base* bp = dynamic_cast<Base*>(&dp1);
//
//    Derived2* dp2 = dynamic_cast<Derived1*>(bp);
//    Player* player = new Player();
//    Entity* actual_enemy = new Enemy();
//
//    Entity* actual_player = player;
//
//    Player* p2 = dynamic_cast<Player*>(actual_player);
//    Player* p3 = dynamic_cast<Player*>(actual_enemy);
    return 0;
}