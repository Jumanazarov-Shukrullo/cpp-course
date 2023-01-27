#ifndef CPP_COURSE_CARFACTORY_H
#define CPP_COURSE_CARFACTORY_H

#include <iostream>
#include <vector>

class Car {
public:
    virtual ~Car() = 0;
    virtual std::string getCarModel() = 0;
    virtual int getCarPrice(std::string&) = 0;
    virtual void getInfoAboutCar(std::string&) = 0;

};

class Mercedes : public Car {
private:

public:
};

class BMW : public Car {
private:

public:
};

class Tesla : public Car {
private:

public:
};

class Chevrolet : public Car {
private:

public:
};


#endif //CPP_COURSE_CARFACTORY_H
