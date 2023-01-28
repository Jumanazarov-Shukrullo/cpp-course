#include "Polymorphism.h"
#include <iostream>
#include <ctime>

/// this is Base class
struct Base {
    int a{};

    void f() {
        std::cout << "hello from base\n";
    }
};

/// Derived class which is inheriting from base class
struct Derived: Base {
    int a{};
    void f() {
        std::cout << "hello from derived\n";
    }
};
/// this is an example of compile time polymorphism


/**
struct Animal {
    virtual void sound() {
        std::cout << "Animal\n";
    }
    virtual void walk() {
        std::cout << "animal is walking\n";
    }
    void sleep() {
        std::cout << "sleep\n";
    }
};

struct Cow : public Animal {
    void sound() {
        std::cout << "mooow\n";
    }
};

struct Pig : public Animal {
    void sound() {
        std::cout << "wikk\n";
    }
};

struct Donkey: public Animal {
    void sound() {
        std::cout << "hee haw\n";
    }
    void walk() {
        std::cout << "donkey is walking\n";
    }
};

**/

/**
struct Shape {
    virtual void draw() {
        std::cout << "drawing...\n";
    }
};

struct Rectangle : Shape {
    void draw() override {
        std::cout << "rectangle drawing...\n";
    }
};

struct Circle : Shape {
    void draw() override {
        std::cout << "circle drawing...\n";
    }
};
    Shape* s;
    Shape ss;
    Rectangle r;
    Circle c;
    s = &ss;
    s->draw();
    s = &r;
    s->draw();
    s = &c;
    s->draw();

**/

///  Singleton pattern
/// Singleton design pattern is a software design principle that is used to restrict the instantiation of a class to one object.
/// This is useful when exactly one object is needed to coordinate actions across the system.
/// For example, if you are using a logger, that writes logs to a file,
/// you can use a singleton class to create such a logger. You can create a singleton class using the following code

/**
class Singleton {
   static Singleton *instance;
   int data;

   // Private constructor so that no objects can be created.
   Singleton() {
      data = 0;
   }

   public:
   static Singleton *get_instance() {
      if (!instance)
      instance = new Singleton;
      return instance;
   }

   int get_data() {
      return this -> data;
   }

   void set_data(int data) {
      this -> data = data;
   }
};

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton *Singleton::instance = 0;

int main(){
   Singleton *s = s->get_instance();
   cout << s->get_data() << endl;
   s->set_data(100);
   cout << s->get_data() << endl;

 */

struct A {
    A() {
        std::cout << "A\n";
    }
    virtual ~A() {
        std::cout << "~A\n";
    }
    virtual void some_method(){}
};

struct B : A {
    B() {
        std::cout << "B\n";
    }
    ~B() override {
        std::cout << "~B\n";
    }
    void some_method() final {

    }
private:
    //...//
};
int main() {
    A* b = new B;
    delete b;
    return 0;
}